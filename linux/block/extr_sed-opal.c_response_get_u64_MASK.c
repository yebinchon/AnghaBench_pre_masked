
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct parsed_resp {int dummy; } ;
struct TYPE_2__ {int u; } ;
struct opal_resp_tok {scalar_t__ type; scalar_t__ width; TYPE_1__ stored; } ;


 scalar_t__ FUNC_0 (struct opal_resp_tok const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,scalar_t__) ;
 struct opal_resp_tok* FUNC_2 (struct parsed_resp const*,int) ;

__attribute__((used)) static u64 FUNC_3(const struct parsed_resp *VAR_3, int VAR_4)
{
 const struct opal_resp_tok *VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (FUNC_0(VAR_5))
  return 0;

 if (VAR_5->type != VAR_0) {
  FUNC_1("Token is not unsigned int: %d\n", VAR_5->type);
  return 0;
 }

 if (VAR_5->width != VAR_2 && VAR_5->width != VAR_1) {
  FUNC_1("Atom is not short or tiny: %d\n", VAR_5->width);
  return 0;
 }

 return VAR_5->stored.u;
}
