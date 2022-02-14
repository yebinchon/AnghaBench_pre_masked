
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct merge_options {TYPE_1__* priv; } ;
struct diff_filespec {int dummy; } ;
struct TYPE_2__ {scalar_t__ call_depth; } ;


 int FUNC_0 (struct merge_options*,struct diff_filespec const*,char const*,int,int) ;

__attribute__((used)) static int FUNC_1(struct merge_options *VAR_0,
         int VAR_1,
         const struct diff_filespec *VAR_2,
         const char *VAR_3)
{
 return FUNC_0(VAR_0, VAR_2, VAR_3,
     VAR_0->priv->call_depth || VAR_1, !VAR_0->priv->call_depth);
}
