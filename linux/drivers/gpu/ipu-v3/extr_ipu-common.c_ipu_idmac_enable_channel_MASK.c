
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipuv3_channel {int num; struct ipu_soc* ipu; } ;
struct ipu_soc {int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipu_soc*,int ) ;
 int FUNC_3 (struct ipu_soc*,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct ipuv3_channel *VAR_0)
{
 struct ipu_soc *VAR_1 = VAR_0->ipu;
 u32 VAR_2;
 unsigned long VAR_3;

 FUNC_4(&VAR_1->lock, VAR_3);

 VAR_2 = FUNC_2(VAR_1, FUNC_0(VAR_0->num));
 VAR_2 |= FUNC_1(VAR_0->num);
 FUNC_3(VAR_1, VAR_2, FUNC_0(VAR_0->num));

 FUNC_5(&VAR_1->lock, VAR_3);

 return 0;
}
