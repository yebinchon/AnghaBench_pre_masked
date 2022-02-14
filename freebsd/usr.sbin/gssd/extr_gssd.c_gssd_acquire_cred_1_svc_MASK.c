
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct svc_req {int dummy; } ;
typedef scalar_t__ krb5_error_code ;
typedef int gss_name_t ;
typedef int gss_cred_id_t ;
struct TYPE_9__ {int length; int value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int ccname ;
typedef int bool_t ;
struct TYPE_10__ {int output_cred; void* major_status; scalar_t__ minor_status; int time_rec; int actual_mechs; } ;
typedef TYPE_2__ acquire_cred_res ;
struct TYPE_11__ {scalar_t__ desired_name; scalar_t__ uid; int cred_usage; int desired_mechs; int time_req; } ;
typedef TYPE_3__ acquire_cred_args ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*,scalar_t__,char*) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (scalar_t__*,int ,int ,int ,int ,int *,int *,int *) ;
 void* FUNC_3 (scalar_t__*,int ,TYPE_1__*,int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_12 ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;
 int FUNC_11 (char*,char*,int ) ;
 int FUNC_12 (char*,int,char*,...) ;
 int VAR_13 ;
 char* FUNC_13 (char*,char) ;
 int FUNC_14 (int ,char*) ;

bool_t
FUNC_15(acquire_cred_args *VAR_14, acquire_cred_res *VAR_15, struct svc_req *VAR_16)
{
 gss_name_t VAR_17 = VAR_2;
 gss_cred_id_t VAR_18;
 char VAR_19[VAR_8 + 5 + 1], *VAR_20, *VAR_21;
 int VAR_22;

 gss_buffer_desc VAR_23;
 uint32_t VAR_24;
 krb5_error_code VAR_25;


 FUNC_10(VAR_15, 0, sizeof(*VAR_15));
 if (VAR_14->desired_name) {
  VAR_17 = FUNC_5(VAR_14->desired_name);
  if (!VAR_17) {
   VAR_15->major_status = VAR_3;
   FUNC_8("gssd_acquire_cred: no desired name"
       " found\n");
   return (VAR_9);
  }
 }


 if (VAR_12 != 0 && VAR_14->desired_name != 0 &&
     VAR_14->uid == 0 && VAR_14->cred_usage == VAR_1) {

  FUNC_12(VAR_19, sizeof(VAR_19), "FILE:%s",
      VAR_0);
  FUNC_11("KRB5CCNAME", VAR_19, VAR_9);
  VAR_15->major_status = FUNC_3(&VAR_15->minor_status,
      VAR_17, &VAR_23, ((void*)0));
  FUNC_8("gssd_acquire_cred: desired name for host "
      "based initiator cred major=0x%x minor=%d\n",
      (unsigned int)VAR_15->major_status,
      (int)VAR_15->minor_status);
  if (VAR_15->major_status != VAR_4)
   return (VAR_9);
  if (VAR_23.length > VAR_8 + 5) {
   VAR_15->minor_status = 0;
   VAR_15->major_status = VAR_6;
   return (VAR_9);
  }
  FUNC_9(VAR_19, VAR_23.value, VAR_23.length);
  VAR_19[VAR_23.length] = '\0';
  if ((VAR_20 = FUNC_13(VAR_19, '@')) != ((void*)0))
   *VAR_20 = '/';
  VAR_25 = FUNC_6(VAR_19);
  FUNC_8("gssd_acquire_cred: using keytab entry for "
      "%s, kerberos ret=%d\n", VAR_19, (int)VAR_25);
  FUNC_4(&VAR_24, &VAR_23);
  if (VAR_25 != 0) {
   VAR_15->minor_status = VAR_25;
   VAR_15->major_status = VAR_6;
   return (VAR_9);
  }
 } else

 if (VAR_10[0] != '\0' && VAR_14->desired_name == 0) {





  VAR_22 = 0;
  VAR_20 = VAR_10;
  do {
   VAR_21 = FUNC_13(VAR_20, ':');
   if (VAR_21 != ((void*)0))
    *VAR_21 = '\0';
   VAR_22 = FUNC_0(VAR_20, VAR_14->uid, VAR_19);
   if (VAR_22 != 0)
    break;
   if (VAR_21 != ((void*)0))
    *VAR_21++ = ':';
   VAR_20 = VAR_21;
  } while (VAR_20 != ((void*)0) && *VAR_20 != '\0');
  if (VAR_22 == 0) {
   VAR_15->major_status = VAR_5;
   FUNC_8("gssd_acquire_cred: no cred cache"
       " file found\n");
   return (VAR_9);
  }
  FUNC_11("KRB5CCNAME", VAR_19, VAR_9);
 } else {






  if (VAR_14->desired_name != 0 && VAR_14->uid != 0) {
   if (VAR_11 == 0)
    FUNC_14(VAR_7, "gss_acquire_cred:"
        " principal_name for non-root");
   else
    FUNC_1(VAR_13, "gss_acquire_cred:"
        " principal_name for non-root\n");
  }
  FUNC_12(VAR_19, sizeof(VAR_19), "FILE:/tmp/krb5cc_%d",
      (int) VAR_14->uid);
  FUNC_11("KRB5CCNAME", VAR_19, VAR_9);
 }

 VAR_15->major_status = FUNC_2(&VAR_15->minor_status,
     VAR_17, VAR_14->time_req, VAR_14->desired_mechs,
     VAR_14->cred_usage, &VAR_18, &VAR_15->actual_mechs, &VAR_15->time_rec);
 FUNC_8("gssd_acquire_cred: done major=0x%x minor=%d\n",
     (unsigned int)VAR_15->major_status, (int)VAR_15->minor_status);

 if (VAR_15->major_status == VAR_4)
  VAR_15->output_cred = FUNC_7(VAR_18);
 else
  VAR_15->output_cred = 0;

 return (VAR_9);
}
