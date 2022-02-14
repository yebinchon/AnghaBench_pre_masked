
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{

 VAR_2 += VAR_3;
 if (!VAR_0 || VAR_3 < 0 || VAR_2 > VAR_1) {
  if (!VAR_0)
   FUNC_0("!buffer");
  if (VAR_3 < 0)
   FUNC_0("offset (%d) < 0", VAR_3);
  if (VAR_2 > VAR_1)
   FUNC_0("base (%d) > buflen (%d)", VAR_2, VAR_1);
  return -1;
 }
 if (VAR_2 + VAR_0[VAR_2] >= VAR_1) {
  FUNC_0("base (%d) + buffer[base] (%d) >= buflen (%d)", VAR_2,
    VAR_0[VAR_2], VAR_1);
  return -1;
 }
 return VAR_0[VAR_2] + VAR_3 + 1;
}
