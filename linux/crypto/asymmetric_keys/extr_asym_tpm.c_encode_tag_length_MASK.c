
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int*) ;

__attribute__((used)) static inline uint8_t *FUNC_1(uint8_t *VAR_0, uint8_t VAR_1,
      uint32_t VAR_2)
{
 *VAR_0++ = VAR_1;

 if (VAR_2 <= 127) {
  VAR_0[0] = VAR_2;
  return VAR_0 + 1;
 }

 if (VAR_2 <= 255) {
  VAR_0[0] = 0x81;
  VAR_0[1] = VAR_2;
  return VAR_0 + 2;
 }

 VAR_0[0] = 0x82;
 FUNC_0(VAR_2, VAR_0 + 1);
 return VAR_0 + 3;
}
