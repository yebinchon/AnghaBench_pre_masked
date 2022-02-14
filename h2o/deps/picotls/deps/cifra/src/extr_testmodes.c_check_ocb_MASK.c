
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_aes_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *,void const*,size_t) ;
 int FUNC_3 (int *,int *,void const*,size_t,void const*,size_t,void const*,size_t,int*,size_t,int*) ;
 int FUNC_4 (int *,int *,void const*,size_t,void const*,size_t,void const*,size_t,int*,int*,size_t) ;
 scalar_t__ FUNC_5 (int*,void const*,size_t) ;

__attribute__((used)) static void FUNC_6(const void *VAR_1, size_t VAR_2,
                      const void *VAR_3, size_t VAR_4,
                      const void *VAR_5, size_t VAR_6,
                      const void *VAR_7, size_t VAR_8,
                      const void *VAR_9, size_t VAR_10,
                      const void *VAR_11, size_t VAR_12)
{
  uint8_t VAR_13[40], VAR_14[16];

  FUNC_1(VAR_10 == VAR_6);
  FUNC_1(VAR_10 <= sizeof VAR_13);
  FUNC_1(VAR_12 <= sizeof VAR_14);

  cf_aes_context VAR_15;
  FUNC_2(&VAR_15, VAR_1, VAR_2);

  FUNC_4(&VAR_0, &VAR_15,
                 VAR_5, VAR_6,
                 VAR_3, VAR_4,
                 VAR_7, VAR_8,
                 VAR_13,
                 VAR_14, VAR_12);

  FUNC_0(FUNC_5(VAR_14, VAR_11, VAR_12) == 0);
  FUNC_0(FUNC_5(VAR_13, VAR_9, VAR_10) == 0);

  uint8_t VAR_16[40];
  int VAR_17;
  VAR_17 = FUNC_3(&VAR_0, &VAR_15,
                       VAR_9, VAR_10,
                       VAR_3, VAR_4,
                       VAR_7, VAR_8,
                       VAR_14, VAR_12,
                       VAR_16);
  FUNC_0(VAR_17 == 0);
  FUNC_0(FUNC_5(VAR_16, VAR_5, VAR_6) == 0);

  VAR_14[0] ^= 0xff;

  VAR_17 = FUNC_3(&VAR_0, &VAR_15,
                       VAR_9, VAR_10,
                       VAR_3, VAR_4,
                       VAR_7, VAR_8,
                       VAR_14, VAR_12,
                       VAR_16);
  FUNC_0(VAR_17 == 1);
}
