
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct dirlist {struct dirlist* dp_right; struct dirlist* dp_left; } ;


 scalar_t__ FUNC_0 (struct dirlist*,struct sockaddr*,int*,int*,int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct dirlist *VAR_0, struct sockaddr *VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_0) {
  if (FUNC_1(VAR_0->dp_left, VAR_1))
   return (1);
  if (FUNC_0(VAR_0, VAR_1, &VAR_2, &VAR_3, ((void*)0), ((void*)0)))
   return (1);
  if (FUNC_1(VAR_0->dp_right, VAR_1))
   return (1);
 }
 return (0);
}
