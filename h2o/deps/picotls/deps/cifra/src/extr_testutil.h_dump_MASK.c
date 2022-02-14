
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static inline void FUNC_1(const char *VAR_0, const uint8_t *VAR_1, size_t VAR_2)
{
  FUNC_0("%s: ", VAR_0);
  for (size_t VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    FUNC_0("%02x", VAR_1[VAR_3]);
  FUNC_0("\n");
}
