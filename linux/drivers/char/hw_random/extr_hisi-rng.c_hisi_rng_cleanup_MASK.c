
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrng {int dummy; } ;
struct hisi_rng {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 struct hisi_rng* FUNC_0 (struct hwrng*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct hwrng *VAR_1)
{
 struct hisi_rng *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(0, VAR_2->base + VAR_0);
}
