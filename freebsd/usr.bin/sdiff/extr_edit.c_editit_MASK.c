
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sig_t ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char* VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (char const*,char const*,char const*,char*) ;
 int FUNC_4 () ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,int*,int ) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_9)
{
 sig_t VAR_10, VAR_11, VAR_12, VAR_13;
 pid_t VAR_14;
 int VAR_15, VAR_16, VAR_17 = -1;
 const char *VAR_18;

 VAR_18 = FUNC_5("VISUAL");
 if (VAR_18 == ((void*)0))
  VAR_18 = FUNC_5("EDITOR");
 if (VAR_18 == ((void*)0))
  VAR_18 = VAR_7;

 VAR_10 = FUNC_6(VAR_2, VAR_6);
 VAR_11 = FUNC_6(VAR_3, VAR_6);
 VAR_12 = FUNC_6(VAR_4, VAR_6);
 VAR_13 = FUNC_6(VAR_1, VAR_5);
 if ((VAR_14 = FUNC_4()) == -1)
  goto fail;
 if (VAR_14 == 0) {
  FUNC_3(VAR_18, VAR_18, VAR_9, (char *)((void*)0));
  FUNC_2(127);
 }
 while (FUNC_7(VAR_14, &VAR_16, 0) == -1)
  if (VAR_8 != VAR_0)
   goto fail;
 if (!FUNC_1(VAR_16))
  VAR_8 = VAR_0;
 else
  VAR_17 = FUNC_0(VAR_16);

 fail:
 VAR_15 = VAR_8;
 (void)FUNC_6(VAR_2, VAR_10);
 (void)FUNC_6(VAR_3, VAR_11);
 (void)FUNC_6(VAR_4, VAR_12);
 (void)FUNC_6(VAR_1, VAR_13);
 VAR_8 = VAR_15;
 return (VAR_17);
}
