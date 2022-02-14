
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {int new_mode; } ;
struct gitdiff_data {int linenr; } ;


 int FUNC_0 (char const*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct gitdiff_data *VAR_0,
      const char *VAR_1,
      struct patch *VAR_2)
{
 return FUNC_0(VAR_1, VAR_0->linenr, &VAR_2->new_mode);
}
