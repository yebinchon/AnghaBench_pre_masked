
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct hostent {int * h_addr_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 char* VAR_2 ;
 struct hostent* FUNC_1 (char*) ;
 int * VAR_3 ;
 char* FUNC_2 (char**,char*) ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_3(char *VAR_6)
{
 struct hostent *VAR_7;
 int VAR_8 = 0;
 char *VAR_9;


 if ((VAR_9 = FUNC_2(&VAR_6, ",")) == ((void*)0))
  return;
 VAR_2 = VAR_9;


 while ((VAR_9 = FUNC_2(&VAR_6, ",")) != ((void*)0) && VAR_8 < VAR_0) {
  if ((VAR_7 = FUNC_1(VAR_9)) == ((void*)0))
   return;
  FUNC_0 (VAR_7->h_addr_list[0], &VAR_3[VAR_8],
      sizeof(struct in_addr));
  VAR_8++;
 }


 VAR_5 = VAR_1;

 VAR_4 = VAR_8;
 return;
}
