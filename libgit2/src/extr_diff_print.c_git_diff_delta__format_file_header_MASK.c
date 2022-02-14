
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ mode; int path; } ;
struct TYPE_22__ {scalar_t__ mode; int path; } ;
struct TYPE_24__ {scalar_t__ status; int flags; TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;
struct TYPE_25__ {int ptr; } ;
typedef TYPE_4__ git_buf ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (TYPE_4__*,char const*,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__ const*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__ const*,char*,int ,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__ const*) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__ const*,int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,char*,int ,int ) ;

int FUNC_10(
 git_buf *VAR_7,
 const git_diff_delta *VAR_8,
 const char *VAR_9,
 const char *VAR_10,
 int VAR_11)
{
 git_buf VAR_12 = VAR_3, VAR_13 = VAR_3;
 bool VAR_14 = FUNC_0(VAR_8);
 int VAR_15 = 0;

 if (!VAR_9)
  VAR_9 = VAR_1;
 if (!VAR_10)
  VAR_10 = VAR_0;
 if (!VAR_11)
  VAR_11 = VAR_2;

 if ((VAR_15 = FUNC_1(
   &VAR_12, VAR_9, VAR_8->old_file.path)) < 0 ||
  (VAR_15 = FUNC_1(
   &VAR_13, VAR_10, VAR_8->new_file.path)) < 0)
  goto done;

 FUNC_6(VAR_7);

 FUNC_9(VAR_7, "diff --git %s %s\n",
  VAR_12.ptr, VAR_13.ptr);

 if (VAR_8->status == VAR_5 ||
  (VAR_8->status == VAR_4 && VAR_14)) {
  if ((VAR_15 = FUNC_2(VAR_7, VAR_8)) < 0)
   goto done;
 }

 if (!VAR_14) {
  if ((VAR_15 = FUNC_5(VAR_7, VAR_8, VAR_11)) < 0)
   goto done;

  if ((VAR_8->flags & VAR_6) == 0)
   FUNC_3(VAR_7, VAR_8,
    "--- %s\n+++ %s\n", VAR_12.ptr, VAR_13.ptr);
 }

 if (VAR_14 && VAR_8->old_file.mode != VAR_8->new_file.mode)
  FUNC_4(VAR_7, VAR_8);

 if (FUNC_8(VAR_7))
  VAR_15 = -1;

done:
 FUNC_7(&VAR_12);
 FUNC_7(&VAR_13);

 return VAR_15;
}
