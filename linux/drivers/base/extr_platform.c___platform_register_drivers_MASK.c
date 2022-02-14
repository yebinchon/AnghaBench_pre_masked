
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_driver {int dummy; } ;
struct module {int dummy; } ;


 int FUNC_0 (struct platform_driver* const,struct module*) ;
 int FUNC_1 (struct platform_driver* const) ;
 int FUNC_2 (char*,struct platform_driver* const) ;
 int FUNC_3 (char*,struct platform_driver* const,int) ;

int FUNC_4(struct platform_driver * const *VAR_0,
    unsigned int VAR_1, struct module *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_2("registering platform driver %ps\n", VAR_0[VAR_3]);

  VAR_4 = FUNC_0(VAR_0[VAR_3], VAR_2);
  if (VAR_4 < 0) {
   FUNC_3("failed to register platform driver %ps: %d\n",
          VAR_0[VAR_3], VAR_4);
   goto error;
  }
 }

 return 0;

error:
 while (VAR_3--) {
  FUNC_2("unregistering platform driver %ps\n", VAR_0[VAR_3]);
  FUNC_1(VAR_0[VAR_3]);
 }

 return VAR_4;
}
