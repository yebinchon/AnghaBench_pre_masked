
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t rm_eo; scalar_t__ rm_so; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const*,char const*,size_t,TYPE_1__*,int) ;

__attribute__((used)) static inline int FUNC_2(const regex_t *VAR_1, const char *VAR_2, size_t VAR_3,
         size_t VAR_4, regmatch_t VAR_5[], int VAR_6)
{
 FUNC_0(VAR_4 > 0 && VAR_5);
 VAR_5[0].rm_so = 0;
 VAR_5[0].rm_eo = VAR_3;
 return FUNC_1(VAR_1, VAR_2, VAR_4, VAR_5, VAR_6 | VAR_0);
}
