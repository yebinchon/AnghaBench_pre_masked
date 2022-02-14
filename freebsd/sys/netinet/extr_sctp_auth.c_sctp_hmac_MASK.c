
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int sctp_hash_context_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,scalar_t__) ;
 int FUNC_1 (int*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,int*,scalar_t__) ;

uint32_t
FUNC_7(uint16_t VAR_1, uint8_t *VAR_2, uint32_t VAR_3,
    uint8_t *VAR_4, uint32_t VAR_5, uint8_t *VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;
 sctp_hash_context_t VAR_9;
 uint8_t VAR_10[128], VAR_11[128];
 uint8_t VAR_12[VAR_0];
 uint32_t VAR_13;


 if ((VAR_2 == ((void*)0)) || (VAR_3 == 0) || (VAR_4 == ((void*)0)) ||
     (VAR_5 == 0) || (VAR_6 == ((void*)0))) {

  return (0);
 }

 VAR_7 = FUNC_3(VAR_1);
 if (VAR_7 == 0)
  return (0);


 VAR_8 = FUNC_2(VAR_1);
 if (VAR_3 > VAR_8) {
  FUNC_5(VAR_1, &VAR_9);
  FUNC_6(VAR_1, &VAR_9, VAR_2, VAR_3);
  FUNC_4(VAR_1, &VAR_9, VAR_12);

  VAR_3 = VAR_7;
  VAR_2 = VAR_12;
 }

 FUNC_1(VAR_10, 0, VAR_8);
 FUNC_1(VAR_11, 0, VAR_8);
 FUNC_0(VAR_10, VAR_2, VAR_3);
 FUNC_0(VAR_11, VAR_2, VAR_3);


 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  VAR_10[VAR_13] ^= 0x36;
  VAR_11[VAR_13] ^= 0x5c;
 }


 FUNC_5(VAR_1, &VAR_9);
 FUNC_6(VAR_1, &VAR_9, VAR_10, VAR_8);
 FUNC_6(VAR_1, &VAR_9, VAR_4, VAR_5);
 FUNC_4(VAR_1, &VAR_9, VAR_12);


 FUNC_5(VAR_1, &VAR_9);
 FUNC_6(VAR_1, &VAR_9, VAR_11, VAR_8);
 FUNC_6(VAR_1, &VAR_9, VAR_12, VAR_7);
 FUNC_4(VAR_1, &VAR_9, VAR_6);

 return (VAR_7);
}
