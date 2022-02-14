
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iovec {int iov_len; int * iov_base; } ;
struct TYPE_7__ {int authtimer; } ;
struct TYPE_8__ {TYPE_3__ auth; } ;
struct TYPE_6__ {int authtimer; } ;
struct TYPE_5__ {int timer; } ;
struct datalink {struct datalink* name; int * physical; TYPE_4__ chap; TYPE_2__ pap; int cbcp; TYPE_1__ dial; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct datalink*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,struct iovec*,int*,int,int*,int*) ;
 int * FUNC_4 (struct datalink*,int) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct datalink *VAR_2, struct iovec *VAR_3, int *VAR_4, int VAR_5,
             int *VAR_6, int *VAR_7)
{

  int VAR_8;

  if (VAR_2) {
    FUNC_5(&VAR_2->dial.timer);

    FUNC_0(&VAR_2->cbcp);
    FUNC_5(&VAR_2->pap.authtimer);
    FUNC_5(&VAR_2->chap.auth.authtimer);
  }

  if (*VAR_4 >= VAR_5 - 1) {
    FUNC_2(VAR_1, "Toiov: No room for datalink !\n");
    if (VAR_2) {
      FUNC_1(VAR_2->name);
      FUNC_1(VAR_2);
    }
    return -1;
  }

  VAR_3[*VAR_4].iov_base = (void *)VAR_2;
  VAR_3[(*VAR_4)++].iov_len = sizeof *VAR_2;
  VAR_3[*VAR_4].iov_base = VAR_2 ? FUNC_4(VAR_2->name, VAR_0) : ((void*)0);
  VAR_3[(*VAR_4)++].iov_len = VAR_0;

  VAR_8 = FUNC_3(VAR_2 ? VAR_2->physical : ((void*)0), VAR_3, VAR_4, VAR_5, VAR_6,
                         VAR_7);

  if (VAR_8 == -1 && VAR_2) {
    FUNC_1(VAR_2->name);
    FUNC_1(VAR_2);
  }

  return VAR_8;
}
