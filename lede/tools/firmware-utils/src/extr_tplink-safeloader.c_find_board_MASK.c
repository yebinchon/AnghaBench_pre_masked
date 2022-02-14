
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_info {int * id; } ;


 struct device_info* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *) ;

__attribute__((used)) static struct device_info *FUNC_1(const char *VAR_1)
{
 struct device_info *VAR_2 = ((void*)0);

 for (VAR_2 = VAR_0; VAR_2->id != ((void*)0); VAR_2++)
  if (FUNC_0(VAR_1, VAR_2->id) == 0)
   return VAR_2;

 return ((void*)0);
}
