
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int dummy; } ;
struct alias_link {int flags; } ;


 int FUNC_0 (struct libalias*) ;
 int FUNC_1 (struct libalias*) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_2(struct libalias *VAR_2, struct alias_link *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2);
 (void)VAR_2;

 if (VAR_3->flags & VAR_0)
  VAR_4 = -1;
 else {
  VAR_3->flags &= ~VAR_1;
  VAR_4 = 0;
 }
 FUNC_1(VAR_2);
 return (VAR_4);
}
