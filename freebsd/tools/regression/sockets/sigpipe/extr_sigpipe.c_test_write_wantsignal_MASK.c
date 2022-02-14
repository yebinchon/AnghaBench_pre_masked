
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int,int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,int) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_1, int VAR_2, int VAR_3)
{

 if (FUNC_4(VAR_3, VAR_0) < 0)
  FUNC_1(-1, "%s: shutdown", VAR_1);
 FUNC_5(VAR_1);
 FUNC_6(VAR_1, VAR_3);
 if (!FUNC_3())
  FUNC_2(-1, "%s: write: didn't receive SIGPIPE", VAR_1);
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
}
