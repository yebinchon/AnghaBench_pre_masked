
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct svc_req {int dummy; } ;
typedef int gss_name_t ;
struct TYPE_6__ {scalar_t__ minor_status; scalar_t__ major_status; int exported_name; } ;
typedef TYPE_1__ export_name_res ;
struct TYPE_7__ {int input_name; } ;
typedef TYPE_2__ export_name_args ;
typedef int bool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

bool_t
FUNC_4(export_name_args *VAR_2, export_name_res *VAR_3, struct svc_req *VAR_4)
{
 gss_name_t VAR_5 = FUNC_1(VAR_2->input_name);

 FUNC_3(VAR_3, 0, sizeof(*VAR_3));
 if (!VAR_5) {
  VAR_3->major_status = VAR_0;
  FUNC_2("gssd_export_name: name resource not found\n");
  return (VAR_1);
 }

 VAR_3->major_status = FUNC_0(&VAR_3->minor_status,
     VAR_5, &VAR_3->exported_name);
 FUNC_2("gssd_export_name: done major=0x%x minor=%d\n",
     (unsigned int)VAR_3->major_status, (int)VAR_3->minor_status);

 return (VAR_1);
}
