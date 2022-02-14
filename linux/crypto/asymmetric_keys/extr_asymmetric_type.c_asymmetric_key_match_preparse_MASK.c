
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_match_data {char* raw_data; int (* cmp ) (struct key const*,struct key_match_data const*) ;int lookup_type; struct asymmetric_key_id* preparsed; } ;
struct asymmetric_key_id {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct asymmetric_key_id*) ;
 int VAR_1 ;
 int FUNC_1 (struct asymmetric_key_id*) ;
 int FUNC_2 (struct key const*,struct key_match_data const*) ;
 int FUNC_3 (struct key const*,struct key_match_data const*) ;
 struct asymmetric_key_id* FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(struct key_match_data *VAR_2)
{
 struct asymmetric_key_id *VAR_3;
 const char *VAR_4 = VAR_2->raw_data;
 const char *VAR_5;
 bool (*VAR_6)(const struct key *, const struct key_match_data *) =
  FUNC_2;

 if (!VAR_4 || !*VAR_4)
  return -VAR_0;
 if (VAR_4[0] == 'i' &&
     VAR_4[1] == 'd' &&
     VAR_4[2] == ':') {
  VAR_5 = VAR_4 + 3;
  VAR_6 = FUNC_3;
 } else if (VAR_4[0] == 'e' &&
     VAR_4[1] == 'x' &&
     VAR_4[2] == ':') {
  VAR_5 = VAR_4 + 3;
 } else {
  goto default_match;
 }

 VAR_3 = FUNC_4(VAR_5);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_2->preparsed = VAR_3;
 VAR_2->cmp = VAR_6;
 VAR_2->lookup_type = VAR_1;
 return 0;

default_match:
 return 0;
}
