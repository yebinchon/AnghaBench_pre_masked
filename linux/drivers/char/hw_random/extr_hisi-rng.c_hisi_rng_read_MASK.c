
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrng {int dummy; } ;
struct hisi_rng {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct hisi_rng* FUNC_1 (struct hwrng*) ;

__attribute__((used)) static int FUNC_2(struct hwrng *VAR_1, void *VAR_2, size_t VAR_3, bool VAR_4)
{
 struct hisi_rng *VAR_5 = FUNC_1(VAR_1);
 u32 *VAR_6 = VAR_2;

 *VAR_6 = FUNC_0(VAR_5->base + VAR_0);
 return 4;
}
