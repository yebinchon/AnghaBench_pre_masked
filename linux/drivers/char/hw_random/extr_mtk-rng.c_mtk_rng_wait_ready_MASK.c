
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_rng {scalar_t__ base; } ;
struct hwrng {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int,int,int ,int ) ;
 struct mtk_rng* FUNC_2 (struct hwrng*) ;

__attribute__((used)) static bool FUNC_3(struct hwrng *VAR_4, bool VAR_5)
{
 struct mtk_rng *VAR_6 = FUNC_2(VAR_4);
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6->base + VAR_0) & VAR_1;
 if (!VAR_7 && VAR_5)
  FUNC_1(VAR_6->base + VAR_0, VAR_7,
       VAR_7 & VAR_1, VAR_3,
       VAR_2);
 return !!VAR_7;
}
