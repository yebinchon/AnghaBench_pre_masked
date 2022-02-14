
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

inline void FUNC_1(const char *VAR_1, const uint8_t *VAR_2, const char *VAR_3)
{
 int VAR_4;

 FUNC_0("%-23s:", VAR_1);
 for (VAR_4=0; VAR_4<VAR_0; VAR_4++)
  FUNC_0(" %02x", VAR_2[VAR_4]);
 FUNC_0(" %s\n", VAR_3);
}
