
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct oid_array {int dummy; } ;
struct disambiguate_state {int always_call_fn; struct oid_array* cb_data; int fn; } ;
typedef int each_abbrev_fn ;


 struct oid_array VAR_0 ;
 int FUNC_0 (struct disambiguate_state*) ;
 int FUNC_1 (struct disambiguate_state*) ;
 scalar_t__ FUNC_2 (struct repository*,char const*,int ,struct disambiguate_state*) ;
 int FUNC_3 (struct oid_array*) ;
 int FUNC_4 (struct oid_array*,int ,void*) ;
 int VAR_1 ;
 int FUNC_5 (char const*) ;

int FUNC_6(struct repository *VAR_2, const char *VAR_3,
    each_abbrev_fn VAR_4, void *VAR_5)
{
 struct oid_array VAR_6 = VAR_0;
 struct disambiguate_state VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_2, VAR_3, FUNC_5(VAR_3), &VAR_7) < 0)
  return -1;

 VAR_7.always_call_fn = 1;
 VAR_7.fn = VAR_1;
 VAR_7.cb_data = &VAR_6;
 FUNC_0(&VAR_7);
 FUNC_1(&VAR_7);

 VAR_8 = FUNC_4(&VAR_6, VAR_4, VAR_5);
 FUNC_3(&VAR_6);
 return VAR_8;
}
