
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef void* u16 ;
struct st_rng_data {scalar_t__ base; } ;
struct hwrng {scalar_t__ priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct hwrng *VAR_5, void *VAR_6, size_t VAR_7, bool VAR_8)
{
 struct st_rng_data *VAR_9 = (struct st_rng_data *)VAR_5->priv;
 u32 VAR_10;
 int VAR_11;


 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  VAR_10 = FUNC_0(VAR_9->base + VAR_4);
  if (VAR_10 & VAR_3)
   break;
  FUNC_1(1);
 }

 if (VAR_11 == VAR_2)
  return 0;

 for (VAR_11 = 0; VAR_11 < VAR_1 && VAR_11 < VAR_7; VAR_11 += 2)
  *(u16 *)(VAR_6 + VAR_11) =
   FUNC_0(VAR_9->base + VAR_0);

 return VAR_11;
}
