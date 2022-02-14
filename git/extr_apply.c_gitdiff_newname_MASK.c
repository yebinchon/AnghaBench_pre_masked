
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {int new_name; int is_delete; } ;
struct gitdiff_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gitdiff_data*,char const*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct gitdiff_data *VAR_1,
      const char *VAR_2,
      struct patch *VAR_3)
{
 return FUNC_0(VAR_1, VAR_2,
       VAR_3->is_delete, &VAR_3->new_name,
       VAR_0);
}
