
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_12__ {int flags; } ;
typedef TYPE_1__ const git_patch ;
struct TYPE_13__ {int context_lines; int interhunk_lines; int flags; int max_size; } ;
typedef TYPE_2__ git_diff_options ;
typedef TYPE_1__ git_diff_delta ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int *,TYPE_2__*) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__ const*) ;
 int FUNC_9 (TYPE_1__ const**,int *,size_t) ;
 TYPE_1__* FUNC_10 (TYPE_1__ const*) ;
 scalar_t__ FUNC_11 (TYPE_1__ const*) ;

void FUNC_12(void)
{
 git_repository *VAR_5 = FUNC_4("status");
 git_diff_options VAR_6 = VAR_4;
 git_diff *VAR_7 = ((void*)0);
 int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 size_t VAR_11, VAR_12;

 VAR_6.context_lines = 3;
 VAR_6.interhunk_lines = 1;
 VAR_6.flags |= VAR_2 | VAR_3;

 FUNC_3(FUNC_6(&VAR_7, VAR_5, ((void*)0), &VAR_6));
 VAR_12 = FUNC_7(VAR_7);

 for (VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11) {
  git_patch *VAR_13;
  const git_diff_delta *VAR_14;

  FUNC_3(FUNC_9(&VAR_13, VAR_7, VAR_11));
  FUNC_1(VAR_13);
  VAR_14 = FUNC_10(VAR_13);
  FUNC_1(VAR_14);

  VAR_8++;
  VAR_10 += (int)FUNC_11(VAR_13);

  FUNC_0((VAR_14->flags & (VAR_0|VAR_1)) != 0);
  VAR_9 += ((VAR_14->flags & VAR_0) != 0);

  FUNC_8(VAR_13);
 }

 FUNC_2(13, VAR_8);
 FUNC_2(0, VAR_9);
 FUNC_2(8, VAR_10);

 FUNC_5(VAR_7);



 VAR_8 = VAR_9 = VAR_10 = 0;

 VAR_6.context_lines = 3;
 VAR_6.interhunk_lines = 1;
 VAR_6.flags |= VAR_2 | VAR_3;
 VAR_6.max_size = 50;

 FUNC_3(FUNC_6(&VAR_7, VAR_5, ((void*)0), &VAR_6));
 VAR_12 = FUNC_7(VAR_7);

 for (VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11) {
  git_patch *VAR_15;
  const git_diff_delta *VAR_16;

  FUNC_3(FUNC_9(&VAR_15, VAR_7, VAR_11));
  VAR_16 = FUNC_10(VAR_15);

  VAR_8++;
  VAR_10 += (int)FUNC_11(VAR_15);

  FUNC_0((VAR_16->flags & (VAR_0|VAR_1)) != 0);
  VAR_9 += ((VAR_16->flags & VAR_0) != 0);

  FUNC_8(VAR_15);
 }

 FUNC_2(13, VAR_8);





 FUNC_2(3, VAR_9);
 FUNC_2(5, VAR_10);

 FUNC_5(VAR_7);
}
