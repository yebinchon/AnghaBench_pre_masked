
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct opts {int member_2; int member_3; char* member_9; scalar_t__ no_index; char* treeish1; char* treeish2; scalar_t__ cache; int output; scalar_t__ color; int format; TYPE_1__ findopts; int diffopts; int * member_8; int * member_7; int member_6; int member_5; int member_4; int member_1; int member_0; } ;
typedef int git_tree ;
typedef int git_repository ;
typedef int git_diff ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int *) ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (int **,struct opts*) ;
 int FUNC_2 (int *,struct opts*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int *,int *) ;
 int FUNC_7 (int *,int ,int ,scalar_t__*) ;
 int FUNC_8 (int **,int *,int *,int *,int *) ;
 int FUNC_9 (int **,int *,int *,int *,int *) ;
 int FUNC_10 (int **,int *,int *,int *) ;
 int FUNC_11 (int **,int *,int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct opts*,int,char**) ;
 int VAR_9 ;
 int FUNC_14 (int **,int *,char*) ;

int FUNC_15(git_repository *VAR_10, int VAR_11, char *VAR_12[])
{
 git_tree *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 git_diff *VAR_15;

 struct opts VAR_16 = {
  VAR_5, VAR_3,
  -1, -1, 0, 0, VAR_4, ((void*)0), ((void*)0), "."
 };

 FUNC_13(&VAR_16, VAR_11, VAR_12);
 if (VAR_16.no_index >= 0) {
  FUNC_1(&VAR_15, &VAR_16);
 } else {
  if (VAR_16.treeish1)
   FUNC_14(&VAR_13, VAR_10, VAR_16.treeish1);
  if (VAR_16.treeish2)
   FUNC_14(&VAR_14, VAR_10, VAR_16.treeish2);

  if (VAR_13 && VAR_14)
   FUNC_0(
    FUNC_9(&VAR_15, VAR_10, VAR_13, VAR_14, &VAR_16.diffopts),
    "diff trees", ((void*)0));
  else if (VAR_16.cache != VAR_1) {
   if (!VAR_13)
    FUNC_14(&VAR_13, VAR_10, "HEAD");

   if (VAR_16.cache == VAR_0)
    FUNC_0(
     FUNC_10(&VAR_15, VAR_10, VAR_13, &VAR_16.diffopts),
     "diff tree to working directory", ((void*)0));
   else
    FUNC_0(
     FUNC_8(&VAR_15, VAR_10, VAR_13, ((void*)0), &VAR_16.diffopts),
     "diff tree to index", ((void*)0));
  }
  else if (VAR_13)
   FUNC_0(
    FUNC_11(&VAR_15, VAR_10, VAR_13, &VAR_16.diffopts),
    "diff tree to working directory", ((void*)0));
  else
   FUNC_0(
    FUNC_6(&VAR_15, VAR_10, ((void*)0), &VAR_16.diffopts),
    "diff index to working directory", ((void*)0));



  if ((VAR_16.findopts.flags & VAR_2) != 0)
   FUNC_0(
    FUNC_4(VAR_15, &VAR_16.findopts),
    "finding renames and copies", ((void*)0));
 }



 if (!VAR_16.output)
  VAR_16.output = VAR_6;

 if (VAR_16.output != VAR_6)
  FUNC_2(VAR_15, &VAR_16);

 if ((VAR_16.output & VAR_6) != 0) {
  if (VAR_16.color >= 0)
   FUNC_3(VAR_8[0], VAR_9);

  FUNC_0(
   FUNC_7(VAR_15, VAR_16.format, VAR_7, &VAR_16.color),
   "displaying diff", ((void*)0));

  if (VAR_16.color >= 0)
   FUNC_3(VAR_8[0], VAR_9);
 }


 FUNC_5(VAR_15);
 FUNC_12(VAR_13);
 FUNC_12(VAR_14);

 return 0;
}
