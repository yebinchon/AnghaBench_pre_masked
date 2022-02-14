
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t blocksz; } ;
typedef TYPE_1__ cf_prp ;
typedef int cf_ctr ;
typedef int cf_cmac_stream ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__ const*,void*) ;
 int FUNC_2 (int *,int const*,int*,size_t) ;
 int FUNC_3 (int *,TYPE_1__ const*,void*,int*) ;
 int FUNC_4 (int *,int,int const*,size_t,int*) ;
 int FUNC_5 (int*,int const*,size_t) ;

int FUNC_6(const cf_prp *VAR_1, void *VAR_2,
                   const uint8_t *VAR_3, size_t VAR_4,
                   const uint8_t *VAR_5, size_t VAR_6,
                   const uint8_t *VAR_7, size_t VAR_8,
                   const uint8_t *VAR_9, size_t VAR_10,
                   uint8_t *VAR_11)
{
  uint8_t VAR_12[VAR_0],
          VAR_13[VAR_0],
          VAR_14[VAR_0];

  cf_cmac_stream VAR_15;
  FUNC_1(&VAR_15, VAR_1, VAR_2);


  FUNC_4(&VAR_15, 0, VAR_7, VAR_8, VAR_12);


  FUNC_4(&VAR_15, 1, VAR_5, VAR_6, VAR_13);


  FUNC_4(&VAR_15, 2, VAR_3, VAR_4, VAR_14);

  uint8_t VAR_16[VAR_0];
  FUNC_0(VAR_10 && VAR_10 <= VAR_1->blocksz);
  for (size_t VAR_17 = 0; VAR_17 < VAR_10; VAR_17++)
    VAR_16[VAR_17] = VAR_12[VAR_17] ^ VAR_14[VAR_17] ^ VAR_13[VAR_17];

  if (!FUNC_5(VAR_16, VAR_9, VAR_10))
    return 1;

  cf_ctr VAR_18;
  FUNC_3(&VAR_18, VAR_1, VAR_2, VAR_12);
  FUNC_2(&VAR_18, VAR_3, VAR_11, VAR_4);
  return 0;
}
