
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* member_0; char* member_1; } ;
typedef TYPE_3__ git_cred_userpass_payload ;
struct TYPE_6__ {TYPE_3__* payload; int credentials; } ;
struct TYPE_7__ {TYPE_1__ callbacks; } ;
struct TYPE_9__ {TYPE_2__ fetch_opts; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_4__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 (int **,int ,char*,TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
 git_cred_userpass_payload VAR_4 = {
  "libgit2", "libgit2"
 };

 VAR_1.fetch_opts.callbacks.credentials = VAR_3;
 VAR_1.fetch_opts.callbacks.payload = &VAR_4;





 FUNC_2();





 FUNC_1(FUNC_3(&VAR_2, VAR_0, "./foo", &VAR_1));
 FUNC_4(VAR_2); VAR_2 = ((void*)0);
 FUNC_0("./foo");
}
