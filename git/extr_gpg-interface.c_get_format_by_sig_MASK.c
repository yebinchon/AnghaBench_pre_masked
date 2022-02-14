
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpg_format {scalar_t__* sigs; } ;


 int FUNC_0 (struct gpg_format*) ;
 struct gpg_format* VAR_0 ;
 scalar_t__ FUNC_1 (char const*,scalar_t__) ;

__attribute__((used)) static struct gpg_format *FUNC_2(const char *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  for (VAR_3 = 0; VAR_0[VAR_2].sigs[VAR_3]; VAR_3++)
   if (FUNC_1(VAR_1, VAR_0[VAR_2].sigs[VAR_3]))
    return VAR_0 + VAR_2;
 return ((void*)0);
}
