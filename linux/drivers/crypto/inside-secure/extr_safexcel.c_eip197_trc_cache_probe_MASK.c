
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct safexcel_crypto_priv {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct safexcel_crypto_priv*,int,int*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static u32 FUNC_4(struct safexcel_crypto_priv *VAR_1,
      int VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8;





 VAR_5 = 1 << (16 + VAR_2);
 VAR_6 = 0;
 VAR_8 = FUNC_1(VAR_2 - 1, 0);
 while ((VAR_5 - VAR_6) > 32) {

  VAR_7 = (VAR_5 + VAR_6) >> 1;
  FUNC_0(VAR_1, VAR_7, &VAR_8);
  FUNC_3((VAR_7 | (VAR_6 << 16)) & VAR_3,
   VAR_1->base + VAR_0 +
   (VAR_7 & 0xffff));


  FUNC_0(VAR_1, VAR_6, &VAR_8);
  FUNC_3((VAR_6 | (VAR_5 << 16)) & VAR_3,
   VAR_1->base + VAR_0 +
   (VAR_6 & 0xffff));


  FUNC_0(VAR_1, VAR_7, &VAR_8);
  VAR_4 = FUNC_2(VAR_1->base + VAR_0 +
       (VAR_7 & 0xffff));

  if (VAR_4 == ((VAR_7 | (VAR_6 << 16)) & VAR_3)) {

   VAR_6 = VAR_7;
  } else {

   VAR_5 = VAR_7;
  }
 }
 return VAR_5;
}
