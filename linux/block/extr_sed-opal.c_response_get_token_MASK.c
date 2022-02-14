
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parsed_resp {int num; struct opal_resp_tok* toks; } ;
struct opal_resp_tok {scalar_t__ len; } ;


 int VAR_0 ;
 struct opal_resp_tok const* FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static const struct opal_resp_tok *FUNC_2(
    const struct parsed_resp *VAR_1,
    int VAR_2)
{
 const struct opal_resp_tok *VAR_3;

 if (!VAR_1) {
  FUNC_1("Response is NULL\n");
  return FUNC_0(-VAR_0);
 }

 if (VAR_2 >= VAR_1->num) {
  FUNC_1("Token number doesn't exist: %d, resp: %d\n",
    VAR_2, VAR_1->num);
  return FUNC_0(-VAR_0);
 }

 VAR_3 = &VAR_1->toks[VAR_2];
 if (VAR_3->len == 0) {
  FUNC_1("Token length must be non-zero\n");
  return FUNC_0(-VAR_0);
 }

 return VAR_3;
}
