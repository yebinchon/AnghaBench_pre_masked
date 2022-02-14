
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ length; scalar_t__ contents; } ;
typedef TYPE_2__ git_vector ;
typedef int git_tree ;
struct TYPE_10__ {char** strings; scalar_t__ count; } ;
struct TYPE_12__ {char* start; char* end; void* flags; TYPE_1__ pathlist; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 void* VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,size_t,char const**,size_t,char const**) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *,int *,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int,int *) ;
 int FUNC_11 (TYPE_2__*,char*) ;
 int FUNC_12 () ;

void FUNC_13(void)
{
 git_iterator *VAR_3;
 git_iterator_options VAR_4 = VAR_1;
 git_vector VAR_5;
 git_index *VAR_6;
 git_tree *VAR_7;

 FUNC_0(FUNC_10(&VAR_5, 5, ((void*)0)));

 VAR_2 = FUNC_12();
 FUNC_0(FUNC_6(&VAR_6, VAR_2));
 FUNC_0(FUNC_5(&VAR_7, VAR_2));


 {
  const char *VAR_8[] = { "sm_changed_head" };
  size_t VAR_9 = 1;

  FUNC_8(&VAR_5);
  FUNC_0(FUNC_11(&VAR_5, "sm_changed_head"));

  VAR_4.pathlist.strings = (char **)VAR_5.contents;
  VAR_4.pathlist.count = VAR_5.length;
  VAR_4.flags = VAR_0;

  FUNC_0(FUNC_3(&VAR_3, VAR_2, VAR_6, VAR_7, &VAR_4));
  FUNC_1(VAR_3, VAR_9, VAR_8, VAR_9, VAR_8);
  FUNC_4(VAR_3);
 }


 {
  const char *VAR_10[] = { "sm_changed_head" };
  size_t VAR_11 = 1;

  FUNC_8(&VAR_5);
  FUNC_0(FUNC_11(&VAR_5, "sm_changed_head/"));

  VAR_4.pathlist.strings = (char **)VAR_5.contents;
  VAR_4.pathlist.count = VAR_5.length;
  VAR_4.flags = VAR_0;

  FUNC_0(FUNC_3(&VAR_3, VAR_2, VAR_6, VAR_7, &VAR_4));
  FUNC_1(VAR_3, VAR_11, VAR_10, VAR_11, VAR_10);
  FUNC_4(VAR_3);
 }


 {
  const char *VAR_12[] = { "sm_changed_head", "sm_changed_index" };
  size_t VAR_13 = 2;

  VAR_4.start = "sm_changed_head";
  VAR_4.end = "sm_changed_index";
  VAR_4.pathlist.strings = ((void*)0);
  VAR_4.pathlist.count = 0;
  VAR_4.flags = VAR_0;

  FUNC_0(FUNC_3(&VAR_3, VAR_2, VAR_6, VAR_7, &VAR_4));
  FUNC_1(VAR_3, VAR_13, VAR_12, VAR_13, VAR_12);
  FUNC_4(VAR_3);
 }


 {
  const char *VAR_14[] = { "sm_changed_head", "sm_changed_index" };
  size_t VAR_15 = 2;

  VAR_4.start = "sm_changed_head";
  VAR_4.end = "sm_changed_index";
  VAR_4.pathlist.strings = ((void*)0);
  VAR_4.pathlist.count = 0;
  VAR_4.flags = VAR_0;

  FUNC_0(FUNC_3(&VAR_3, VAR_2, VAR_6, VAR_7, &VAR_4));
  FUNC_1(VAR_3, VAR_15, VAR_14, VAR_15, VAR_14);
  FUNC_4(VAR_3);
 }

 FUNC_9(&VAR_5);
 FUNC_2(VAR_6);
 FUNC_7(VAR_7);
}
