
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int token_buffer ;
struct TYPE_16__ {int intval; } ;
struct module_stat {int version; TYPE_1__ data; } ;
struct TYPE_19__ {int value; int length; } ;
struct gsstest_2_res {TYPE_7__ output_token; int min_stat; int maj_stat; } ;
struct TYPE_18__ {char* value; void* length; } ;
struct TYPE_17__ {int length; char* value; } ;
struct gsstest_2_args {int step; TYPE_3__ input_token; TYPE_2__ output_token; } ;
typedef int stat ;
typedef int int32_t ;
typedef int hostname ;
typedef int gss_name_t ;
typedef int gss_ctx_id_t ;
typedef int gss_cred_id_t ;
typedef TYPE_3__ gss_buffer_desc ;
typedef int gss_OID ;
typedef int enctypes ;
typedef int OM_uint32 ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int ,int ,TYPE_3__*,TYPE_3__*) ;
 int FUNC_8 (int *,TYPE_3__*,int ,int *) ;
 int FUNC_9 (int *,int ,int *,int ,int ,int,int ,int ,TYPE_7__*,int *,TYPE_3__*,int *,int *) ;
 int FUNC_10 (int *,int ,int,int*) ;
 int FUNC_11 (int *,TYPE_3__*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int ,TYPE_7__*,TYPE_3__*,int *,int *) ;
 int FUNC_15 (int *,int ,TYPE_3__*,TYPE_7__*,int *) ;
 int FUNC_16 (int *,int ,int ,int ,TYPE_3__*,int *,TYPE_3__*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int,struct module_stat*) ;
 int FUNC_19 (char*,...) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (char*,int,char*,char*) ;
 int VAR_24 ;
 void* FUNC_22 (char*) ;
 int FUNC_23 (int,int,struct gsstest_2_args*,struct gsstest_2_res*) ;

