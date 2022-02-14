
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int path; } ;
struct TYPE_13__ {int path; } ;
struct TYPE_15__ {int similarity; scalar_t__ status; TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;
struct TYPE_16__ {int ptr; } ;
typedef TYPE_4__ git_buf ;


 TYPE_4__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,char*,int,char const*,int ,char const*,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,char*,int) ;

int FUNC_7(
 git_buf *VAR_4,
 const git_diff_delta *VAR_5)
{
 git_buf VAR_6 = VAR_0, VAR_7 = VAR_0;
 const char *VAR_8;
 int VAR_9 = 0;

 if (VAR_5->similarity > 100) {
  FUNC_6(VAR_3, "invalid similarity %d", VAR_5->similarity);
  VAR_9 = -1;
  goto done;
 }

 if (VAR_5->status == VAR_2)
  VAR_8 = "rename";
 else if (VAR_5->status == VAR_1)
  VAR_8 = "copy";
 else
  FUNC_0();

 if ((VAR_9 = FUNC_4(&VAR_6, VAR_5->old_file.path)) < 0 ||
  (VAR_9 = FUNC_4(&VAR_7, VAR_5->new_file.path)) < 0 ||
  (VAR_9 = FUNC_5(&VAR_6)) < 0 ||
  (VAR_9 = FUNC_5(&VAR_7)) < 0)
  goto done;

 FUNC_3(VAR_4,
  "similarity index %d%%\n"
  "%s from %s\n"
  "%s to %s\n",
  VAR_5->similarity,
  VAR_8, VAR_6.ptr,
  VAR_8, VAR_7.ptr);

 if (FUNC_2(VAR_4))
  VAR_9 = -1;

done:
 FUNC_1(&VAR_6);
 FUNC_1(&VAR_7);

 return VAR_9;
}
