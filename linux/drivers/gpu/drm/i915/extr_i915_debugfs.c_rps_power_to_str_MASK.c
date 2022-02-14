
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const* const*) ;




__attribute__((used)) static const char *FUNC_1(unsigned int VAR_0)
{
 static const char * const VAR_1[] = {
  [128] = "low power",
  [130] = "mixed",
  [129] = "high power",
 };

 if (VAR_0 >= FUNC_0(VAR_1) || !VAR_1[VAR_0])
  return "unknown";

 return VAR_1[VAR_0];
}
