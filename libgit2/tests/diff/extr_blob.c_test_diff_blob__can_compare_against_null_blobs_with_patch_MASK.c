
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_patch ;
struct TYPE_11__ {scalar_t__ origin; } ;
typedef TYPE_3__ git_diff_line ;
struct TYPE_10__ {int size; int id; } ;
struct TYPE_9__ {int size; int id; } ;
struct TYPE_12__ {int status; int flags; TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_4__ git_diff_delta ;
typedef int git_blob ;
struct TYPE_13__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int * VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int *,int *,int *,int *,TYPE_5__*) ;
 TYPE_4__* FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__ const**,int *,int ,int) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 TYPE_5__ VAR_8 ;

void FUNC_14(void)
{
 git_blob *VAR_9 = ((void*)0);
 git_patch *VAR_10;
 const git_diff_delta *VAR_11;
 const git_diff_line *VAR_12;
 int VAR_13, VAR_14;

 FUNC_4(FUNC_9(&VAR_10, VAR_7, ((void*)0), VAR_9, ((void*)0), &VAR_8));

 FUNC_0(VAR_10 != ((void*)0));

 VAR_11 = FUNC_10(VAR_10);
 FUNC_0(VAR_11 != ((void*)0));
 FUNC_1(VAR_1, VAR_11->status);
 FUNC_2(FUNC_5(VAR_7), &VAR_11->old_file.id);
 FUNC_3(FUNC_6(VAR_7), VAR_11->old_file.size);
 FUNC_0(FUNC_7(&VAR_11->new_file.id));
 FUNC_3(0, VAR_11->new_file.size);

 FUNC_1(1, (int)FUNC_12(VAR_10));
 FUNC_1(14, FUNC_13(VAR_10, 0));

 VAR_14 = FUNC_13(VAR_10, 0);
 for (VAR_13 = 0; VAR_13 < VAR_14; ++VAR_13) {
  FUNC_4(FUNC_11(&VAR_12, VAR_10, 0, VAR_13));
  FUNC_1(VAR_4, (int)VAR_12->origin);
 }

 FUNC_8(VAR_10);

 VAR_8.flags |= VAR_5;

 FUNC_4(FUNC_9(&VAR_10, VAR_7, ((void*)0), VAR_9, ((void*)0), &VAR_8));

 FUNC_0(VAR_10 != ((void*)0));

 VAR_11 = FUNC_10(VAR_10);
 FUNC_0(VAR_11 != ((void*)0));
 FUNC_1(VAR_0, VAR_11->status);
 FUNC_0(FUNC_7(&VAR_11->old_file.id));
 FUNC_3(0, VAR_11->old_file.size);
 FUNC_2(FUNC_5(VAR_7), &VAR_11->new_file.id);
 FUNC_3(FUNC_6(VAR_7), VAR_11->new_file.size);

 FUNC_1(1, (int)FUNC_12(VAR_10));
 FUNC_1(14, FUNC_13(VAR_10, 0));

 VAR_14 = FUNC_13(VAR_10, 0);
 for (VAR_13 = 0; VAR_13 < VAR_14; ++VAR_13) {
  FUNC_4(FUNC_11(&VAR_12, VAR_10, 0, VAR_13));
  FUNC_1(VAR_3, (int)VAR_12->origin);
 }

 FUNC_8(VAR_10);

 VAR_8.flags ^= VAR_5;

 FUNC_4(FUNC_9(&VAR_10, VAR_6, ((void*)0), ((void*)0), ((void*)0), &VAR_8));

 FUNC_0(VAR_10 != ((void*)0));

 VAR_11 = FUNC_10(VAR_10);
 FUNC_0(VAR_11 != ((void*)0));
 FUNC_1(VAR_1, VAR_11->status);
 FUNC_0((VAR_11->flags & VAR_2) != 0);

 FUNC_1(0, (int)FUNC_12(VAR_10));

 FUNC_8(VAR_10);

 FUNC_4(FUNC_9(&VAR_10, ((void*)0), ((void*)0), VAR_6, ((void*)0), &VAR_8));

 FUNC_0(VAR_10 != ((void*)0));

 VAR_11 = FUNC_10(VAR_10);
 FUNC_0(VAR_11 != ((void*)0));
 FUNC_1(VAR_0, VAR_11->status);
 FUNC_0((VAR_11->flags & VAR_2) != 0);

 FUNC_1(0, (int)FUNC_12(VAR_10));

 FUNC_8(VAR_10);
}
