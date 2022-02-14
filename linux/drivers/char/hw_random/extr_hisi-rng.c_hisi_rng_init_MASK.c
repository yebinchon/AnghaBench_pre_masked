
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrng {int dummy; } ;
struct hisi_rng {scalar_t__ base; } ;
typedef int seed ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int) ;
 int VAR_5 ;
 struct hisi_rng* FUNC_1 (struct hwrng*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct hwrng *VAR_6)
{
 struct hisi_rng *VAR_7 = FUNC_1(VAR_6);
 int VAR_8 = VAR_1;
 u32 VAR_9;


 FUNC_0(&VAR_9, sizeof(VAR_9));

 FUNC_2(VAR_9, VAR_7->base + VAR_3);






 if (VAR_5 == 1)
  VAR_8 |= VAR_2 | VAR_4;

 FUNC_2(VAR_8, VAR_7->base + VAR_0);
 return 0;
}
