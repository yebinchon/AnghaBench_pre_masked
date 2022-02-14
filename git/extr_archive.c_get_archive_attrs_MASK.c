
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
typedef struct attr_check const attr_check ;


 struct attr_check const* FUNC_0 (char*,char*,int *) ;
 int FUNC_1 (struct index_state*,char const*,struct attr_check const*) ;

__attribute__((used)) static const struct attr_check *FUNC_2(struct index_state *VAR_0,
        const char *VAR_1)
{
 static struct attr_check *VAR_2;
 if (!VAR_2)
  VAR_2 = FUNC_0("export-ignore", "export-subst", ((void*)0));
 FUNC_1(VAR_0, VAR_1, VAR_2);
 return VAR_2;
}
