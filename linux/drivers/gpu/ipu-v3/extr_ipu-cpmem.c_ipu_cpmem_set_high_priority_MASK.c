
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipuv3_channel {int num; struct ipu_soc* ipu; } ;
struct ipu_soc {scalar_t__ ipu_type; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ipuv3_channel*,int ,int) ;
 int FUNC_2 (struct ipu_soc*,int ) ;
 int FUNC_3 (struct ipu_soc*,int,int ) ;

void FUNC_4(struct ipuv3_channel *VAR_2)
{
 struct ipu_soc *VAR_3 = VAR_2->ipu;
 u32 VAR_4;

 if (VAR_3->ipu_type == VAR_0)
  FUNC_1(VAR_2, VAR_1, 1);

 VAR_4 = FUNC_2(VAR_3, FUNC_0(VAR_2->num));
 VAR_4 |= 1 << (VAR_2->num % 32);
 FUNC_3(VAR_3, VAR_4, FUNC_0(VAR_2->num));
}
