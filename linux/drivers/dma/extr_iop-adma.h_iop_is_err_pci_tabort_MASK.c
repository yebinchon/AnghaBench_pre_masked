
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iop_adma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int id; } ;




 int FUNC_0 (int,unsigned long*) ;

__attribute__((used)) static inline int
FUNC_1(unsigned long VAR_0, struct iop_adma_chan *VAR_1)
{
 switch (VAR_1->device->id) {
 case 129:
 case 128:
  return FUNC_0(2, &VAR_0);
 default:
  return 0;
 }
}
