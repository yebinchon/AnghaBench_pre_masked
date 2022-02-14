
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int git_index ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
struct TYPE_11__ {int flags; } ;
typedef TYPE_2__ git_diff_find_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_12__ {int * file_status; int files; } ;
typedef TYPE_3__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_12(const char *VAR_11, const char *VAR_12, uint32_t VAR_13)
{
 git_index *VAR_14;
 git_diff *VAR_15 = ((void*)0);
 diff_expects VAR_16;
 git_diff_options VAR_17 = VAR_5;
 git_diff_find_options VAR_18 = VAR_3;

 VAR_17.flags = VAR_4;

 VAR_18.flags = VAR_2 |
  VAR_13;

 FUNC_1(FUNC_10(&VAR_14, VAR_10));

 FUNC_2("renames/ikeepsix.txt", VAR_11);
 FUNC_1(FUNC_8(VAR_14, "ikeepsix.txt"));

 FUNC_3("renames/ikeepsix.txt");
 FUNC_2("renames/ikeepsix2.txt", VAR_12);

 FUNC_1(FUNC_7(&VAR_15, VAR_10, VAR_14, &VAR_17));
 FUNC_1(FUNC_4(VAR_15, &VAR_18));

 FUNC_11(&VAR_16, 0, sizeof(VAR_16));

 FUNC_1(FUNC_5(
  VAR_15, VAR_7, VAR_6, VAR_8, VAR_9, &VAR_16));
 FUNC_0(2, VAR_16.files);
 FUNC_0(1, VAR_16.file_status[VAR_0]);
 FUNC_0(1, VAR_16.file_status[VAR_1]);

 FUNC_6(VAR_15);
 FUNC_9(VAR_14);
}
