
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct push_cas_option {int use_tracking_for_rest; } ;
struct push_cas {int use_tracking; int expect; } ;


 int FUNC_0 (char*) ;
 struct push_cas* FUNC_1 (struct push_cas_option*,char const*,int) ;
 int FUNC_2 (struct push_cas_option*) ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (char const*,int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (char const*,char) ;

__attribute__((used)) static int FUNC_7(struct push_cas_option *VAR_0, const char *VAR_1, int VAR_2)
{
 const char *VAR_3;
 struct push_cas *VAR_4;

 if (VAR_2) {

  FUNC_2(VAR_0);
  return 0;
 }

 if (!VAR_1) {

  VAR_0->use_tracking_for_rest = 1;
  return 0;
 }


 VAR_3 = FUNC_6(VAR_1, ':');
 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_3 - VAR_1);
 if (!*VAR_3)
  VAR_4->use_tracking = 1;
 else if (!VAR_3[1])
  FUNC_5(&VAR_4->expect);
 else if (FUNC_4(VAR_3 + 1, &VAR_4->expect))
  return FUNC_3(FUNC_0("cannot parse expected object name '%s'"),
        VAR_3 + 1);
 return 0;
}
