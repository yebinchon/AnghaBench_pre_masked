
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_blockwise_in_fn ;


 int FUNC_0 (int *,size_t*,size_t,int ,size_t,int ,void*) ;
 int FUNC_1 (int *,size_t*,size_t,int *,int,int ,void*) ;

void FUNC_2(uint8_t *VAR_0, size_t *VAR_1,
                          size_t VAR_2,
                          uint8_t VAR_3, uint8_t VAR_4, uint8_t VAR_5,
                          size_t VAR_6,
                          cf_blockwise_in_fn VAR_7,
                          void *VAR_8)
{

  switch (VAR_6)
  {
    case 0: break;
    case 1: VAR_3 ^= VAR_5;
            FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_3, 1, VAR_7, VAR_8);
            break;
    case 2:
            FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_3, 1, VAR_7, VAR_8);
            FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_5, 1, VAR_7, VAR_8);
            break;
    default:
            FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_3, 1, VAR_7, VAR_8);



            if (VAR_5 != VAR_4)
            {
              FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_6 - 2, VAR_7, VAR_8);
              FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_5, 1, VAR_7, VAR_8);
            } else {
              FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_6 - 1, VAR_7, VAR_8);
            }

            break;
  }
}
