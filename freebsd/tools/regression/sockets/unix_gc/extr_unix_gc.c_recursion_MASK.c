
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,char*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int*,int*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int ,int*) ;
 char* VAR_5 ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static void
FUNC_11(void)
{
 int VAR_6[2], VAR_7[2];
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_5 = "recursion";
 FUNC_5("%s\n", VAR_5);
 FUNC_6(&VAR_8, &VAR_9);
 VAR_10 = FUNC_3();

 FUNC_4(VAR_6);

 for (;;) {
  if (FUNC_9(VAR_2, VAR_3, 0, VAR_7) == -1) {
   if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
    break;
   FUNC_1(-1, "socketpair");
  }
  FUNC_7(VAR_7[0], VAR_6[0]);
  FUNC_7(VAR_7[0], VAR_6[1]);
  FUNC_0(VAR_6[1], VAR_6[0]);
  VAR_6[0] = VAR_7[0];
  VAR_6[1] = VAR_7[1];
 }
 FUNC_0(VAR_6[0], VAR_6[1]);
 FUNC_8(1);
 FUNC_10(VAR_8, VAR_9);
 VAR_11 = FUNC_3();
 if (VAR_10 != VAR_11)
  FUNC_2(-1, "recursion: deferred before %d after %d", VAR_10,
      VAR_11);
}
