
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int member_1; int member_0; } ;
typedef TYPE_3__ git_cred_userpass_payload ;
struct TYPE_6__ {TYPE_3__* payload; int credentials; } ;
struct TYPE_7__ {TYPE_1__ callbacks; } ;
struct TYPE_9__ {TYPE_2__ fetch_opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 () ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (int **,int ,char*,TYPE_4__*) ;
 int VAR_6 ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{



 git_cred_userpass_payload VAR_7 = {
  VAR_2,
  VAR_0
 };

 if (!VAR_1)
  FUNC_3();

 if (FUNC_2("GITTEST_REMOTE_DEFAULT")) {
  VAR_4.fetch_opts.callbacks.credentials = VAR_3;
 } else {
  VAR_4.fetch_opts.callbacks.credentials = VAR_6;
  VAR_4.fetch_opts.callbacks.payload = &VAR_7;
 }

 FUNC_1(FUNC_4(&VAR_5, VAR_1, "./foo", &VAR_4));
 FUNC_5(VAR_5); VAR_5 = ((void*)0);
 FUNC_0("./foo");
}
