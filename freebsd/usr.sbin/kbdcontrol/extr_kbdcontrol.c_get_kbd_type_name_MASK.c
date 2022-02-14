
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name_table ;






__attribute__((used)) static const char *
FUNC_0(int VAR_0)
{
 static struct {
  int type;
  const char *name;
 } VAR_1[] = {
  { 129, "AT 84" },
  { 130, "AT 101/102" },
  { 128, "generic" },
 };
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < sizeof(VAR_1)/sizeof(VAR_1[0]); ++VAR_2) {
  if (VAR_0 == VAR_1[VAR_2].type)
   return VAR_1[VAR_2].name;
 }
 return "unknown";
}
