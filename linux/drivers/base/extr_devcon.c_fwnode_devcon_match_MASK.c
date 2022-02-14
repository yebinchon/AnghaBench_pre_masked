
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;
struct device_connection {int fwnode; } ;
typedef void* (* devcon_match_fn_t ) (struct device_connection*,int,void*) ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct fwnode_handle*,char const*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void *
FUNC_3(struct fwnode_handle *VAR_0, const char *VAR_1,
      void *VAR_2, devcon_match_fn_t VAR_3)
{
 struct device_connection VAR_4 = { };
 void *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; ; VAR_6++) {
  VAR_4.fwnode = FUNC_1(VAR_0, VAR_1, VAR_6);
  if (FUNC_0(VAR_4.fwnode))
   break;

  VAR_5 = VAR_3(&VAR_4, -1, VAR_2);
  FUNC_2(VAR_4.fwnode);
  if (VAR_5)
   return VAR_5;
 }

 return ((void*)0);
}
