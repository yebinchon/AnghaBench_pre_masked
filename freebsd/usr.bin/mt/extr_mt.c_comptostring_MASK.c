
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct compression_types {char const* name; int comp_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct compression_types* VAR_2 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(u_int32_t VAR_3)
{
 static char VAR_4[20];
 const struct compression_types *VAR_5;

 if (VAR_3 == VAR_0)
  return "disabled";
 else if (VAR_3 == VAR_1)
  return "unsupported";

 for (VAR_5 = VAR_2; VAR_5->name; VAR_5++)
  if (VAR_5->comp_number == VAR_3)
   break;

 if (VAR_5->comp_number == 0xf0f0f0f0) {
  FUNC_0(VAR_4, "0x%x", VAR_3);
  return(VAR_4);
 } else
  return(VAR_5->name);
}
