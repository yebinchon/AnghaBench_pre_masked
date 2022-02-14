
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct svc_req {int dummy; } ;
struct TYPE_8__ {scalar_t__ major_status; scalar_t__ ctx; scalar_t__ minor_status; int time_rec; int ret_flags; int output_token; int actual_mech_type; } ;
typedef TYPE_1__ init_sec_context_res ;
struct TYPE_9__ {scalar_t__ cred; scalar_t__ uid; scalar_t__ ctx; scalar_t__ name; int input_token; int input_chan_bindings; int time_req; int req_flags; int mech_type; } ;
typedef TYPE_2__ init_sec_context_args ;
typedef void* gss_name_t ;
typedef void* gss_ctx_id_t ;
typedef scalar_t__ gss_cred_id_t ;
struct TYPE_10__ {int length; char* value; } ;
typedef TYPE_3__ gss_buffer_desc ;
typedef int enctype ;
typedef int ccname ;
typedef int bool_t ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 char* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (char*,scalar_t__,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__,void**,void*,int ,int ,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_3 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*,int ,TYPE_3__*) ;
 void* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_16 ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (char*,char*,int ) ;
 int FUNC_11 (char*,int,char*,...) ;
 int VAR_17 ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 (int ,char*) ;
 scalar_t__ VAR_18 ;

bool_t
FUNC_14(init_sec_context_args *VAR_19, init_sec_context_res *VAR_20, struct svc_req *VAR_21)
{
 gss_cred_id_t VAR_22 = VAR_3;
 gss_ctx_id_t VAR_23 = VAR_2;
 gss_name_t VAR_24 = VAR_4;
 char VAR_25[VAR_12 + 5 + 1], *VAR_26, *VAR_27;
 int VAR_28, VAR_29;
 OM_uint32 VAR_30;

 gss_buffer_desc VAR_31;
 char VAR_32[sizeof(uint32_t)];
 int VAR_33;
 OM_uint32 VAR_34;


 FUNC_9(VAR_20, 0, sizeof(*VAR_20));
 if (VAR_16 != 0 && VAR_19->cred != 0 &&
     VAR_19->uid == 0) {






  FUNC_11(VAR_25, sizeof(VAR_25), "FILE:%s",
      VAR_1);
 } else if (VAR_14[0] != '\0' && VAR_19->cred == 0) {





  VAR_28 = 0;
  VAR_26 = VAR_14;
  do {
   VAR_27 = FUNC_12(VAR_26, ':');
   if (VAR_27 != ((void*)0))
    *VAR_27 = '\0';
   VAR_28 = FUNC_0(VAR_26, VAR_19->uid, VAR_25);
   if (VAR_28 != 0)
    break;
   if (VAR_27 != ((void*)0))
    *VAR_27++ = ':';
   VAR_26 = VAR_27;
  } while (VAR_26 != ((void*)0) && *VAR_26 != '\0');
  if (VAR_28 == 0) {
   VAR_20->major_status = VAR_10;
   FUNC_8("gssd_init_sec_context: -s no"
       " credential cache file found for uid=%d\n",
       (int)VAR_19->uid);
   return (VAR_13);
  }
 } else {





  if (VAR_19->cred != 0 && VAR_19->uid != 0) {
   if (VAR_15 == 0)
    FUNC_13(VAR_11, "gss_init_sec_context:"
        " cred for non-root");
   else
    FUNC_1(VAR_17, "gss_init_sec_context:"
        " cred for non-root\n");
  }
  FUNC_11(VAR_25, sizeof(VAR_25), "FILE:/tmp/krb5cc_%d",
      (int) VAR_19->uid);
 }
 FUNC_10("KRB5CCNAME", VAR_25, VAR_13);

 if (VAR_19->cred) {
  VAR_22 = FUNC_5(VAR_19->cred);
  if (!VAR_22) {
   VAR_20->major_status = VAR_10;
   FUNC_8("gssd_init_sec_context: cred"
       " resource not found\n");
   return (VAR_13);
  }
 }
 if (VAR_19->ctx) {
  VAR_23 = FUNC_5(VAR_19->ctx);
  if (!VAR_23) {
   VAR_20->major_status = VAR_8;
   FUNC_8("gssd_init_sec_context: context"
       " resource not found\n");
   return (VAR_13);
  }
 }
 if (VAR_19->name) {
  VAR_24 = FUNC_5(VAR_19->name);
  if (!VAR_24) {
   VAR_20->major_status = VAR_6;
   FUNC_8("gssd_init_sec_context: name"
       " resource not found\n");
   return (VAR_13);
  }
 }
 VAR_29 = 0;


 if (VAR_18 != 0) {
  if (VAR_22 == VAR_3) {

   VAR_34 = FUNC_6(&VAR_30, VAR_19->uid,
       &VAR_22);
   if (VAR_34 == VAR_7)
    VAR_29 = 1;
   else
    FUNC_8("gssd_init_sec_context: "
        "get user cred failed uid=%d major=0x%x "
        "minor=%d\n", (int)VAR_19->uid,
        (unsigned int)VAR_34, (int)VAR_30);
  }
  if (VAR_22 != VAR_3) {
   VAR_33 = VAR_0;
   VAR_32[0] = (VAR_33 >> 24) & 0xff;
   VAR_32[1] = (VAR_33 >> 16) & 0xff;
   VAR_32[2] = (VAR_33 >> 8) & 0xff;
   VAR_32[3] = VAR_33 & 0xff;
   VAR_31.length = sizeof(VAR_32);
   VAR_31.value = VAR_32;
   VAR_20->major_status = FUNC_4(
       &VAR_20->minor_status, &VAR_22,
       VAR_5,
       &VAR_31);
   FUNC_8("gssd_init_sec_context: set allowable "
       "enctype major=0x%x minor=%d\n",
       (unsigned int)VAR_20->major_status,
       (int)VAR_20->minor_status);
   if (VAR_20->major_status != VAR_7) {
    if (VAR_29 != 0)
     FUNC_3(&VAR_30, &VAR_22);
    return (VAR_13);
   }
  }
 }

 VAR_20->major_status = FUNC_2(&VAR_20->minor_status,
     VAR_22, &VAR_23, VAR_24, VAR_19->mech_type,
     VAR_19->req_flags, VAR_19->time_req, VAR_19->input_chan_bindings,
     &VAR_19->input_token, &VAR_20->actual_mech_type,
     &VAR_20->output_token, &VAR_20->ret_flags, &VAR_20->time_rec);
 FUNC_8("gssd_init_sec_context: done major=0x%x minor=%d"
     " uid=%d\n", (unsigned int)VAR_20->major_status,
     (int)VAR_20->minor_status, (int)VAR_19->uid);
 if (VAR_29 != 0)
  FUNC_3(&VAR_30, &VAR_22);

 if (VAR_20->major_status == VAR_7
     || VAR_20->major_status == VAR_9) {
  if (VAR_19->ctx)
   VAR_20->ctx = VAR_19->ctx;
  else
   VAR_20->ctx = FUNC_7(VAR_23);
 }

 return (VAR_13);
}
