
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_dev; int st_ino; } ;
struct TYPE_4__ {char const* name; int fsid; int ino; struct TYPE_4__* next; } ;
typedef TYPE_1__ DEVS ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,int *) ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;
 int FUNC_3 (char*,char const*) ;

int
FUNC_4(const char *VAR_1)
{
 struct stat VAR_2;
 DEVS *VAR_3;

 if (FUNC_2(VAR_1, &VAR_2)) {
  FUNC_3("%s", VAR_1);
  return (0);
 }
 if ((VAR_3 = FUNC_1(sizeof(DEVS))) == ((void*)0))
  FUNC_0(1, ((void*)0));
 VAR_3->next = VAR_0;
 VAR_0 = VAR_3;

 VAR_3->ino = VAR_2.st_ino;
 VAR_3->fsid = VAR_2.st_dev;
 VAR_3->name = VAR_1;
 return (1);
}
