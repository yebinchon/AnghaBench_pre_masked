
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct parsed_resp {int dummy; } ;
struct opal_resp_tok {scalar_t__ type; int width; char* pos; size_t len; } ;


 scalar_t__ FUNC_0 (struct opal_resp_tok const*) ;
 scalar_t__ VAR_0 ;




 int FUNC_1 (char*) ;
 struct opal_resp_tok* FUNC_2 (struct parsed_resp const*,int) ;

__attribute__((used)) static size_t FUNC_3(const struct parsed_resp *VAR_1, int VAR_2,
      const char **VAR_3)
{
 u8 VAR_4;
 const struct opal_resp_tok *VAR_5;

 *VAR_3 = ((void*)0);
 VAR_5 = FUNC_2(VAR_1, VAR_2);
 if (FUNC_0(VAR_5))
  return 0;

 if (VAR_5->type != VAR_0) {
  FUNC_1("Token is not a byte string!\n");
  return 0;
 }

 switch (VAR_5->width) {
 case 128:
 case 129:
  VAR_4 = 1;
  break;
 case 130:
  VAR_4 = 2;
  break;
 case 131:
  VAR_4 = 4;
  break;
 default:
  FUNC_1("Token has invalid width!\n");
  return 0;
 }

 *VAR_3 = VAR_5->pos + VAR_4;

 return VAR_5->len - VAR_4;
}
