
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rftype {int flags; } ;
struct kernfs_open_file {TYPE_1__* kn; } ;
struct TYPE_2__ {struct rftype* priv; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct kernfs_open_file *VAR_1)
{
 struct rftype *VAR_2 = VAR_1->kn->priv;

 return VAR_2->flags & VAR_0;
}
