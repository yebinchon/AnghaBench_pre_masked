
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct parsed_resp {int num; } ;
struct opal_resp_tok {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct opal_resp_tok* FUNC_0 (struct parsed_resp const*,int) ;
 int FUNC_1 (struct parsed_resp const*,int) ;
 scalar_t__ FUNC_2 (struct opal_resp_tok const*,int ) ;

__attribute__((used)) static u8 FUNC_3(const struct parsed_resp *VAR_4)
{
 const struct opal_resp_tok *VAR_5;

 VAR_5 = FUNC_0(VAR_4, 0);
 if (FUNC_2(VAR_5, VAR_2))
  return 0;

 if (VAR_4->num < 5)
  return VAR_0;

 VAR_5 = FUNC_0(VAR_4, VAR_4->num - 5);
 if (!FUNC_2(VAR_5, VAR_3))
  return VAR_0;

 VAR_5 = FUNC_0(VAR_4, VAR_4->num - 1);
 if (!FUNC_2(VAR_5, VAR_1))
  return VAR_0;

 return FUNC_1(VAR_4, VAR_4->num - 4);
}