int
FUNC_24(int VAR_25, char **VAR_26)
{
 struct module_stat VAR_27;
 int VAR_28;
 int VAR_29;

 VAR_27.version = sizeof(VAR_27);
 VAR_28 = FUNC_17("gsstest_syscall");
 if (VAR_28 < 0) {
  FUNC_3(VAR_24, "%s: kernel support not present\n", VAR_26[0]);
  FUNC_2(1);
 }
 FUNC_18(VAR_28, &VAR_27);
 VAR_29 = VAR_27.data.intval;

 switch (FUNC_1(VAR_26[1])) {
 case 1:
  FUNC_23(VAR_29, 1, ((void*)0), ((void*)0));
  break;

 case 2: {
  struct gsstest_2_args VAR_30;
  struct gsstest_2_res VAR_31;
  char VAR_32[512];
  char VAR_33[8192];
  OM_uint32 VAR_34, VAR_35;
  gss_ctx_id_t VAR_36 = VAR_13;
  gss_cred_id_t VAR_37;
  gss_OID VAR_38 = VAR_15;
  gss_buffer_desc VAR_39, VAR_40;
  gss_name_t VAR_41;
  int32_t VAR_42[] = {
   VAR_5,
   VAR_2,
   VAR_3,
   VAR_1,
   VAR_0,
   VAR_4,
  };
  int VAR_43 = sizeof(VAR_42) / sizeof(VAR_42[0]);
  int VAR_44;
  int VAR_45;

  for (VAR_45 = 0; VAR_45 < VAR_43; VAR_45++) {
   FUNC_19("testing etype %d\n", VAR_42[VAR_45]);
   VAR_30.output_token.length = sizeof(VAR_33);
   VAR_30.output_token.value = VAR_33;

   FUNC_4(VAR_32, sizeof(VAR_32));
   FUNC_21(VAR_33, sizeof(VAR_33),
       "nfs@%s", VAR_32);
   VAR_39.length = FUNC_22(VAR_33);
   VAR_39.value = VAR_33;
   VAR_34 = FUNC_8(&VAR_35, &VAR_39,
       VAR_17, &VAR_41);
   if (FUNC_0(VAR_34)) {
    FUNC_19("gss_import_name failed\n");
    FUNC_20(VAR_38, VAR_34, VAR_35);
    goto out;
   }

   VAR_34 = FUNC_5(&VAR_35, VAR_14,
       0, VAR_16, VAR_8, &VAR_37,
       ((void*)0), ((void*)0));
   if (FUNC_0(VAR_34)) {
    FUNC_19("gss_acquire_cred (client) failed\n");
    FUNC_20(VAR_38, VAR_34, VAR_35);
    goto out;
   }

   VAR_34 = FUNC_10(&VAR_35,
       VAR_37, 1, &VAR_42[VAR_45]);
   if (FUNC_0(VAR_34)) {
    FUNC_19("gss_krb5_set_allowable_enctypes failed\n");
    FUNC_20(VAR_38, VAR_34, VAR_35);
    goto out;
   }

   VAR_31.output_token.length = 0;
   VAR_31.output_token.value = 0;
   VAR_44 = 0;
   while (!VAR_44) {
    VAR_34 = FUNC_9(&VAR_35,
        VAR_37,
        &VAR_36,
        VAR_41,
        VAR_15,
        (VAR_10
     |VAR_7
     |VAR_9
     |VAR_20
     |VAR_19),
        0,
        VAR_12,
        &VAR_31.output_token,
        &VAR_38,
        &VAR_30.input_token,
        ((void*)0),
        ((void*)0));
    if (FUNC_0(VAR_34)) {
     FUNC_19("gss_init_sec_context failed\n");
     FUNC_20(VAR_38, VAR_34, VAR_35);
     goto out;
    }
    if (VAR_30.input_token.length) {
     VAR_30.step = 1;
     FUNC_23(VAR_29, 2, &VAR_30, &VAR_31);
     FUNC_11(&VAR_35,
         &VAR_30.input_token);
     if (VAR_31.maj_stat != VAR_21
         && VAR_31.maj_stat != VAR_22) {
      FUNC_19("gss_accept_sec_context (kernel) failed\n");
      FUNC_20(VAR_38, VAR_31.maj_stat,
          VAR_31.min_stat);
      goto out;
     }
    }
    if (VAR_34 == VAR_21)
     VAR_44 = 1;
   }

   VAR_40.value = "Hello world";
   VAR_40.length = FUNC_22((char *) VAR_40.value);

   VAR_34 = FUNC_7(&VAR_35, VAR_36,
       VAR_18, &VAR_40, &VAR_30.input_token);
   if (FUNC_0(VAR_34)) {
    FUNC_19("gss_get_mic failed\n");
    FUNC_20(VAR_38, VAR_34, VAR_35);
    goto out;
   }

   VAR_30.step = 2;
   FUNC_23(VAR_29, 2, &VAR_30, &VAR_31);
   FUNC_11(&VAR_35, &VAR_30.input_token);
   if (FUNC_0(VAR_31.maj_stat)) {
    FUNC_19("kernel gss_verify_mic failed\n");
    FUNC_20(VAR_38, VAR_31.maj_stat, VAR_31.min_stat);
    goto out;
   }

   VAR_34 = FUNC_15(&VAR_35, VAR_36,
       &VAR_40, &VAR_31.output_token, ((void*)0));
   if (FUNC_0(VAR_34)) {
    FUNC_19("gss_verify_mic failed\n");
    FUNC_20(VAR_38, VAR_34, VAR_35);
    goto out;
   }

   VAR_34 = FUNC_16(&VAR_35, VAR_36,
       VAR_23, VAR_18, &VAR_40, ((void*)0),
       &VAR_30.input_token);
   if (FUNC_0(VAR_34)) {
    FUNC_19("gss_wrap failed\n");
    FUNC_20(VAR_38, VAR_34, VAR_35);
    goto out;
   }

   VAR_30.step = 3;
   FUNC_23(VAR_29, 2, &VAR_30, &VAR_31);
   FUNC_11(&VAR_35, &VAR_30.input_token);
   if (FUNC_0(VAR_31.maj_stat)) {
    FUNC_19("kernel gss_unwrap failed\n");
    FUNC_20(VAR_38, VAR_31.maj_stat, VAR_31.min_stat);
    goto out;
   }

   VAR_34 = FUNC_14(&VAR_35, VAR_36,
       &VAR_31.output_token, &VAR_40, ((void*)0), ((void*)0));
   if (FUNC_0(VAR_34)) {
    FUNC_19("gss_unwrap failed\n");
    FUNC_20(VAR_38, VAR_34, VAR_35);
    goto out;
   }
   FUNC_11(&VAR_35, &VAR_40);

   VAR_34 = FUNC_16(&VAR_35, VAR_36,
       VAR_6, VAR_18, &VAR_40, ((void*)0),
       &VAR_30.input_token);
   if (FUNC_0(VAR_34)) {
    FUNC_19("gss_wrap failed\n");
    FUNC_20(VAR_38, VAR_34, VAR_35);
    goto out;
   }

   VAR_30.step = 4;
   FUNC_23(VAR_29, 2, &VAR_30, &VAR_31);
   FUNC_11(&VAR_35, &VAR_30.input_token);
   if (FUNC_0(VAR_31.maj_stat)) {
    FUNC_19("kernel gss_unwrap failed\n");
    FUNC_20(VAR_38, VAR_31.maj_stat, VAR_31.min_stat);
    goto out;
   }

   VAR_34 = FUNC_14(&VAR_35, VAR_36,
       &VAR_31.output_token, &VAR_40, ((void*)0), ((void*)0));
   if (FUNC_0(VAR_34)) {
    FUNC_19("gss_unwrap failed\n");
    FUNC_20(VAR_38, VAR_34, VAR_35);
    goto out;
   }
   FUNC_11(&VAR_35, &VAR_40);

   VAR_30.step = 5;
   FUNC_23(VAR_29, 2, &VAR_30, &VAR_31);

   FUNC_13(&VAR_35, &VAR_41);
   FUNC_12(&VAR_35, &VAR_37);
   FUNC_6(&VAR_35, &VAR_36,
       VAR_11);
  }

  break;
 }
 case 3:
  FUNC_23(VAR_29, 3, ((void*)0), ((void*)0));
  break;
 case 4:
  FUNC_23(VAR_29, 4, ((void*)0), ((void*)0));
  break;
 }
 return (0);

out:
 return (1);
}
