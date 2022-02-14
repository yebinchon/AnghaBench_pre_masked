
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rio_priv {scalar_t__ maint_win; TYPE_1__* maint_atmu_regs; } ;
struct rio_mport {struct rio_priv* priv; } ;
struct TYPE_2__ {int rowtar; int rowtear; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (char*,int,int,int,int,int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_7(struct rio_mport *VAR_3, int VAR_4, u16 VAR_5,
   u8 VAR_6, u32 VAR_7, int VAR_8, u32 VAR_9)
{
 struct rio_priv *VAR_10 = VAR_3->priv;
 unsigned long VAR_11;
 u8 *VAR_12;
 int VAR_13 = 0;

 FUNC_4
  ("fsl_rio_config_write:"
  " index %d destid %d hopcount %d offset %8.8x len %d val %8.8x\n",
  VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);



 if (VAR_7 > (0x1000000 - VAR_8) || !FUNC_0(VAR_7, VAR_8))
  return -VAR_0;

 FUNC_5(&VAR_2, VAR_11);

 FUNC_3(&VAR_10->maint_atmu_regs->rowtar,
   (VAR_5 << 22) | (VAR_6 << 12) | (VAR_7 >> 12));
 FUNC_3(&VAR_10->maint_atmu_regs->rowtear, (VAR_5 >> 10));

 VAR_12 = (u8 *) VAR_10->maint_win + (VAR_7 & (VAR_1 - 1));
 switch (VAR_8) {
 case 1:
  FUNC_1((u8 *) VAR_12, VAR_9);
  break;
 case 2:
  FUNC_2((u16 *) VAR_12, VAR_9);
  break;
 case 4:
  FUNC_3((u32 *) VAR_12, VAR_9);
  break;
 default:
  VAR_13 = -VAR_0;
 }
 FUNC_6(&VAR_2, VAR_11);

 return VAR_13;
}
