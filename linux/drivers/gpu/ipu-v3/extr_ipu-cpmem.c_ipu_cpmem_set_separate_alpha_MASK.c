
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipuv3_channel {int num; struct ipu_soc* ipu; } ;
struct ipu_soc {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ipuv3_channel*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipu_soc*,int ) ;
 int FUNC_4 (struct ipu_soc*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ipuv3_channel *VAR_4)
{
 struct ipu_soc *VAR_5 = VAR_4->ipu;
 int VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_2(VAR_4->num);
 if (VAR_6 < 0)
  return;

 FUNC_1(VAR_4, VAR_2, 1);
 FUNC_1(VAR_4, VAR_1, VAR_6);
 FUNC_1(VAR_4, VAR_3, 1);

 VAR_7 = FUNC_3(VAR_5, VAR_0);
 VAR_7 |= FUNC_0(VAR_4->num);
 FUNC_4(VAR_5, VAR_7, VAR_0);
}
