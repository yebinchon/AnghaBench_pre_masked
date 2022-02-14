
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int expected_entry_count; char const** expected_paths; unsigned int const* expected_statuses; int entry_count; int member_0; } ;
typedef TYPE_1__ status_entry_counts ;
struct TYPE_11__ {int flags; int show; } ;
typedef TYPE_2__ git_status_options ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;
struct TYPE_12__ {int mode; } ;
typedef TYPE_3__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int const VAR_6 ;
 TYPE_3__ const* FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *,int ) ;
 int FUNC_12 (int **,int *) ;
 int FUNC_13 (int **,int *) ;
 int FUNC_14 (int *,int *,int ,int *) ;
 int FUNC_15 (int *,TYPE_2__*,int ,TYPE_1__*) ;

void FUNC_16(void)
{
 git_repository *VAR_8 = FUNC_5("testrepo");
 git_reference *VAR_9;
 git_object *VAR_10;
 git_index *VAR_11;
 const git_index_entry *VAR_12;
 git_status_options VAR_13 = VAR_2;
 status_entry_counts VAR_14 = {0};
 const char *VAR_15[] = { "README" };
 const unsigned int VAR_16[] = {VAR_6};

 VAR_13.show = VAR_5;
 VAR_13.flags = VAR_3 | VAR_4;

 FUNC_3(FUNC_12(&VAR_9, VAR_8));
 FUNC_3(FUNC_11(&VAR_10, VAR_9, VAR_0));

 FUNC_3(FUNC_14(VAR_8, VAR_10, VAR_1, ((void*)0)));

 FUNC_4("testrepo/README", "This was rewritten.");




 VAR_14.expected_entry_count = 1;
 VAR_14.expected_paths = VAR_15;
 VAR_14.expected_statuses = VAR_16;

 FUNC_3(
  FUNC_15(VAR_8, &VAR_13, VAR_7, &VAR_14));
 FUNC_2(1, VAR_14.entry_count);





 FUNC_3(FUNC_13(&VAR_11, VAR_8));
 FUNC_3(FUNC_8(VAR_11, 1));

 FUNC_1(VAR_12 = FUNC_7(VAR_11, "link_to_new.txt", 0));
 FUNC_1(FUNC_0(VAR_12->mode));

 FUNC_6(VAR_11);
 FUNC_9(VAR_10);
 FUNC_10(VAR_9);
}
