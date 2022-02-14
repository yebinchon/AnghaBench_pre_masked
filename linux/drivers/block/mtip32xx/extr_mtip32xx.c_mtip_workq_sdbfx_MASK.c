
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtip_port {scalar_t__* completed; struct driver_data* dd; } ;
struct mtip_cmd {int dummy; } ;
struct driver_data {scalar_t__ mmio; int irq_workers_active; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 struct mtip_cmd* FUNC_2 (struct driver_data*,int) ;
 int FUNC_3 (struct mtip_cmd*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_6(struct mtip_port *VAR_2, int VAR_3,
       u32 VAR_4)
{
 struct driver_data *VAR_5 = VAR_2->dd;
 int VAR_6, VAR_7;
 struct mtip_cmd *VAR_8;

 if (!VAR_4) {
  FUNC_0(!VAR_4);
  return;
 }

 FUNC_5(VAR_4, VAR_2->completed[VAR_3]);


 for (VAR_7 = 0; (VAR_7 < 32) && VAR_4; VAR_7++) {
  if (VAR_4 & 0x01) {
   VAR_6 = (VAR_3 << 5) | VAR_7;


   if (FUNC_4(VAR_6 == VAR_1))
    continue;

   VAR_8 = FUNC_2(VAR_5, VAR_6);
   FUNC_3(VAR_8, 0);
  }
  VAR_4 >>= 1;
 }


 if (FUNC_1(&VAR_5->irq_workers_active) == 0)
  FUNC_5(0xffffffff, VAR_5->mmio + VAR_0);
}
