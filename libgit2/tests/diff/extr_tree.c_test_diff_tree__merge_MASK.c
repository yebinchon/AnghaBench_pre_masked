
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_diff ;
struct TYPE_3__ {int line_dels; int line_adds; int line_ctxt; int lines; int hunks; int * file_status; int files; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *,int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int **,int ,int *,int *,int *) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (int ,char const*) ;

void FUNC_10(void)
{

 const char *VAR_11 = "605812a";
 const char *VAR_12 = "370fe9ec22";
 const char *VAR_13 = "f5b0af1fb4f5c";
 git_tree *VAR_14;
 git_diff *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);

 VAR_10 = FUNC_3("attr");

 FUNC_0((VAR_3 = FUNC_9(VAR_10, VAR_11)) != ((void*)0));
 FUNC_0((VAR_4 = FUNC_9(VAR_10, VAR_12)) != ((void*)0));
 FUNC_0((VAR_14 = FUNC_9(VAR_10, VAR_13)) != ((void*)0));

 FUNC_2(FUNC_7(&VAR_15, VAR_10, VAR_3, VAR_4, ((void*)0)));

 FUNC_2(FUNC_7(&VAR_16, VAR_10, VAR_14, VAR_4, ((void*)0)));

 FUNC_8(VAR_14);

 FUNC_2(FUNC_6(VAR_15, VAR_16));

 FUNC_5(VAR_16);

 FUNC_2(FUNC_4(
  VAR_15, VAR_6, VAR_5, VAR_7, VAR_8, &VAR_9));

 FUNC_1(6, VAR_9.files);
 FUNC_1(2, VAR_9.file_status[VAR_0]);
 FUNC_1(1, VAR_9.file_status[VAR_1]);
 FUNC_1(3, VAR_9.file_status[VAR_2]);

 FUNC_1(6, VAR_9.hunks);

 FUNC_1(59, VAR_9.lines);
 FUNC_1(1, VAR_9.line_ctxt);
 FUNC_1(36, VAR_9.line_adds);
 FUNC_1(22, VAR_9.line_dels);

 FUNC_5(VAR_15);
}
