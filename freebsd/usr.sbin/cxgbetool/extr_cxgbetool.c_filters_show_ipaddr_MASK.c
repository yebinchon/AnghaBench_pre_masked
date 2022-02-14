
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, uint8_t *VAR_1, uint8_t *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_0(" ");
 if (VAR_0 == 0) {
  VAR_3 = 4;
  FUNC_0("%3s", " ");
 } else
 VAR_3 = 16;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_0("%02x", VAR_1[VAR_4]);
 FUNC_0("/");
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_0("%02x", VAR_2[VAR_4]);
}
