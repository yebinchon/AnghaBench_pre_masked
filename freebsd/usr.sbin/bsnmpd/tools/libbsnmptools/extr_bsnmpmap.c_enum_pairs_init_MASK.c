
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enum_pairs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct enum_pairs*) ;
 int VAR_1 ;
 struct enum_pairs* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;

struct enum_pairs *
FUNC_4(void)
{
 struct enum_pairs *VAR_2;

 if ((VAR_2 = FUNC_1(sizeof(struct enum_pairs))) == ((void*)0)) {
  FUNC_3(VAR_0, "malloc() failed: %s", FUNC_2(VAR_1));
  return (((void*)0));
 }

 FUNC_0(VAR_2);
 return (VAR_2);
}
