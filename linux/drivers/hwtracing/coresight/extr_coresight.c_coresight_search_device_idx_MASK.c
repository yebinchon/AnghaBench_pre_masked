
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;
struct coresight_dev_list {int nr_idx; struct fwnode_handle** fwnode_list; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct coresight_dev_list *VAR_1,
           struct fwnode_handle *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_idx; VAR_3++)
  if (VAR_1->fwnode_list[VAR_3] == VAR_2)
   return VAR_3;
 return -VAR_0;
}
