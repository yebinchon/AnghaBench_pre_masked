
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int conflicts; int ignored; int updates; int dirty; int untracked; int member_0; } ;
typedef TYPE_1__ notify_counts ;
typedef int git_object ;
struct TYPE_7__ {int notify_flags; int checkout_strategy; TYPE_1__* notify_payload; int notify_cb; } ;
typedef TYPE_2__ git_checkout_options ;
typedef int cts ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int ** VAR_10 ;
 int FUNC_6 (int ,int *,TYPE_2__*) ;
 int FUNC_7 (char*,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int **,int ,int *) ;
 int FUNC_13 (int ,int ,int *) ;
 int VAR_11 ;
 int FUNC_14 (TYPE_1__*,int ,int) ;
 int VAR_12 ;
 int FUNC_15 (char*,int) ;

void FUNC_16(void)
{
 int VAR_13;
 git_object *VAR_14;
 git_checkout_options VAR_15 = VAR_3;
 notify_counts VAR_16 = {0};

 VAR_15.notify_flags =
  VAR_1 | VAR_2;
 VAR_15.notify_cb = VAR_12;
 VAR_15.notify_payload = &VAR_16;

 for (VAR_13 = 0; VAR_10[VAR_13] != ((void*)0); ++VAR_13) {
  FUNC_4(FUNC_12(&VAR_14, VAR_7, VAR_10[VAR_13]));

  FUNC_5("typechanges/a/blocker");
  FUNC_5("typechanges/b");
  FUNC_5("typechanges/c/sub/sub/file");
  FUNC_7("typechanges/d", ((void*)0), VAR_6);
  FUNC_15("typechanges/d", 0777);
  FUNC_5("typechanges/untracked");
  FUNC_4(FUNC_13(VAR_7, VAR_11, ((void*)0)));

  VAR_15.checkout_strategy = VAR_5;
  FUNC_14(&VAR_16, 0, sizeof(VAR_16));

  FUNC_3(FUNC_6(VAR_7, VAR_14, &VAR_15));
  FUNC_2(VAR_16.conflicts, VAR_8[VAR_13]);
  FUNC_2(VAR_16.untracked, VAR_9[VAR_13]);
  FUNC_2(VAR_16.dirty, 0);
  FUNC_2(VAR_16.updates, 0);
  FUNC_2(VAR_16.ignored, 0);

  VAR_15.checkout_strategy =
   VAR_0 | VAR_4;
  FUNC_14(&VAR_16, 0, sizeof(VAR_16));

  FUNC_1(FUNC_10("typechanges/untracked"));

  FUNC_4(FUNC_6(VAR_7, VAR_14, &VAR_15));
  FUNC_2(0, VAR_16.conflicts);

  FUNC_1(!FUNC_10("typechanges/untracked"));

  FUNC_4(
   FUNC_11(VAR_7, FUNC_9(VAR_14)));

  FUNC_0(VAR_7, FUNC_9(VAR_14), ((void*)0), 1);

  FUNC_8(VAR_14);
 }
}
