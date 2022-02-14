
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
__attribute__((used)) static const char **FUNC_0(u32 VAR_0)
{
 static const char *VAR_1[] = {
  "Manual",
  "Auto",
  ((void*)0)
 };

 static const char *VAR_2[] = {
  "Off",
  "1D Horizontal",
  "1D Vertical",
  "2D H/V Separable",
  "2D Symmetric non-separable",
  ((void*)0)
 };

 static const char *VAR_3[] = {
  "Off",
  "1D Horizontal",
  ((void*)0)
 };

 static const char *VAR_4[] = {
  "Manual",
  "Auto",
  ((void*)0)
 };

 static const char *VAR_5[] = {
  "Off",
  "Horizontal",
  "Vertical",
  "Horizontal/Vertical",
  "Diagonal",
  ((void*)0)
 };

 switch (VAR_0) {
 case 129:
  return VAR_1;
 case 131:
  return VAR_2;
 case 132:
  return VAR_3;
 case 128:
  return VAR_4;
 case 130:
  return VAR_5;
 }
 return ((void*)0);
}
