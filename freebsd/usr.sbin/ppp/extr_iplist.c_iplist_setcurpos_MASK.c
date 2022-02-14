
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_addr {int s_addr; } ;
struct TYPE_2__ {int pos; long srcitem; struct in_addr ip; scalar_t__ nItems; scalar_t__ lstart; int * srcptr; } ;
struct iplist {unsigned int nItems; TYPE_1__ cur; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct iplist*) ;

struct in_addr
FUNC_2(struct iplist *VAR_1, long VAR_2)
{
  if (VAR_2 < 0 || (unsigned)VAR_2 >= VAR_1->nItems) {
    VAR_1->cur.pos = -1;
    VAR_1->cur.ip.s_addr = VAR_0;
    return VAR_1->cur.ip;
  }

  VAR_1->cur.srcptr = ((void*)0);
  VAR_1->cur.pos = 0;
  while (1) {
    FUNC_1(VAR_1);
    if (VAR_2 < (int)VAR_1->cur.nItems) {
      if (VAR_2) {
        VAR_1->cur.srcitem = VAR_2;
        VAR_1->cur.pos += VAR_2;
        VAR_1->cur.ip.s_addr = FUNC_0(VAR_1->cur.lstart + VAR_1->cur.srcitem);
      }
      break;
    }
    VAR_2 -= VAR_1->cur.nItems;
    VAR_1->cur.pos += VAR_1->cur.nItems;
  }

  return VAR_1->cur.ip;
}
