
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipuv3_channel {unsigned int num; struct ipu_soc* ipu; } ;
struct ipu_soc {int lock; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct ipu_soc*,int,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct ipuv3_channel *VAR_1, u32 VAR_2)
{
 struct ipu_soc *VAR_3 = VAR_1->ipu;
 unsigned int VAR_4 = VAR_1->num;
 unsigned long VAR_5;

 FUNC_5(&VAR_3->lock, VAR_5);

 FUNC_4(VAR_3, 0xF0300000, VAR_0);
 switch (VAR_2) {
 case 0:
  FUNC_4(VAR_3, FUNC_3(VAR_4), FUNC_0(VAR_4));
  break;
 case 1:
  FUNC_4(VAR_3, FUNC_3(VAR_4), FUNC_1(VAR_4));
  break;
 case 2:
  FUNC_4(VAR_3, FUNC_3(VAR_4), FUNC_2(VAR_4));
  break;
 default:
  break;
 }
 FUNC_4(VAR_3, 0x0, VAR_0);

 FUNC_6(&VAR_3->lock, VAR_5);
}
