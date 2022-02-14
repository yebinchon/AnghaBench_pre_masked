
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_reference ;
typedef int git_buf ;
struct TYPE_7__ {int* payload; int * transfer_progress; } ;
struct TYPE_8__ {TYPE_2__ callbacks; } ;
struct TYPE_6__ {int* progress_payload; int * progress_cb; int checkout_strategy; } ;
struct TYPE_9__ {TYPE_3__ fetch_opts; TYPE_1__ checkout_opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,int ,char*,TYPE_4__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

void FUNC_13(void)
{
 git_buf VAR_8 = VAR_0;
 git_reference *VAR_9;
 bool VAR_10 = 0,
    VAR_11 = 0;

 VAR_6.checkout_opts.checkout_strategy = VAR_1;
 VAR_6.checkout_opts.progress_cb = &VAR_4;
 VAR_6.checkout_opts.progress_payload = &VAR_10;
 VAR_6.fetch_opts.callbacks.transfer_progress = &VAR_5;
 VAR_6.fetch_opts.callbacks.payload = &VAR_11;

 FUNC_2(FUNC_6(&VAR_7, VAR_3, "./foo", &VAR_6));

 FUNC_2(FUNC_5(&VAR_8, FUNC_12(VAR_7), "master.txt"));
 FUNC_0(1, FUNC_7(FUNC_3(&VAR_8)));

 FUNC_2(FUNC_9(&VAR_9, VAR_7, "HEAD"));
 FUNC_0(VAR_2, FUNC_11(VAR_9));
 FUNC_1("refs/heads/master", FUNC_10(VAR_9));

 FUNC_0(1, VAR_10);
 FUNC_0(1, VAR_11);

 FUNC_8(VAR_9);
 FUNC_4(&VAR_8);
}
