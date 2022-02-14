
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int pw_dir; } ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct passwd*,char*,long,struct passwd**) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,long) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,char*) ;
 long FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(git_buf *VAR_3, uid_t VAR_4)
{
 struct passwd VAR_5, *VAR_6;
 char *VAR_7 = ((void*)0);
 long VAR_8;
 int VAR_9;

 FUNC_0(VAR_3);

 if ((VAR_8 = FUNC_6(VAR_2)) == -1)
  VAR_8 = 1024;

 do {
  VAR_7 = FUNC_3(VAR_7, VAR_8);
  VAR_9 = FUNC_1(VAR_4, &VAR_5, VAR_7, VAR_8, &VAR_6);
  VAR_8 *= 2;
 } while (VAR_9 == VAR_0 && VAR_8 <= 8192);

 if (VAR_9) {
  FUNC_5(VAR_1, "failed to get passwd entry");
  goto out;
 }

 if (!VAR_6) {
  FUNC_5(VAR_1, "no passwd entry found for user");
  goto out;
 }

 if ((VAR_9 = FUNC_4(VAR_3, VAR_6->pw_dir)) < 0)
  goto out;

out:
 FUNC_2(VAR_7);
 return VAR_9;
}
