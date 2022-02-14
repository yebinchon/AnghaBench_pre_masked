
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirlist {struct dirlist* dp_dirp; int dp_hosts; struct dirlist* dp_right; struct dirlist* dp_left; } ;


 int FUNC_0 (struct dirlist*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct dirlist *VAR_0)
{

 if (VAR_0) {
  FUNC_2(VAR_0->dp_left);
  FUNC_2(VAR_0->dp_right);
  FUNC_1(VAR_0->dp_hosts);
  FUNC_0(VAR_0->dp_dirp);
  FUNC_0(VAR_0);
 }
}
