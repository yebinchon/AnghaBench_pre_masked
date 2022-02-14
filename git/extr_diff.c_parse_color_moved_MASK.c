
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_6)
{
 switch (FUNC_2(VAR_6)) {
 case 0:
  return VAR_2;
 case 1:
  return VAR_1;
 default:
  break;
 }

 if (!FUNC_3(VAR_6, "no"))
  return VAR_2;
 else if (!FUNC_3(VAR_6, "plain"))
  return VAR_3;
 else if (!FUNC_3(VAR_6, "blocks"))
  return VAR_0;
 else if (!FUNC_3(VAR_6, "zebra"))
  return VAR_4;
 else if (!FUNC_3(VAR_6, "default"))
  return VAR_1;
 else if (!FUNC_3(VAR_6, "dimmed-zebra"))
  return VAR_5;
 else if (!FUNC_3(VAR_6, "dimmed_zebra"))
  return VAR_5;
 else
  return FUNC_1(FUNC_0("color moved setting must be one of 'no', 'default', 'blocks', 'zebra', 'dimmed-zebra', 'plain'"));
}
