
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iop_adma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int id; } ;



 int FUNC_0 () ;


 int FUNC_1 (struct iop_adma_chan*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static inline void FUNC_4(struct iop_adma_chan *VAR_0)
{
 u32 VAR_1 = FUNC_2(FUNC_1(VAR_0));

 switch (VAR_0->device->id) {
 case 129:
 case 128:
  VAR_1 &= (1 << 5) | (1 << 3) | (1 << 2) | (1 << 1);
  break;
 case 130:
  VAR_1 &= (1 << 5);
  break;
 default:
  FUNC_0();
 }

 FUNC_3(VAR_1, FUNC_1(VAR_0));
}
