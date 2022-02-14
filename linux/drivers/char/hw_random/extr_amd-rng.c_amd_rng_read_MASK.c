
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hwrng {scalar_t__ priv; } ;
struct amd768_priv {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct hwrng *VAR_2, void *VAR_3, size_t VAR_4, bool VAR_5)
{
 u32 *VAR_6 = VAR_3;
 struct amd768_priv *VAR_7 = (struct amd768_priv *)VAR_2->priv;
 size_t VAR_8 = 0;

 int VAR_9 = VAR_4 / 4 + 1;






 while (VAR_8 < VAR_4) {
  if (FUNC_0(VAR_7->iobase + VAR_1) == 0) {
   if (VAR_5) {

    FUNC_1(128, 196);
    if (VAR_9-- == 0)
     return VAR_8;
   } else {
    return 0;
   }
  } else {
   *VAR_6 = FUNC_0(VAR_7->iobase + VAR_0);
   VAR_6++;
   VAR_8 += 4;
  }
 }

 return VAR_8;
}
