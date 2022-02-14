
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_reference_args {struct fwnode_handle* fwnode; } ;
struct fwnode_handle {int dummy; } ;


 struct fwnode_handle* FUNC_0 (int) ;
 int FUNC_1 (struct fwnode_handle const*,char const*,int *,int ,unsigned int,struct fwnode_reference_args*) ;

struct fwnode_handle *FUNC_2(const struct fwnode_handle *VAR_0,
         const char *VAR_1,
         unsigned int VAR_2)
{
 struct fwnode_reference_args VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, ((void*)0), 0, VAR_2,
       &VAR_3);
 return VAR_4 ? FUNC_0(VAR_4) : VAR_3.fwnode;
}
