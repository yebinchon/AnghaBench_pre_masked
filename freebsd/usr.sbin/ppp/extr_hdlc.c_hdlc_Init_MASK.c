
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcp {int dummy; } ;
struct TYPE_2__ {struct lcp* owner; } ;
struct hdlc {TYPE_1__ lqm; } ;


 int FUNC_0 (struct hdlc*,char,int) ;

void
FUNC_1(struct hdlc *VAR_0, struct lcp *VAR_1)
{
  FUNC_0(VAR_0, '\0', sizeof(struct hdlc));
  VAR_0->lqm.owner = VAR_1;
}
