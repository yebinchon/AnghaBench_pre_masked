
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwnode_handle {int dummy; } ;
struct TYPE_2__ {char* name; } ;


 scalar_t__ FUNC_0 (struct fwnode_handle*,char const*) ;
 int FUNC_1 (struct fwnode_handle*) ;
 unsigned int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,unsigned int) ;
 TYPE_1__* FUNC_4 (struct fwnode_handle*) ;

__attribute__((used)) static bool FUNC_5(struct fwnode_handle *VAR_0,
          const char *VAR_1)
{
 unsigned int VAR_2 = FUNC_2(VAR_1);
 const char *VAR_3;

 if (!VAR_2 || !FUNC_1(VAR_0))
  return 0;

 VAR_3 = FUNC_4(VAR_0)->name;

 return (FUNC_0(VAR_0, "reg") &&
  !FUNC_3(VAR_3, VAR_1, VAR_2) && VAR_3[VAR_2] == '@') ||
  FUNC_0(VAR_0, VAR_1);
}
