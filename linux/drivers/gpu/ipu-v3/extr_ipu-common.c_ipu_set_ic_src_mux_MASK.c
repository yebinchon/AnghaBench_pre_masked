
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_soc {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipu_soc*,int ) ;
 int FUNC_1 (struct ipu_soc*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct ipu_soc *VAR_3, int VAR_4, bool VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7;

 FUNC_2(&VAR_3->lock, VAR_6);

 VAR_7 = FUNC_0(VAR_3, VAR_0);
 if (VAR_5)
  VAR_7 |= VAR_2;
 else
  VAR_7 &= ~VAR_2;

 if (VAR_4 == 1)
  VAR_7 |= VAR_1;
 else
  VAR_7 &= ~VAR_1;

 FUNC_1(VAR_3, VAR_7, VAR_0);

 FUNC_3(&VAR_3->lock, VAR_6);
}
