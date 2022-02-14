
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pw_fields; int pw_shell; int pw_dir; int pw_gecos; void* pw_expire; void* pw_change; int pw_class; void* pw_gid; void* pw_uid; int pw_passwd; int pw_name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (char*) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 char* FUNC_4 (char*,int) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*) ;
 TYPE_1__ VAR_10 ;

__attribute__((used)) static void
FUNC_7(char *VAR_11, int VAR_12, int VAR_13)
{
 char *VAR_14, *VAR_15 = VAR_11;
 static char *VAR_16;

 VAR_10.pw_fields = 0;

 VAR_16 = FUNC_4(VAR_16, VAR_13 + 10);
 FUNC_3(VAR_16, VAR_13 + 10);


 while (FUNC_5(VAR_15, ':')) {
  VAR_15 = (FUNC_5(VAR_15, ':') + 1);
  *(VAR_15 - 1)= '\0';
 }

 VAR_14 = VAR_16;




        do { VAR_10.pw_name = VAR_14; while ((*VAR_14++ = *VAR_11++)); } while (0);
 VAR_10.pw_fields |= VAR_6;
        do { VAR_10.pw_passwd = VAR_14; while ((*VAR_14++ = *VAR_11++)); } while (0);
 VAR_10.pw_fields |= VAR_7;
 VAR_10.pw_uid = FUNC_1(VAR_11);
        VAR_11 += (FUNC_6(VAR_11) + 1);
 VAR_10.pw_fields |= VAR_9;
 VAR_10.pw_gid = FUNC_1(VAR_11);
        VAR_11 += (FUNC_6(VAR_11) + 1);
 VAR_10.pw_fields |= VAR_5;
 if (VAR_12) {
  do { VAR_10.pw_class = VAR_14; while ((*VAR_14++ = *VAR_11++)); } while (0);
  VAR_10.pw_fields |= VAR_1;
  VAR_10.pw_change = FUNC_2(VAR_11);
  VAR_11 += (FUNC_6(VAR_11) + 1);
  VAR_10.pw_fields |= VAR_0;
  VAR_10.pw_expire = FUNC_2(VAR_11);
  VAR_11 += (FUNC_6(VAR_11) + 1);
  VAR_10.pw_fields |= VAR_3;
 }
        do { VAR_10.pw_gecos = VAR_14; while ((*VAR_14++ = *VAR_11++)); } while (0);
 VAR_10.pw_fields |= VAR_4;
        do { VAR_10.pw_dir = VAR_14; while ((*VAR_14++ = *VAR_11++)); } while (0);
 VAR_10.pw_fields |= VAR_2;
        do { VAR_10.pw_shell = VAR_14; while ((*VAR_14++ = *VAR_11++)); } while (0);
 VAR_10.pw_fields |= VAR_8;

 return;
}
