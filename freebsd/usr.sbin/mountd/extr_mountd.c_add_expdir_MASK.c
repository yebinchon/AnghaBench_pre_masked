
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostlist {int dummy; } ;
struct dirlist {char* dp_dirp; struct hostlist* dp_hosts; scalar_t__ dp_flag; struct dirlist* dp_right; struct dirlist* dp_left; } ;


 struct dirlist* FUNC_0 (int) ;
 int FUNC_1 () ;
 char* FUNC_2 (char*,int) ;

__attribute__((used)) static char *
FUNC_3(struct dirlist **VAR_0, char *VAR_1, int VAR_2)
{
 struct dirlist *VAR_3;

 VAR_3 = FUNC_0(sizeof (struct dirlist));
 if (VAR_3 == (struct dirlist *)((void*)0))
  FUNC_1();
 VAR_3->dp_left = *VAR_0;
 VAR_3->dp_right = (struct dirlist *)((void*)0);
 VAR_3->dp_flag = 0;
 VAR_3->dp_hosts = (struct hostlist *)((void*)0);
 VAR_3->dp_dirp = FUNC_2(VAR_1, VAR_2);
 if (VAR_3->dp_dirp == ((void*)0))
  FUNC_1();
 *VAR_0 = VAR_3;
 return (VAR_3->dp_dirp);
}
