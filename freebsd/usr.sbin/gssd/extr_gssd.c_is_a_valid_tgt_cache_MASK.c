
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uid_t ;
typedef scalar_t__ time_t ;
struct passwd {char* pw_name; } ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_5__ {scalar_t__ endtime; } ;
struct TYPE_6__ {TYPE_1__ times; int client; int server; } ;
typedef TYPE_2__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int krb5_cc_cursor ;


 int FUNC_0 (char*) ;
 struct passwd* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int *,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,char const*,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int ,char**) ;
 char* VAR_0 ;
 char* FUNC_11 (char*,char) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (int *) ;

__attribute__((used)) static int
FUNC_14(const char *VAR_1, uid_t VAR_2, int *VAR_3,
    time_t *VAR_4)
{

 krb5_context VAR_5;
 krb5_principal VAR_6;
 krb5_ccache VAR_7;
 krb5_error_code VAR_8;
 krb5_cc_cursor VAR_9;
 krb5_creds VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 struct passwd *VAR_15;
 char *VAR_16, *VAR_17, *VAR_18;
 time_t VAR_19;


 VAR_15 = FUNC_1(VAR_2);






 VAR_8 = FUNC_9(&VAR_5);
 if (VAR_8 != 0)
  return (0);
 VAR_8 = FUNC_5(VAR_5, VAR_1, &VAR_7);
 if (VAR_8 != 0) {
  FUNC_7(VAR_5);
  return (0);
 }
 VAR_14 = 0;
 VAR_12 = 0;
 VAR_19 = 0;
 VAR_8 = FUNC_6(VAR_5, VAR_7, &VAR_9);
 if (VAR_8 == 0) {
  while ((VAR_8 = FUNC_4(VAR_5, VAR_7, &VAR_9,
      &VAR_10)) == 0) {
   VAR_11 = 0;
   VAR_13 = 0;
   VAR_8 = FUNC_10(VAR_5, VAR_10.server,
       &VAR_18);
   if (VAR_8 == 0) {
    VAR_16 = FUNC_11(VAR_18, '/');
    if (VAR_16 != ((void*)0)) {
     *VAR_16++ = '\0';
     if (FUNC_12(VAR_18, "krbtgt") == 0 &&
         VAR_10.times.endtime > FUNC_13(((void*)0))
         ) {
      VAR_11 = 1;





      VAR_17 = FUNC_11(VAR_16, '@');
      if (VAR_17 != ((void*)0)) {
       *VAR_17++ = '\0';
       if (FUNC_12(VAR_16, VAR_17) ==
           0)
        VAR_13++;
      }
     }
    }
    FUNC_0(VAR_18);
   }
   if (VAR_11 != 0) {
    VAR_8 = FUNC_10(VAR_5,
        VAR_10.client, &VAR_18);
    if (VAR_8 == 0) {
     VAR_16 = FUNC_11(VAR_18, '@');
     if (VAR_16 != ((void*)0)) {
      *VAR_16++ = '\0';
      if (VAR_15 != ((void*)0) && FUNC_12(VAR_18,
          VAR_15->pw_name) == 0)
       VAR_13++;
      if (FUNC_11(VAR_18, '/') == ((void*)0))
       VAR_13++;
      if (VAR_0[0] != '\0' &&
          FUNC_12(VAR_16, VAR_0) == 0)
       VAR_13++;
     }
    }
    FUNC_0(VAR_18);
    if (VAR_13 > VAR_12) {
     VAR_12 = VAR_13;
     VAR_19 = VAR_10.times.endtime;
    } else if (VAR_13 == VAR_12 &&
        VAR_10.times.endtime > VAR_19)
     VAR_19 = VAR_10.times.endtime;
    VAR_14 = 1;
   }
   FUNC_8(VAR_5, &VAR_10);
  }
  FUNC_3(VAR_5, VAR_7, &VAR_9);
 }
 FUNC_2(VAR_5, VAR_7);
 FUNC_7(VAR_5);
 if (VAR_14 != 0) {
  *VAR_3 = VAR_12;
  *VAR_4 = VAR_19;
 }
 return (VAR_14);



}
