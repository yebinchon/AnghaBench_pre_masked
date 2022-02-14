
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ class; scalar_t__ len; int address; } ;
struct peerid {TYPE_1__ enddisc; int authname; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;

int
FUNC_2(const struct peerid *VAR_0, const struct peerid *VAR_1)
{
  return !FUNC_1(VAR_0->authname, VAR_1->authname) &&
         VAR_0->enddisc.class == VAR_1->enddisc.class &&
         VAR_0->enddisc.len == VAR_1->enddisc.len &&
         !FUNC_0(VAR_0->enddisc.address, VAR_1->enddisc.address, VAR_0->enddisc.len);
}
