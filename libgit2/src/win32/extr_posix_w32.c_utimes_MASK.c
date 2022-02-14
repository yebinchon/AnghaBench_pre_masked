
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p_timeval {int dummy; } ;
struct open_opts {int member_0; } ;
typedef int git_win32_path ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,char const*) ;
 int FUNC_7 (int ,struct open_opts*) ;
 int FUNC_8 (struct open_opts*,int ,int ) ;
 int FUNC_9 (int,struct p_timeval const*) ;

int FUNC_10(const char *VAR_3, const struct p_timeval VAR_4[2])
{
 git_win32_path VAR_5;
 int VAR_6, VAR_7;
 DWORD VAR_8, VAR_9 = 0;
 struct open_opts VAR_10 = { 0 };

 if (FUNC_6(VAR_5, VAR_3) < 0)
  return -1;

 VAR_8 = FUNC_0(VAR_5);

 if (VAR_8 & VAR_0) {
  VAR_9 = VAR_8 & ~VAR_0;

  if (!FUNC_2(VAR_5, VAR_9)) {
   FUNC_5(VAR_1, "failed to set attributes");
   return -1;
  }
 }

 FUNC_8(&VAR_10, VAR_2, 0);

 if ((VAR_6 = FUNC_7(VAR_5, &VAR_10)) < 0) {
  VAR_7 = -1;
  goto done;
 }

 VAR_7 = FUNC_9(VAR_6, VAR_4);
 FUNC_4(VAR_6);

done:
 if (VAR_8 != VAR_9) {
  DWORD VAR_11 = FUNC_1();
  FUNC_2(VAR_5, VAR_8);
  FUNC_3(VAR_11);
 }

 return VAR_7;
}
