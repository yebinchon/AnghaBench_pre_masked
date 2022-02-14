
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fimd_context {scalar_t__ regs; TYPE_1__* driver_data; } ;
struct TYPE_2__ {scalar_t__ has_shadowcon; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct fimd_context *VAR_3,
        unsigned int VAR_4, bool VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 if (VAR_3->driver_data->has_shadowcon) {
  VAR_6 = VAR_2;
  VAR_7 = FUNC_0(VAR_4);
 } else {
  VAR_6 = VAR_0;
  VAR_7 = VAR_1;
 }

 VAR_8 = FUNC_1(VAR_3->regs + VAR_6);
 if (VAR_5)
  VAR_8 |= VAR_7;
 else
  VAR_8 &= ~VAR_7;
 FUNC_2(VAR_8, VAR_3->regs + VAR_6);
}
