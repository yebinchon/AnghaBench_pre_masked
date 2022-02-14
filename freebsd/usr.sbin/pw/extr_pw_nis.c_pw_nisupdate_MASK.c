
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int dummy; } ;


 struct passwd* FUNC_0 (char const*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (struct passwd*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int,int,struct passwd*,struct passwd*) ;
 struct passwd* FUNC_8 (struct passwd*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int *,char const*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,char const*) ;

__attribute__((used)) static int
FUNC_15(const char * VAR_0, struct passwd * VAR_1, char const * VAR_2)
{
 int VAR_3, VAR_4;
 struct passwd *VAR_5 = ((void*)0);
 struct passwd *VAR_6 = ((void*)0);

 FUNC_6("===> %s\n", VAR_0);
 if (VAR_1 != ((void*)0))
  VAR_5 = FUNC_8(VAR_1);

 if (VAR_2 != ((void*)0))
  VAR_6 = FUNC_0(VAR_2);

 if (FUNC_10(((void*)0), VAR_0))
  FUNC_3(1,"pw_init()");
 if ((VAR_3 = FUNC_11()) == -1) {
  FUNC_9();
  FUNC_3(1, "pw_lock()");
 }
 if ((VAR_4 = FUNC_13(-1)) == -1) {
  FUNC_9();
  FUNC_3(1, "pw_tmp()");
 }
 if (FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6) == -1) {
  FUNC_9();
  FUNC_2(VAR_4);
  FUNC_3(1, "pw_copy()");
 }
 FUNC_5(VAR_4);
 FUNC_2(VAR_4);
 if (FUNC_1(FUNC_12(), 0644) == -1)
  FUNC_3(1, "chmod()");
 if (FUNC_14(FUNC_12(), VAR_0) == -1)
  FUNC_3(1, "rename()");

 FUNC_4(VAR_5);
 FUNC_9();

 return (0);
}
