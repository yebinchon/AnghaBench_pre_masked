
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padata_instance {int dummy; } ;


 int VAR_0 ;
 struct padata_instance* FUNC_0 (char const*) ;
 int FUNC_1 (struct padata_instance*) ;
 int FUNC_2 (struct padata_instance*,char const*) ;

__attribute__((used)) static int FUNC_3(struct padata_instance **VAR_1, const char *VAR_2)
{
 int VAR_3 = -VAR_0;

 *VAR_1 = FUNC_0(VAR_2);
 if (!*VAR_1)
  return VAR_3;

 VAR_3 = FUNC_2(*VAR_1, VAR_2);
 if (VAR_3)
  FUNC_1(*VAR_1);

 return VAR_3;
}
