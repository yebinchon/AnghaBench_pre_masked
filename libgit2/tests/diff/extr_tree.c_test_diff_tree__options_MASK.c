
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_diff_options ;
struct TYPE_4__ {int member_0; int member_3; int member_6; int member_7; int member_8; int member_9; scalar_t__ files; scalar_t__* file_status; scalar_t__ hunks; scalar_t__ lines; scalar_t__ line_ctxt; scalar_t__ line_adds; scalar_t__ line_dels; int member_5; int member_4; int member_2; int member_1; } ;
typedef TYPE_1__ diff_expects ;
typedef int actual ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int *,int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int VAR_16 ;
 int * FUNC_11 (int ,char const*) ;

void FUNC_12(void)
{

 const char *VAR_17 = "6bab5c79cd5140d0";
 const char *VAR_18 = "605812ab7fe421fdd";
 const char *VAR_19 = "f5b0af1fb4f5";
 const char *VAR_20 = "a97cc019851";
 git_tree *VAR_21, *VAR_22;
 diff_expects VAR_23;
 int VAR_24[] = { 0, 0, 0, 0, 1, 1, 1, 1, 1 };
 git_diff_options VAR_25[] = {

  FUNC_0(VAR_6, 1),
  FUNC_0(VAR_6, 3),
  FUNC_0(VAR_7, 2),
  FUNC_0(VAR_2, 2),

  FUNC_0(VAR_6, 3),
  FUNC_0(VAR_3, 3),
  FUNC_0(VAR_4, 3),
  FUNC_0(VAR_5, 3),
  FUNC_0(VAR_3 | VAR_7, 1),
 };
 diff_expects VAR_26[] = {

  { 5, 0, { 0, 3, 0, 2, 0, 0, 0, 0, 0 }, 4, 0, 0, 51, 2, 46, 3 },
  { 5, 0, { 0, 3, 0, 2, 0, 0, 0, 0, 0 }, 4, 0, 0, 53, 4, 46, 3 },
  { 5, 0, { 0, 0, 3, 2, 0, 0, 0, 0, 0 }, 4, 0, 0, 52, 3, 3, 46 },
  { 5, 0, { 0, 3, 0, 2, 0, 0, 0, 0, 0 }, 5, 0, 0, 54, 3, 47, 4 },

  { 1, 0, { 0, 0, 0, 1, 0, 0, 0, 0, 0 }, 1, 0, 0, 22, 9, 10, 3 },
  { 1, 0, { 0, 0, 0, 1, 0, 0, 0, 0, 0 }, 1, 0, 0, 19, 12, 7, 0 },
  { 1, 0, { 0, 0, 0, 1, 0, 0, 0, 0, 0 }, 1, 0, 0, 20, 11, 8, 1 },
  { 1, 0, { 0, 0, 0, 1, 0, 0, 0, 0, 0 }, 1, 0, 0, 20, 11, 8, 1 },
  { 1, 0, { 0, 0, 0, 1, 0, 0, 0, 0, 0 }, 1, 0, 0, 18, 11, 0, 7 },
  { 0 },
 };
 diff_expects *VAR_27;
 int VAR_28, VAR_29;

 VAR_15 = FUNC_5("attr");

 FUNC_2((VAR_8 = FUNC_11(VAR_15, VAR_17)) != ((void*)0));
 FUNC_2((VAR_9 = FUNC_11(VAR_15, VAR_18)) != ((void*)0));
 FUNC_2((VAR_21 = FUNC_11(VAR_15, VAR_19)) != ((void*)0));
 FUNC_2((VAR_22 = FUNC_11(VAR_15, VAR_20)) != ((void*)0));

 for (VAR_28 = 0; VAR_26[VAR_28].files > 0; VAR_28++) {
  FUNC_10(&VAR_23, 0, sizeof(VAR_23));
  VAR_16 = VAR_25[VAR_28];

  if (VAR_24[VAR_28] == 0)
   FUNC_4(FUNC_8(&VAR_10, VAR_15, VAR_8, VAR_9, &VAR_16));
  else
   FUNC_4(FUNC_8(&VAR_10, VAR_15, VAR_21, VAR_22, &VAR_16));

  FUNC_4(FUNC_6(
   VAR_10, VAR_12, VAR_11, VAR_13, VAR_14, &VAR_23));

  VAR_27 = &VAR_26[VAR_28];
  FUNC_3(VAR_23.files, VAR_27->files);
  for (VAR_29 = VAR_1; VAR_29 <= VAR_0; ++VAR_29)
   FUNC_3(VAR_27->file_status[VAR_29], VAR_23.file_status[VAR_29]);
  FUNC_3(VAR_23.hunks, VAR_27->hunks);
  FUNC_3(VAR_23.lines, VAR_27->lines);
  FUNC_3(VAR_23.line_ctxt, VAR_27->line_ctxt);
  FUNC_3(VAR_23.line_adds, VAR_27->line_adds);
  FUNC_3(VAR_23.line_dels, VAR_27->line_dels);

  FUNC_7(VAR_10);
  VAR_10 = ((void*)0);
 }

 FUNC_9(VAR_21);
 FUNC_9(VAR_22);
}
