
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_cryp {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mtk_cryp *VAR_8, int VAR_9)
{
 u32 VAR_10;

 if (VAR_9 == VAR_7)
  VAR_10 = FUNC_2(VAR_8->base + VAR_1);
 else
  VAR_10 = FUNC_2(VAR_8->base + FUNC_1(VAR_9));

 VAR_10 &= VAR_6;
 if (VAR_10 != VAR_4 && VAR_10 != VAR_5)
  return -VAR_2;

 if (VAR_9 == VAR_7)
  VAR_10 = FUNC_2(VAR_8->base + VAR_0);
 else
  VAR_10 = FUNC_2(VAR_8->base + FUNC_0(VAR_9));

 VAR_10 &= VAR_3;
 if (!VAR_10 || VAR_10 > 32)
  return -VAR_2;

 return 0;
}
