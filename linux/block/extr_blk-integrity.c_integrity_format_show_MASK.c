
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blk_integrity {TYPE_1__* profile; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_1(struct blk_integrity *VAR_0, char *VAR_1)
{
 if (VAR_0->profile && VAR_0->profile->name)
  return FUNC_0(VAR_1, "%s\n", VAR_0->profile->name);
 else
  return FUNC_0(VAR_1, "none\n");
}
