
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int deleteAllLinks; } ;
struct alias_link {int dummy; } ;


 int FUNC_0 (struct alias_link*) ;
 int FUNC_1 (struct libalias*) ;
 int FUNC_2 (struct libalias*) ;

void
FUNC_3(struct libalias *VAR_0, struct alias_link *VAR_1)
{



 FUNC_1(VAR_0);
 VAR_0->deleteAllLinks = 1;
 FUNC_0(VAR_1);
 VAR_0->deleteAllLinks = 0;
 FUNC_2(VAR_0);
}
