
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct kernfs_node {int parent; } ;
struct TYPE_2__ {struct kernfs_node* kn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kernfs_node*,char const*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (struct kernfs_node*,struct kernfs_node*,char const*,int ) ;
 int FUNC_2 (struct kernfs_node*,int ,char const*,int ) ;
 scalar_t__ FUNC_3 (char const*,char) ;

__attribute__((used)) static int FUNC_4(struct kernfs_node *VAR_5, const char *VAR_6,
     umode_t VAR_7)
{

 if (FUNC_3(VAR_6, '\n'))
  return -VAR_0;






 if (VAR_2 && VAR_5 == VAR_4.kn)
  return FUNC_1(VAR_5, VAR_5, VAR_6, VAR_7);





 if (VAR_3 && FUNC_0(VAR_5, VAR_6))
  return FUNC_2(VAR_5, VAR_5->parent, VAR_6, VAR_7);

 return -VAR_1;
}
