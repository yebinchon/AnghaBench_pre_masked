
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ priv; } ;
struct mtk_rng {TYPE_1__ rng; scalar_t__ base; } ;
struct hwrng {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hwrng*,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (scalar_t__) ;
 struct mtk_rng* FUNC_5 (struct hwrng*) ;

__attribute__((used)) static int FUNC_6(struct hwrng *VAR_2, void *VAR_3, size_t VAR_4, bool VAR_5)
{
 struct mtk_rng *VAR_6 = FUNC_5(VAR_2);
 int VAR_7 = 0;

 FUNC_1((struct device *)VAR_6->rng.priv);

 while (VAR_4 >= sizeof(u32)) {
  if (!FUNC_0(VAR_2, VAR_5))
   break;

  *(u32 *)VAR_3 = FUNC_4(VAR_6->base + VAR_1);
  VAR_7 += sizeof(u32);
  VAR_3 += sizeof(u32);
  VAR_4 -= sizeof(u32);
 }

 FUNC_2((struct device *)VAR_6->rng.priv);
 FUNC_3((struct device *)VAR_6->rng.priv);

 return VAR_7 || !VAR_5 ? VAR_7 : -VAR_0;
}
