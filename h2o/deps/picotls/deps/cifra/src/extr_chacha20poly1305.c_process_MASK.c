
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int cf_poly1305 ;
typedef int const cf_chacha20_ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int VAR_2 ;
 int FUNC_1 (int const*,int const*,int const*,size_t) ;
 int FUNC_2 (int const*,int const*,int,int const*,int) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *,int const*,int const*) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int const*,int) ;
 scalar_t__ FUNC_7 (int const*,int const*,int) ;
 int FUNC_8 (int const*,int const*,int) ;
 int FUNC_9 (size_t,int const*) ;

__attribute__((used)) static int FUNC_10(const uint8_t VAR_3[32],
                   const uint8_t VAR_4[12],
                   const uint8_t *VAR_5, size_t VAR_6,
                   const uint8_t *VAR_7, size_t VAR_8,
                   uint8_t *VAR_9,
                   int VAR_10,
                   uint8_t VAR_11[16])
{



  uint8_t VAR_12[16] = { 0 };
  FUNC_8(VAR_12 + 4, VAR_4, 12);

  uint8_t VAR_13[32] = { 0 };
  cf_chacha20_ctx VAR_14;
  FUNC_2(&VAR_14, VAR_3, 32, VAR_12, 4);
  FUNC_1(&VAR_14, VAR_13, VAR_13, sizeof VAR_13);


  cf_poly1305 VAR_15;
  FUNC_4(&VAR_15, VAR_13, VAR_13 + 16);
  FUNC_6(VAR_13, sizeof VAR_13);


  FUNC_1(&VAR_14, VAR_13, VAR_13, sizeof VAR_13);
  FUNC_6(VAR_13, sizeof VAR_13);



  uint8_t VAR_16[16] = { 0 };




  FUNC_5(&VAR_15, VAR_5, VAR_6);
  FUNC_5(&VAR_15, VAR_16, (16 - ((VAR_6) & 0xf)));


  if (VAR_10 == VAR_0)
  {


    FUNC_1(&VAR_14, VAR_7, VAR_9, VAR_8);
    FUNC_5(&VAR_15, VAR_9, VAR_8);
  } else {


    FUNC_5(&VAR_15, VAR_7, VAR_8);
  }


  FUNC_5(&VAR_15, VAR_16, (16 - ((VAR_8) & 0xf)));


  FUNC_9(VAR_6, VAR_16);
  FUNC_9(VAR_8, VAR_16 + 8);
  FUNC_5(&VAR_15, VAR_16, sizeof VAR_16);



  if (VAR_10 == VAR_0)
  {
    FUNC_3(&VAR_15, VAR_11);
    FUNC_6(&VAR_14, sizeof VAR_14);
    return VAR_2;
  }



  uint8_t VAR_17[16];
  FUNC_3(&VAR_15, VAR_17);

  if (FUNC_7(VAR_17, VAR_11, sizeof VAR_17))
  {
    FUNC_1(&VAR_14, VAR_7, VAR_9, VAR_8);
    FUNC_6(&VAR_14, sizeof VAR_14);
    FUNC_6(VAR_17, sizeof VAR_17);
    return VAR_2;
  } else {
    FUNC_6(VAR_9, VAR_8);
    FUNC_6(&VAR_14, sizeof VAR_14);
    FUNC_6(VAR_17, sizeof VAR_17);
    return VAR_1;
  }
}
