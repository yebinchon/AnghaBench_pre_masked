
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct TYPE_5__ {scalar_t__ minor_status; scalar_t__ major_status; } ;
typedef TYPE_1__ release_cred_res ;
struct TYPE_6__ {int cred; } ;
typedef TYPE_2__ release_cred_args ;
typedef scalar_t__ gss_cred_id_t ;
typedef int bool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,unsigned int,int) ;

bool_t
FUNC_4(release_cred_args *VAR_2, release_cred_res *VAR_3, struct svc_req *VAR_4)
{
 gss_cred_id_t VAR_5 = FUNC_2(VAR_2->cred);

 if (VAR_5) {
  VAR_3->major_status = FUNC_0(&VAR_3->minor_status,
      &VAR_5);
  FUNC_1(VAR_2->cred);
 } else {
  VAR_3->major_status = VAR_0;
  VAR_3->minor_status = 0;
 }
 FUNC_3("gssd_release_cred: done major=0x%x minor=%d\n",
     (unsigned int)VAR_3->major_status, (int)VAR_3->minor_status);

 return (VAR_1);
}
