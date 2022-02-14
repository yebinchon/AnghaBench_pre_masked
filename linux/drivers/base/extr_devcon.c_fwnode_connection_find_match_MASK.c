
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;
typedef int devcon_match_fn_t ;


 void* FUNC_0 (struct fwnode_handle*,char const*,void*,int ) ;
 void* FUNC_1 (struct fwnode_handle*,char const*,void*,int ) ;

void *FUNC_2(struct fwnode_handle *VAR_0,
       const char *VAR_1, void *VAR_2,
       devcon_match_fn_t VAR_3)
{
 void *VAR_4;

 if (!VAR_0 || !VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
