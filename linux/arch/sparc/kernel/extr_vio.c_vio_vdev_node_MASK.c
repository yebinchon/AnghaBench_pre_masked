
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vio_dev {int md_node_info; scalar_t__ node_name; } ;
struct mdesc_handle {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mdesc_handle*,char const*,int *) ;

u64 FUNC_1(struct mdesc_handle *VAR_1, struct vio_dev *VAR_2)
{
 u64 VAR_3;

 if (VAR_2 == ((void*)0))
  return VAR_0;

 VAR_3 = FUNC_0(VAR_1, (const char *)VAR_2->node_name,
         &VAR_2->md_node_info);

 return VAR_3;
}
