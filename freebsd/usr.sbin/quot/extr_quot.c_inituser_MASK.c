
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user {scalar_t__ count; scalar_t__ spc90; scalar_t__ spc60; scalar_t__ spc30; scalar_t__ space; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 struct user* VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_2;
 struct user *VAR_3;

 if (!VAR_0) {
  VAR_0 = 8;
  if (!(VAR_1 =
      (struct user *)FUNC_0(VAR_0,sizeof(struct user))))
   FUNC_1(1, "allocate users");
 } else {
  for (VAR_3 = VAR_1, VAR_2 = VAR_0; --VAR_2 >= 0; VAR_3++) {
   VAR_3->space = VAR_3->spc30 = VAR_3->spc60 = VAR_3->spc90 = 0;
   VAR_3->count = 0;
  }
 }
}
