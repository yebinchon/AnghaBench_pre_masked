
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iop_adma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (struct iop_adma_chan*) ;



 int FUNC_1 (struct iop_adma_chan*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct iop_adma_chan *VAR_0,
      u32 VAR_1)
{
 int VAR_2 = VAR_0->device->id;

 switch (VAR_2) {
 case 129:
 case 128:
  FUNC_2(VAR_1, FUNC_1(VAR_0));
  break;
 case 130:
  FUNC_2(VAR_1, FUNC_0(VAR_0));
  break;
 }

}
