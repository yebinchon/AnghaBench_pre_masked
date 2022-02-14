
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_filter {char** name_patterns; scalar_t__ ignore_case; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*,char const**) ;
 int FUNC_1 (char const*,char const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(const struct ref_filter *VAR_1, const char *VAR_2)
{
 const char **VAR_3 = VAR_1->name_patterns;
 unsigned VAR_4 = 0;

 if (VAR_1->ignore_case)
  VAR_4 |= VAR_0;





 (void)(FUNC_0(VAR_2, "refs/tags/", &VAR_2) ||
        FUNC_0(VAR_2, "refs/heads/", &VAR_2) ||
        FUNC_0(VAR_2, "refs/remotes/", &VAR_2) ||
        FUNC_0(VAR_2, "refs/", &VAR_2));

 for (; *VAR_3; VAR_3++) {
  if (!FUNC_1(*VAR_3, VAR_2, VAR_4))
   return 1;
 }
 return 0;
}
