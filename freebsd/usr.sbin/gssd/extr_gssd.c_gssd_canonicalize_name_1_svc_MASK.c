
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct svc_req {int dummy; } ;
typedef int gss_name_t ;
struct TYPE_6__ {int output_name; scalar_t__ major_status; scalar_t__ minor_status; } ;
typedef TYPE_1__ canonicalize_name_res ;
struct TYPE_7__ {int mech_type; int input_name; } ;
typedef TYPE_2__ canonicalize_name_args ;
typedef int bool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,unsigned int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

bool_t
FUNC_5(canonicalize_name_args *VAR_3, canonicalize_name_res *VAR_4, struct svc_req *VAR_5)
{
 gss_name_t VAR_6 = FUNC_1(VAR_3->input_name);
 gss_name_t VAR_7;

 FUNC_4(VAR_4, 0, sizeof(*VAR_4));
 if (!VAR_6) {
  VAR_4->major_status = VAR_0;
  return (VAR_2);
 }

 VAR_4->major_status = FUNC_0(&VAR_4->minor_status,
     VAR_6, VAR_3->mech_type, &VAR_7);
 FUNC_3("gssd_canonicalize_name: done major=0x%x minor=%d\n",
     (unsigned int)VAR_4->major_status, (int)VAR_4->minor_status);

 if (VAR_4->major_status == VAR_1)
  VAR_4->output_name = FUNC_2(VAR_7);
 else
  VAR_4->output_name = 0;

 return (VAR_2);
}
