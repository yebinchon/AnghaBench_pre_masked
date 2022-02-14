
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,int *,int ,char*,int *,int *,int *,char const*,int ) ;
 int FUNC_2 (char*,int,char*,char const*,char*) ;
 char* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_4)
{
 char VAR_5[512];
 static int VAR_6 = 0;


 if (VAR_6)
  return;
 VAR_6++;
 if (VAR_3 != 0) {
  (void)FUNC_2(VAR_5, sizeof(VAR_5), "%s: %s", VAR_4,
      FUNC_3(VAR_3));
  VAR_4 = VAR_5;
 }
 VAR_3 = 0;
 FUNC_0("%s\n", VAR_5);
 FUNC_1(VAR_1|VAR_0, ((void*)0), VAR_2, "syslogd", ((void*)0), ((void*)0),
     ((void*)0), VAR_4, 0);
 VAR_6--;
}
