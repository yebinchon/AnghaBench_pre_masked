
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipuv3_channel {int num; struct ipu_soc* ipu; } ;
struct ipu_soc {int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ipu_soc*,int ) ;
 int FUNC_2 (struct ipu_soc*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct ipuv3_channel *VAR_0, bool VAR_1)
{
 struct ipu_soc *VAR_2 = VAR_0->ipu;
 unsigned long VAR_3;
 u32 VAR_4;

 FUNC_3(&VAR_2->lock, VAR_3);

 VAR_4 = FUNC_1(VAR_2, FUNC_0(VAR_0->num));
 if (VAR_1)
  VAR_4 |= 1 << (VAR_0->num % 32);
 else
  VAR_4 &= ~(1 << (VAR_0->num % 32));
 FUNC_2(VAR_2, VAR_4, FUNC_0(VAR_0->num));

 FUNC_4(&VAR_2->lock, VAR_3);
}
