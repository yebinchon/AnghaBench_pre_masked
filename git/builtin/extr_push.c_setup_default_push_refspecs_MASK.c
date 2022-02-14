
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {int dummy; } ;
struct branch {int dummy; } ;
 int FUNC_0 (char*) ;
 struct branch* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct remote*) ;
 int VAR_0 ;
 int FUNC_4 (int *,char*) ;
 int VAR_1 ;
 int FUNC_5 (struct remote*,struct branch*) ;
 int FUNC_6 (struct remote*,struct branch*,int,int) ;

__attribute__((used)) static void FUNC_7(struct remote *VAR_2)
{
 struct branch *VAR_3 = FUNC_1(((void*)0));
 int VAR_4 = FUNC_3(VAR_2);

 switch (VAR_0) {
 default:
 case 132:
  FUNC_4(&VAR_1, ":");
  break;

 case 129:
 case 130:
  if (VAR_4)
   FUNC_5(VAR_2, VAR_3);
  else
   FUNC_6(VAR_2, VAR_3, VAR_4, 1);
  break;

 case 128:
  FUNC_6(VAR_2, VAR_3, VAR_4, 0);
  break;

 case 133:
  FUNC_5(VAR_2, VAR_3);
  break;

 case 131:
  FUNC_2(FUNC_0("You didn't specify any refspecs to push, and "
      "push.default is \"nothing\"."));
  break;
 }
}
