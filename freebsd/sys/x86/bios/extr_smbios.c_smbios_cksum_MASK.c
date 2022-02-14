
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct smbios_eps {int length; } ;



__attribute__((used)) static int
FUNC_0 (struct smbios_eps *VAR_0)
{
 u_int8_t *VAR_1;
 u_int8_t VAR_2;
 int VAR_3;

 VAR_1 = (u_int8_t *)VAR_0;
 VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0->length; VAR_3++) {
  VAR_2 += VAR_1[VAR_3];
 }

 return (VAR_2);
}
