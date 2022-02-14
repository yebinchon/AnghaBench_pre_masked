
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipuv3_channel {int num; struct ipu_soc* ipu; } ;
struct ipu_soc {int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ipu_soc*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

bool FUNC_7(struct ipuv3_channel *VAR_0, u32 VAR_1)
{
 struct ipu_soc *VAR_2 = VAR_0->ipu;
 unsigned long VAR_3;
 u32 VAR_4 = 0;

 FUNC_5(&VAR_2->lock, VAR_3);
 switch (VAR_1) {
 case 0:
  VAR_4 = FUNC_4(VAR_2, FUNC_0(VAR_0->num));
  break;
 case 1:
  VAR_4 = FUNC_4(VAR_2, FUNC_1(VAR_0->num));
  break;
 case 2:
  VAR_4 = FUNC_4(VAR_2, FUNC_2(VAR_0->num));
  break;
 }
 FUNC_6(&VAR_2->lock, VAR_3);

 return ((VAR_4 & FUNC_3(VAR_0->num)) != 0);
}
