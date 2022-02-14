
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union string_value {void* s; int u; } ;
typedef enum symbol_type { ____Placeholder_symbol_type } symbol_type ;
typedef enum string_value_kind { ____Placeholder_string_value_kind } string_value_kind ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (char const*,char**,int) ;
 int FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static enum string_value_kind FUNC_3(const char *VAR_5,
      enum symbol_type VAR_6,
      union string_value *VAR_7)
{
 char *VAR_8;
 enum string_value_kind VAR_9;

 VAR_0 = 0;
 switch (VAR_6) {
 case 133:
 case 129:
  return VAR_3;
 case 131:
  VAR_7->s = FUNC_1(VAR_5, &VAR_8, 10);
  VAR_9 = VAR_2;
  break;
 case 132:
  VAR_7->u = FUNC_2(VAR_5, &VAR_8, 16);
  VAR_9 = VAR_4;
  break;
 case 130:
 case 128:
  VAR_7->s = FUNC_1(VAR_5, &VAR_8, 0);
  VAR_9 = VAR_2;
  break;
 default:
  return VAR_1;
 }
 return !VAR_0 && !*VAR_8 && VAR_8 > VAR_5 && FUNC_0(VAR_8[-1])
        ? VAR_9 : VAR_3;
}
