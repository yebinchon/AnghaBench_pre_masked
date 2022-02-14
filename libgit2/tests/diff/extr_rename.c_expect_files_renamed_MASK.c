
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
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_12(const char *VAR_12, const char *VAR_13, uint32_t VAR_14)
{
 git_index *VAR_15;
 git_diff *VAR_16 = ((void*)0);
 diff_expects VAR_17;
 git_diff_options VAR_18 = VAR_6;
 git_diff_find_options VAR_19 = VAR_3;

 VAR_18.flags = VAR_5;
 VAR_19.flags = VAR_2 |
  VAR_1 |
  VAR_4 |
  VAR_14;

 FUNC_1(FUNC_10(&VAR_15, VAR_11));

 FUNC_2("renames/ikeepsix.txt", VAR_12);
 FUNC_1(FUNC_8(VAR_15, "ikeepsix.txt"));

 FUNC_3("renames/ikeepsix.txt");
 FUNC_2("renames/ikeepsix2.txt", VAR_13);

 FUNC_1(FUNC_7(&VAR_16, VAR_11, VAR_15, &VAR_18));
 FUNC_1(FUNC_4(VAR_16, &VAR_19));

 FUNC_11(&VAR_17, 0, sizeof(VAR_17));

 FUNC_1(FUNC_5(
  VAR_16, VAR_8, VAR_7, VAR_9, VAR_10, &VAR_17));
 FUNC_0(1, VAR_17.files);
 FUNC_0(1, VAR_17.file_status[VAR_0]);

 FUNC_6(VAR_16);
 FUNC_9(VAR_15);
}
