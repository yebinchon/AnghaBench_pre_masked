
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct optee_rng_private {int data_rate; } ;
struct hwrng {int dummy; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct optee_rng_private*,int *,size_t) ;
 int FUNC_1 (int) ;
 struct optee_rng_private* FUNC_2 (struct hwrng*) ;

__attribute__((used)) static int FUNC_3(struct hwrng *VAR_1, void *VAR_2, size_t VAR_3, bool VAR_4)
{
 struct optee_rng_private *VAR_5 = FUNC_2(VAR_1);
 size_t VAR_6 = 0, VAR_7 = 0;
 int VAR_8 = 1;
 u8 *VAR_9 = VAR_2;

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 while (VAR_6 == 0) {
  VAR_7 = FUNC_0(VAR_5, VAR_9, (VAR_3 - VAR_6));

  VAR_9 += VAR_7;
  VAR_6 += VAR_7;

  if (VAR_4) {
   if (VAR_8-- == 0)
    return VAR_6;
   FUNC_1((1000 * (VAR_3 - VAR_6)) / VAR_5->data_rate);
  } else {
   return VAR_6;
  }
 }

 return VAR_6;
}
