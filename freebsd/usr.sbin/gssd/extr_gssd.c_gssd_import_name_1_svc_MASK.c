
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct TYPE_5__ {int output_name; scalar_t__ major_status; scalar_t__ minor_status; } ;
typedef TYPE_1__ import_name_res ;
struct TYPE_6__ {int input_name_type; int input_name_buffer; } ;
typedef TYPE_2__ import_name_args ;
typedef int gss_name_t ;
typedef int bool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int *,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,unsigned int,int) ;

bool_t
FUNC_3(import_name_args *VAR_2, import_name_res *VAR_3, struct svc_req *VAR_4)
{
 gss_name_t VAR_5;

 VAR_3->major_status = FUNC_0(&VAR_3->minor_status,
     &VAR_2->input_name_buffer, VAR_2->input_name_type, &VAR_5);
 FUNC_2("gssd_import_name: done major=0x%x minor=%d\n",
     (unsigned int)VAR_3->major_status, (int)VAR_3->minor_status);

 if (VAR_3->major_status == VAR_0)
  VAR_3->output_name = FUNC_1(VAR_5);
 else
  VAR_3->output_name = 0;

 return (VAR_1);
}
