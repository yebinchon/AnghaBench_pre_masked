
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int e ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (int*,int,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int ,int ) ;

__attribute__((used)) static uint32_t FUNC_4(const void *VAR_1, uint32_t VAR_2, uint8_t *VAR_3)
{
 uint8_t *VAR_4 = VAR_3;
 uint32_t VAR_5 = FUNC_0(VAR_2) + 1 + VAR_2 + 1;
 uint32_t VAR_6 = FUNC_0(3) + 1 + 3;
 uint8_t VAR_7[3] = { 0x01, 0x00, 0x01 };


 VAR_4 = FUNC_1(VAR_4, 0x30, VAR_5 + VAR_6);

 VAR_4 = FUNC_1(VAR_4, 0x02, VAR_2 + 1);
 VAR_4[0] = 0x00;
 FUNC_2(VAR_4 + 1, VAR_1, VAR_2);
 VAR_4 += VAR_2 + 1;
 VAR_4 = FUNC_1(VAR_4, 0x02, sizeof(VAR_7));
 FUNC_2(VAR_4, VAR_7, sizeof(VAR_7));
 VAR_4 += sizeof(VAR_7);

 FUNC_3(VAR_4, 0, VAR_0);

 return VAR_4 - VAR_3;
}
