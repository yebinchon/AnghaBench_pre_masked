
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct svc_req {int dummy; } ;
typedef scalar_t__ gss_ctx_id_t ;
struct TYPE_8__ {int * value; scalar_t__ length; } ;
struct TYPE_6__ {scalar_t__ minor_status; scalar_t__ major_status; TYPE_5__ interprocess_token; int format; } ;
typedef TYPE_1__ export_sec_context_res ;
struct TYPE_7__ {int ctx; } ;
typedef TYPE_2__ export_sec_context_args ;
typedef int bool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,TYPE_5__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,unsigned int,int) ;

bool_t
FUNC_4(export_sec_context_args *VAR_3, export_sec_context_res *VAR_4, struct svc_req *VAR_5)
{
 gss_ctx_id_t VAR_6 = FUNC_2(VAR_3->ctx);

 if (VAR_6) {
  VAR_4->major_status = FUNC_0(
   &VAR_4->minor_status, &VAR_6,
   &VAR_4->interprocess_token);
  VAR_4->format = VAR_1;
  FUNC_1(VAR_3->ctx);
 } else {
  VAR_4->major_status = VAR_0;
  VAR_4->minor_status = 0;
  VAR_4->interprocess_token.length = 0;
  VAR_4->interprocess_token.value = ((void*)0);
 }
 FUNC_3("gssd_export_sec_context: done major=0x%x minor=%d\n",
     (unsigned int)VAR_4->major_status, (int)VAR_4->minor_status);

 return (VAR_2);
}
