
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct rev_info {int dummy; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char*,int) ;
 struct strbuf VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct strbuf*,struct commit*) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*,...) ;
 struct commit* FUNC_5 (struct rev_info*) ;
 int VAR_4 ;
 int FUNC_6 (struct strbuf*,int ,int) ;
 int FUNC_7 (struct strbuf*) ;

__attribute__((used)) static void FUNC_8(struct commit *VAR_5, struct rev_info *VAR_6)
{
 struct commit *VAR_7, *VAR_8 = ((void*)0);
 struct strbuf VAR_9 = VAR_2;
 int VAR_10 = 0;
 while ((VAR_7 = FUNC_5(VAR_6)) != ((void*)0)) {
  if (VAR_10 < VAR_1)
   FUNC_2(&VAR_9, VAR_7);
  VAR_8 = VAR_7;
  VAR_10++;
 }
 if (VAR_1 < VAR_10) {
  int VAR_11 = VAR_10 - VAR_1;
  if (VAR_11 == 1)
   FUNC_2(&VAR_9, VAR_8);
  else
   FUNC_6(&VAR_9, FUNC_1(" ... and %d more.\n"), VAR_11);
 }

 FUNC_4(VAR_4,
  FUNC_0(

  "Warning: you are leaving %d commit behind, "
  "not connected to\n"
  "any of your branches:\n\n"
  "%s\n",

  "Warning: you are leaving %d commits behind, "
  "not connected to\n"
  "any of your branches:\n\n"
  "%s\n",

  VAR_10),
  VAR_10,
  VAR_9.buf);
 FUNC_7(&VAR_9);

 if (VAR_3)
  FUNC_4(VAR_4,
   FUNC_0(

   "If you want to keep it by creating a new branch, "
   "this may be a good time\nto do so with:\n\n"
   " git branch <new-branch-name> %s\n\n",

   "If you want to keep them by creating a new branch, "
   "this may be a good time\nto do so with:\n\n"
   " git branch <new-branch-name> %s\n\n",

   VAR_10),
   FUNC_3(&VAR_5->object.oid, VAR_0));
}
