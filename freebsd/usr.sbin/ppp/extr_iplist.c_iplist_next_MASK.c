
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_addr {void* s_addr; } ;
struct TYPE_2__ {int pos; scalar_t__ srcitem; scalar_t__ nItems; scalar_t__ lstart; struct in_addr ip; int * srcptr; } ;
struct iplist {TYPE_1__ cur; } ;


 void* VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct iplist*) ;

struct in_addr
FUNC_2(struct iplist *VAR_1)
{
  if (VAR_1->cur.pos == -1) {
    VAR_1->cur.srcptr = ((void*)0);
    if (!FUNC_1(VAR_1)) {
      VAR_1->cur.ip.s_addr = VAR_0;
      return VAR_1->cur.ip;
    }
  } else if (++VAR_1->cur.srcitem == VAR_1->cur.nItems) {
    if (!FUNC_1(VAR_1)) {
      VAR_1->cur.ip.s_addr = VAR_0;
      VAR_1->cur.pos = -1;
      return VAR_1->cur.ip;
    }
  } else
    VAR_1->cur.ip.s_addr = FUNC_0(VAR_1->cur.lstart + VAR_1->cur.srcitem);
  VAR_1->cur.pos++;

  return VAR_1->cur.ip;
}
