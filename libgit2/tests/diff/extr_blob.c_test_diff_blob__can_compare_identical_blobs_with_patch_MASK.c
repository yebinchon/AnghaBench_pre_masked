
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_patch ;
struct TYPE_6__ {int id; int size; } ;
struct TYPE_5__ {int id; int size; } ;
struct TYPE_7__ {int status; TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int * VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int *,int *,int *,int *,int *) ;
 TYPE_3__* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_3 ;

void FUNC_12(void)
{
 git_patch *VAR_4;
 const git_diff_delta *VAR_5;

 FUNC_4(FUNC_9(&VAR_4, VAR_2, ((void*)0), VAR_2, ((void*)0), &VAR_3));
 FUNC_0(VAR_4 != ((void*)0));

 VAR_5 = FUNC_10(VAR_4);
 FUNC_0(VAR_5 != ((void*)0));
 FUNC_1(VAR_0, VAR_5->status);
 FUNC_3(VAR_5->old_file.size, FUNC_6(VAR_2));
 FUNC_2(FUNC_5(VAR_2), &VAR_5->old_file.id);
 FUNC_3(VAR_5->new_file.size, FUNC_6(VAR_2));
 FUNC_2(FUNC_5(VAR_2), &VAR_5->new_file.id);

 FUNC_1(0, (int)FUNC_11(VAR_4));
 FUNC_8(VAR_4);

 FUNC_4(FUNC_9(&VAR_4, ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_3));
 FUNC_0(VAR_4 != ((void*)0));

 VAR_5 = FUNC_10(VAR_4);
 FUNC_0(VAR_5 != ((void*)0));
 FUNC_1(VAR_0, VAR_5->status);
 FUNC_3(0, VAR_5->old_file.size);
 FUNC_0(FUNC_7(&VAR_5->old_file.id));
 FUNC_3(0, VAR_5->new_file.size);
 FUNC_0(FUNC_7(&VAR_5->new_file.id));

 FUNC_1(0, (int)FUNC_11(VAR_4));
 FUNC_8(VAR_4);

 FUNC_4(FUNC_9(&VAR_4, VAR_1, ((void*)0), VAR_1, ((void*)0), &VAR_3));
 FUNC_0(VAR_4 != ((void*)0));
 FUNC_1(VAR_0, FUNC_10(VAR_4)->status);
 FUNC_1(0, (int)FUNC_11(VAR_4));
 FUNC_8(VAR_4);
}
