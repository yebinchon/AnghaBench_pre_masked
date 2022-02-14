
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct merge_options {TYPE_1__* priv; } ;
struct TYPE_2__ {int orig_index; } ;


 int FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(struct merge_options *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_0(&VAR_0->priv->orig_index, VAR_1, FUNC_1(VAR_1));

 if (0 <= VAR_2)

  return 1;

 return 0;
}
