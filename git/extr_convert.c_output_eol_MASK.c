
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum eol { ____Placeholder_eol } eol ;
typedef enum crlf_action { ____Placeholder_crlf_action } crlf_action ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static enum eol FUNC_3(enum crlf_action VAR_4)
{
 switch (VAR_4) {
 case 132:
  return VAR_2;
 case 130:
  return VAR_0;
 case 129:
  return VAR_1;
 case 128:
 case 134:
  return VAR_0;
 case 133:
  return VAR_1;
 case 131:
 case 135:

  return FUNC_1() ? VAR_0 : VAR_1;
 }
 FUNC_2(FUNC_0("illegal crlf_action %d"), (int)VAR_4);
 return VAR_3;
}
