
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_compat_data {int * ocd_str; } ;
typedef int phandle_t ;


 int FUNC_0 (char*) ;
 struct ofw_compat_data* VAR_0 ;
 scalar_t__ FUNC_1 (int,int *) ;

__attribute__((used)) static struct ofw_compat_data *
FUNC_2()
{
 phandle_t VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0("/soc");
 if (VAR_1 == -1)
  return (((void*)0));

 for (VAR_2 = 0; VAR_0[VAR_2].ocd_str != ((void*)0); VAR_2++)
  if (FUNC_1(VAR_1, VAR_0[VAR_2].ocd_str) > 0)
   break;

 if (VAR_0[VAR_2].ocd_str == ((void*)0))
  return (((void*)0));

 return (&VAR_0[VAR_2]);
}
