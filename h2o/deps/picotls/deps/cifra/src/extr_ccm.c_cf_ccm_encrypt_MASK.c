
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_5__ {size_t blocksz; } ;
typedef TYPE_1__ cf_prp ;
typedef int cf_ctr ;
typedef int cf_cbcmac_stream ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int const*,size_t) ;
 int FUNC_1 (int *,int const*,size_t,int const*,size_t,size_t,size_t,size_t,size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const*,size_t,int const*,size_t) ;
 int FUNC_4 (int *,TYPE_1__ const*,void*) ;
 int FUNC_5 (int *,int const*) ;
 int FUNC_6 (int *,int const*,size_t) ;
 int FUNC_7 (int *,int const*,int const*,size_t) ;
 int FUNC_8 (int *,size_t,size_t) ;
 int FUNC_9 (int *,TYPE_1__ const*,void*,int const*) ;
 int FUNC_10 (int const*,int const*,size_t) ;
 int FUNC_11 (int *) ;

void FUNC_12(const cf_prp *VAR_1, void *VAR_2,
                    const uint8_t *VAR_3, size_t VAR_4, size_t VAR_5,
                    const uint8_t *VAR_6, size_t VAR_7,
                    const uint8_t *VAR_8, size_t VAR_9,
                    uint8_t *VAR_10,
                    uint8_t *VAR_11, size_t VAR_12)
{
  uint8_t VAR_13[VAR_0];

  FUNC_2(VAR_12 >= 4 && VAR_12 <= 16 && VAR_12 % 2 == 0);
  FUNC_2(VAR_5 >= 2 && VAR_5 <= 8);
  FUNC_2(VAR_9 == VAR_1->blocksz - VAR_5 - 1);

  cf_cbcmac_stream VAR_14;
  FUNC_4(&VAR_14, VAR_1, VAR_2);


  FUNC_1(&VAR_14, VAR_13, VAR_1->blocksz,
             VAR_8, VAR_9,
             VAR_5, VAR_4, VAR_7, VAR_12);


  if (VAR_7)
    FUNC_0(&VAR_14, VAR_13, VAR_6, VAR_7);


  FUNC_6(&VAR_14, VAR_3, VAR_4);
  FUNC_11(&VAR_14);


  FUNC_5(&VAR_14, VAR_13);



  uint8_t VAR_15[VAR_0];
  FUNC_3(VAR_15, VAR_5, VAR_8, VAR_9);

  cf_ctr VAR_16;
  FUNC_9(&VAR_16, VAR_1, VAR_2, VAR_15);
  FUNC_8(&VAR_16, VAR_1->blocksz - VAR_5, VAR_5);


  FUNC_7(&VAR_16, VAR_13, VAR_13, VAR_1->blocksz);
  FUNC_10(VAR_11, VAR_13, VAR_12);


  FUNC_7(&VAR_16, VAR_3, VAR_10, VAR_4);
}
