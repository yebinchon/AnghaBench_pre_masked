
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iop_adma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (struct iop_adma_chan*) ;

 int FUNC_1 () ;


 int FUNC_2 (struct iop_adma_chan*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline u32 FUNC_4(struct iop_adma_chan *VAR_0)
{
 int VAR_1 = VAR_0->device->id;

 switch (VAR_1) {
 case 129:
 case 128:
  return FUNC_3(FUNC_2(VAR_0));
 case 130:
  return FUNC_3(FUNC_0(VAR_0));
 default:
  FUNC_1();
 }
 return 0;
}
