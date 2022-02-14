
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sector; } ;
struct md_rdev {TYPE_1__ ppl; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,unsigned long long) ;

__attribute__((used)) static ssize_t
FUNC_1(struct md_rdev *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_1, "%llu\n", (unsigned long long)VAR_0->ppl.sector);
}
