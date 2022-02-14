
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swnode {TYPE_1__* node; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_2__ {int properties; } ;


 int FUNC_0 (int ,char const*,unsigned int,void*,size_t) ;
 struct swnode* FUNC_1 (struct fwnode_handle const*) ;

__attribute__((used)) static int FUNC_2(const struct fwnode_handle *VAR_0,
     const char *VAR_1,
     unsigned int VAR_2, void *VAR_3,
     size_t VAR_4)
{
 struct swnode *VAR_5 = FUNC_1(VAR_0);

 return FUNC_0(VAR_5->node->properties, VAR_1,
          VAR_2, VAR_3, VAR_4);
}
