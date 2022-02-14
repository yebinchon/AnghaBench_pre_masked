
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct user {char* name; int uid; } ;
struct passwd {int pw_name; } ;


 int FUNC_0 (int,char*) ;
 struct passwd* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 struct user* VAR_1 ;
 int FUNC_6 () ;

__attribute__((used)) static struct user *
FUNC_7(uid_t VAR_2)
{
 struct user *VAR_3;
 int VAR_4;
 struct passwd *VAR_5;

 while (1) {
  for (VAR_3 = VAR_1 + (VAR_2&(VAR_0 - 1)), VAR_4 = VAR_0; --VAR_4 >= 0;
      VAR_3--) {
   if (!VAR_3->name) {
    VAR_3->uid = VAR_2;

    if (!(VAR_5 = FUNC_1(VAR_2))) {
     if ((VAR_3->name = (char *)FUNC_2(7)))
      FUNC_3(VAR_3->name,"#%d",VAR_2);
    } else {
     if ((VAR_3->name = (char *)
         FUNC_2(FUNC_5(VAR_5->pw_name) + 1)))
      FUNC_4(VAR_3->name,VAR_5->pw_name);
    }
    if (!VAR_3->name)
     FUNC_0(1, "allocate users");

    return VAR_3;

   } else if (VAR_3->uid == VAR_2)
    return VAR_3;

   if (VAR_3 <= VAR_1)
    VAR_3 = VAR_1 + VAR_0;
  }
  FUNC_6();
 }
}
