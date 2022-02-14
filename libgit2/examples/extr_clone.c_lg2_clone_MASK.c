
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int member_0; } ;
struct TYPE_15__ {TYPE_1__ member_0; } ;
typedef TYPE_4__ progress_data ;
typedef int git_repository ;
struct TYPE_16__ {int klass; char* message; } ;
typedef TYPE_5__ git_error ;
struct TYPE_13__ {TYPE_4__* payload; int credentials; int * transfer_progress; int sideband_progress; } ;
struct TYPE_14__ {TYPE_2__ callbacks; } ;
struct TYPE_18__ {TYPE_4__* progress_payload; int progress_cb; int checkout_strategy; } ;
struct TYPE_17__ {TYPE_3__ fetch_opts; TYPE_7__ checkout_opts; } ;
typedef TYPE_6__ git_clone_options ;
typedef TYPE_7__ git_checkout_options ;


 TYPE_7__ VAR_0 ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int **,char const*,char const*,TYPE_6__*) ;
 TYPE_5__* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int VAR_6 ;

int FUNC_4(git_repository *VAR_7, int VAR_8, char **VAR_9)
{
 progress_data VAR_10 = {{0}};
 git_repository *VAR_11 = ((void*)0);
 git_clone_options VAR_12 = VAR_2;
 git_checkout_options VAR_13 = VAR_0;
 const char *VAR_14 = VAR_9[1];
 const char *VAR_15 = VAR_9[2];
 int VAR_16;

 (void)VAR_7;


 if (VAR_8 < 3) {
  FUNC_3 ("USAGE: %s <url> <path>\n", VAR_9[0]);
  return -1;
 }


 VAR_13.checkout_strategy = VAR_1;
 VAR_13.progress_cb = VAR_3;
 VAR_13.progress_payload = &VAR_10;
 VAR_12.checkout_opts = VAR_13;
 VAR_12.fetch_opts.callbacks.sideband_progress = VAR_6;
 VAR_12.fetch_opts.callbacks.transfer_progress = &VAR_5;
 VAR_12.fetch_opts.callbacks.credentials = VAR_4;
 VAR_12.fetch_opts.callbacks.payload = &VAR_10;


 VAR_16 = FUNC_0(&VAR_11, VAR_14, VAR_15, &VAR_12);
 FUNC_3("\n");
 if (VAR_16 != 0) {
  const git_error *VAR_17 = FUNC_1();
  if (VAR_17) FUNC_3("ERROR %d: %s\n", VAR_17->klass, VAR_17->message);
  else FUNC_3("ERROR %d: no detailed info\n", VAR_16);
 }
 else if (VAR_11) FUNC_2(VAR_11);
 return VAR_16;
}
