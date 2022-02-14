
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int certificate_check; } ;
struct TYPE_9__ {TYPE_1__ callbacks; } ;
typedef TYPE_2__ git_fetch_options ;
typedef int git_clone_options ;
struct TYPE_10__ {int checkout_strategy; } ;
typedef TYPE_3__ git_checkout_options ;
struct TYPE_11__ {TYPE_2__ fetch_opts; TYPE_3__ checkout_opts; int version; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* FUNC_0 (char*) ;
 TYPE_4__ VAR_18 ;
 int * VAR_19 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int VAR_20 ;

void FUNC_2(void)
{
 git_checkout_options VAR_21 = VAR_0;
 git_fetch_options VAR_22 = VAR_3;

 VAR_19 = ((void*)0);

 FUNC_1(&VAR_18, 0, sizeof(git_clone_options));
 VAR_18.version = VAR_2;
 VAR_18.checkout_opts = VAR_21;
 VAR_18.checkout_opts.checkout_strategy = VAR_1;
 VAR_18.fetch_opts = VAR_22;
 VAR_18.fetch_opts.callbacks.certificate_check = VAR_20;

 VAR_16 = FUNC_0("GITTEST_REMOTE_URL");
 VAR_17 = FUNC_0("GITTEST_REMOTE_USER");
 VAR_5 = FUNC_0("GITTEST_REMOTE_PASS");
 VAR_15 = FUNC_0("GITTEST_REMOTE_SSL_NOVERIFY");
 VAR_14 = FUNC_0("GITTEST_REMOTE_SSH_PUBKEY");
 VAR_13 = FUNC_0("GITTEST_REMOTE_SSH_KEY");
 VAR_12 = FUNC_0("GITTEST_REMOTE_SSH_PASSPHRASE");
 VAR_11 = FUNC_0("GITTEST_REMOTE_SSH_FINGERPRINT");
 VAR_8 = FUNC_0("GITTEST_REMOTE_PROXY_SCHEME");
 VAR_6 = FUNC_0("GITTEST_REMOTE_PROXY_HOST");
 VAR_10 = FUNC_0("GITTEST_REMOTE_PROXY_USER");
 VAR_7 = FUNC_0("GITTEST_REMOTE_PROXY_PASS");
 VAR_9 = FUNC_0("GITTEST_REMOTE_PROXY_SELFSIGNED");

 VAR_4 = 0;
}
