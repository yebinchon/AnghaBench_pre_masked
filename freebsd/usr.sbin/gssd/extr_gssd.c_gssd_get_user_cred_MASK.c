
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
struct passwd {scalar_t__ pw_name; } ;
typedef int gss_name_t ;
typedef int gss_cred_id_t ;
struct TYPE_3__ {int length; void* value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int gss_OID_set ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct passwd* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int ,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__*,int *) ;
 scalar_t__ FUNC_4 (scalar_t__*,TYPE_1__*,int ,int *) ;
 int FUNC_5 (scalar_t__*,int *) ;
 int FUNC_6 (scalar_t__*,int *) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static OM_uint32
FUNC_8(OM_uint32 *VAR_5, uid_t VAR_6, gss_cred_id_t *VAR_7)
{
 gss_buffer_desc VAR_8;
 gss_name_t VAR_9;
 OM_uint32 VAR_10, VAR_11;
 gss_OID_set VAR_12;
 struct passwd *VAR_13;

 VAR_13 = FUNC_0(VAR_6);
 if (VAR_13 == ((void*)0)) {
  *VAR_5 = 0;
  return (VAR_4);
 }





 VAR_10 = FUNC_3(VAR_5, &VAR_12);
 if (VAR_10 != VAR_3)
  return (VAR_10);
 VAR_10 = FUNC_2(VAR_5, VAR_2,
     &VAR_12);
 if (VAR_10 != VAR_3) {
  FUNC_6(&VAR_11, &VAR_12);
  return (VAR_10);
 }

 VAR_8.value = (void *)VAR_13->pw_name;
 VAR_8.length = FUNC_7(VAR_13->pw_name);
 VAR_10 = FUNC_4(VAR_5, &VAR_8,
     VAR_1, &VAR_9);
 if (VAR_10 != VAR_3) {
  FUNC_6(&VAR_11, &VAR_12);
  return (VAR_10);
 }

 VAR_10 = FUNC_1(VAR_5, VAR_9, 0, VAR_12,
     VAR_0, VAR_7, ((void*)0), ((void*)0));
 FUNC_5(&VAR_11, &VAR_9);
 FUNC_6(&VAR_11, &VAR_12);
 return (VAR_10);
}
