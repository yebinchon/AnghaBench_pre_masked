
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tgp_color_enc { ____Placeholder_tgp_color_enc } tgp_color_enc ;







__attribute__((used)) static const char *FUNC_0(enum tgp_color_enc
       VAR_0)
{
 switch (VAR_0) {
 case 131:
  return "HSV";
 case 128:
  return "Y'CbCr";
 case 130:
  return "Luma";
 case 129:
 default:
  return "R'G'B";

 }
}
