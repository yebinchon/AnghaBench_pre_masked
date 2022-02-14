
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mountlist {char* ml_host; char* ml_dirp; struct mountlist* ml_right; struct mountlist* ml_left; } ;




 int FUNC_0 (char*,char*,...) ;
 int VAR_0 ;

void
FUNC_1(struct mountlist *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->ml_left)
  FUNC_1(VAR_1->ml_left);
 switch (VAR_0) {
 case 129:
  FUNC_0("%s:%s\n", VAR_1->ml_host, VAR_1->ml_dirp);
  break;
 case 128:
  FUNC_0("%s\n", VAR_1->ml_dirp);
  break;
 default:
  FUNC_0("%s\n", VAR_1->ml_host);
  break;
 }
 if (VAR_1->ml_right)
  FUNC_1(VAR_1->ml_right);
}
