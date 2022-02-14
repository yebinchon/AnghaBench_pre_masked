
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct mbuf {size_t m_size; size_t m_len; int m_type; } ;
struct TYPE_4__ {scalar_t__ count; struct mbucket* next; } ;
struct TYPE_5__ {TYPE_1__ f; struct mbuf m; } ;
struct mbucket {TYPE_2__ u; } ;
struct TYPE_6__ {size_t octets; int fragments; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mbucket** FUNC_1 (size_t) ;
 size_t VAR_6 ;
 size_t FUNC_2 (size_t) ;
 TYPE_3__* VAR_7 ;
 int FUNC_3 (int ,char*,unsigned long,...) ;
 scalar_t__ FUNC_4 (size_t) ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct mbuf*,char,int) ;

struct mbuf *
FUNC_7(size_t VAR_9, int VAR_10)
{
  struct mbucket **VAR_11;
  struct mbuf *VAR_12;
  size_t VAR_13;

  if (VAR_10 > VAR_4) {
    FUNC_3(VAR_3, "Bad mbuf type %d\n", VAR_10);
    VAR_10 = VAR_5;
  }

  if (VAR_9 > VAR_6 || VAR_9 == 0) {
    FUNC_3(VAR_3, "Request for mbuf size %lu (\"%s\") denied !\n",
               (u_long)VAR_9, FUNC_5(VAR_10));
    FUNC_0(VAR_1);
  }

  VAR_11 = FUNC_1(VAR_9);
  VAR_13 = FUNC_2(VAR_9);

  if (*VAR_11) {

    VAR_12 = &(*VAR_11)->u.m;
    if (--(*VAR_11)->u.f.count == 0)
      *VAR_11 = (*VAR_11)->u.f.next;
    else {
      ((struct mbucket *)((char *)*VAR_11 + VAR_13))->u.f.count = (*VAR_11)->u.f.count;
      *VAR_11 = (struct mbucket *)((char *)*VAR_11 + VAR_13);
      (*VAR_11)->u.f.next = ((void*)0);
    }
  } else {




    *VAR_11 = (struct mbucket *)FUNC_4(VAR_0 * VAR_13);
    if (*VAR_11 == ((void*)0)) {
      FUNC_3(VAR_2, "Failed to allocate memory (%lu)\n",
                 (unsigned long)VAR_0 * VAR_13);
      FUNC_0(VAR_1);
    }
    VAR_12 = &(*VAR_11)->u.m;
    *VAR_11 = (struct mbucket *)((char *)*VAR_11 + VAR_13);
    (*VAR_11)->u.f.count = VAR_0 - 1;
    (*VAR_11)->u.f.next = ((void*)0);
  }

  VAR_8++;

  FUNC_6(VAR_12, '\0', sizeof(struct mbuf));
  VAR_12->m_size = VAR_13 - sizeof *VAR_12;
  VAR_12->m_len = VAR_9;
  VAR_12->m_type = VAR_10;

  VAR_7[VAR_10].fragments++;
  VAR_7[VAR_10].octets += VAR_12->m_size;

  return VAR_12;
}
