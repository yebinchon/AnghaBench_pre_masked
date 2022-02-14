
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_options {int dummy; } ;
typedef int regex_t ;
typedef int mmfile_t ;
typedef int kwset_t ;


 unsigned int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_1(mmfile_t *VAR_0, mmfile_t *VAR_1,
         struct diff_options *VAR_2,
         regex_t *VAR_3, kwset_t VAR_4)
{
 unsigned int VAR_5 = VAR_0 ? FUNC_0(VAR_0, VAR_3, VAR_4) : 0;
 unsigned int VAR_6 = VAR_1 ? FUNC_0(VAR_1, VAR_3, VAR_4) : 0;
 return VAR_5 != VAR_6;
}
