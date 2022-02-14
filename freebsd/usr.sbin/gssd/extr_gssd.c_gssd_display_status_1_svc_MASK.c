
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct TYPE_5__ {scalar_t__ minor_status; scalar_t__ major_status; int status_string; int message_context; } ;
typedef TYPE_1__ display_status_res ;
struct TYPE_6__ {int mech_type; int status_type; int status_value; int message_context; } ;
typedef TYPE_2__ display_status_args ;
typedef int bool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int ,int ,int *,int *) ;
 int FUNC_1 (char*,unsigned int,int) ;

bool_t
FUNC_2(display_status_args *VAR_1, display_status_res *VAR_2, struct svc_req *VAR_3)
{

 VAR_2->message_context = VAR_1->message_context;
 VAR_2->major_status = FUNC_0(&VAR_2->minor_status,
     VAR_1->status_value, VAR_1->status_type, VAR_1->mech_type,
     &VAR_2->message_context, &VAR_2->status_string);
 FUNC_1("gssd_display_status: done major=0x%x minor=%d\n",
     (unsigned int)VAR_2->major_status, (int)VAR_2->minor_status);

 return (VAR_0);
}
