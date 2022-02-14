
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user {int uid; scalar_t__ name; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 struct user* VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_2;
 struct user *VAR_3, *VAR_4;
 struct user *VAR_5;

 VAR_5 = VAR_1;
 VAR_0 <<= 1;
 if (!(VAR_1 = (struct user *)FUNC_0(VAR_0,sizeof(struct user))))
  FUNC_1(1, "allocate users");
 for (VAR_3 = VAR_5, VAR_2 = VAR_0 >> 1; --VAR_2 >= 0; VAR_3++) {
  for (VAR_4 = VAR_1 + (VAR_3->uid&(VAR_0 - 1)); VAR_4->name;
      VAR_4--) {
   if (VAR_4 <= VAR_1)
    VAR_4 = VAR_1 + VAR_0;
  }
  *VAR_4 = *VAR_3;
 }
}
