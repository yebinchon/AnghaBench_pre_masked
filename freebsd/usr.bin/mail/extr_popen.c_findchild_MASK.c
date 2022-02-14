
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child {scalar_t__ pid; struct child* link; scalar_t__ free; scalar_t__ done; } ;
typedef scalar_t__ pid_t ;


 struct child* VAR_0 ;
 struct child* VAR_1 ;
 int FUNC_0 (int,char*) ;
 struct child* FUNC_1 (int) ;

__attribute__((used)) static struct child *
FUNC_2(pid_t VAR_2, int VAR_3)
{
 struct child **VAR_4;

 for (VAR_4 = &VAR_0; *VAR_4 != ((void*)0) && (*VAR_4)->pid != VAR_2;
     VAR_4 = &(*VAR_4)->link)
   ;
 if (*VAR_4 == ((void*)0)) {
  if (VAR_3)
   return(((void*)0));
  if (VAR_1) {
   *VAR_4 = VAR_1;
   VAR_1 = (*VAR_4)->link;
  } else {
   *VAR_4 = FUNC_1(sizeof(struct child));
   if (*VAR_4 == ((void*)0))
    FUNC_0(1, "malloc");
  }
  (*VAR_4)->pid = VAR_2;
  (*VAR_4)->done = (*VAR_4)->free = 0;
  (*VAR_4)->link = ((void*)0);
 }
 return (*VAR_4);
}
