
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ipuv3_channel {unsigned int num; struct ipu_soc* ipu; } ;
struct ipu_soc {int lock; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct ipu_soc*,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct ipuv3_channel *VAR_0, u32 VAR_1)
{
 struct ipu_soc *VAR_2 = VAR_0->ipu;
 unsigned int VAR_3 = VAR_0->num;
 unsigned long VAR_4;

 FUNC_4(&VAR_2->lock, VAR_4);


 if (VAR_1 == 0)
  FUNC_3(VAR_2, FUNC_2(VAR_3), FUNC_0(VAR_3));
 else
  FUNC_3(VAR_2, FUNC_2(VAR_3), FUNC_1(VAR_3));

 FUNC_5(&VAR_2->lock, VAR_4);
}
