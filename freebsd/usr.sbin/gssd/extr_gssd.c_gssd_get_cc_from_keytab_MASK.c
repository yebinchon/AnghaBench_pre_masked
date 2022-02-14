
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef int krb5_keytab ;
typedef int krb5_get_init_creds_opt ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_deltat ;
typedef int krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int *,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_8 (int ,int **) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,char*,int ,int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,char const*,int *) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_16(const char *VAR_0)
{
 krb5_error_code VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 krb5_context VAR_7;
 krb5_principal VAR_8;
 krb5_keytab VAR_9;
 krb5_creds VAR_10;
 krb5_get_init_creds_opt *VAR_11;
 krb5_deltat VAR_12 = 0;
 krb5_ccache VAR_13;

 VAR_1 = FUNC_11(&VAR_7);
 if (VAR_1 != 0)
  return (VAR_1);
 VAR_2 = VAR_4 = VAR_5 = VAR_6 = 1;
 VAR_3 = VAR_1 = FUNC_14(VAR_7, VAR_0, &VAR_8);
 if (VAR_1 == 0)
  VAR_2 = VAR_1 = FUNC_8(VAR_7, &VAR_11);
 if (VAR_1 == 0)
  VAR_4 = VAR_1 = FUNC_1(VAR_7, &VAR_13);
 if (VAR_1 == 0)
  VAR_1 = FUNC_2(VAR_7, VAR_13, VAR_8);
 if (VAR_1 == 0) {
  FUNC_10(VAR_7, "gssd",
      FUNC_15(VAR_7, VAR_8), VAR_11);
  VAR_5 = VAR_1 = FUNC_13(VAR_7, &VAR_9);
 }
 if (VAR_1 == 0)
  VAR_6 = VAR_1 = FUNC_7(VAR_7, &VAR_10,
      VAR_8, VAR_9, VAR_12, ((void*)0), VAR_11);
 if (VAR_1 == 0)
  VAR_1 = FUNC_3(VAR_7, VAR_13, &VAR_10);
 if (VAR_5 == 0)
  FUNC_12(VAR_7, VAR_9);
 if (VAR_4 == 0)
  FUNC_0(VAR_7, VAR_13);
 if (VAR_2 == 0)
  FUNC_9(VAR_7, VAR_11);
 if (VAR_3 == 0)
  FUNC_6(VAR_7, VAR_8);
 if (VAR_6 == 0)
  FUNC_5(VAR_7, &VAR_10);
 FUNC_4(VAR_7);
 return (VAR_1);
}
