
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_diff_options ;
struct TYPE_8__ {int len; int data; } ;
struct TYPE_10__ {TYPE_2__* file; TYPE_1__ map; int repo; } ;
typedef TYPE_3__ git_diff_file_content ;
typedef int git_buf ;
struct TYPE_9__ {scalar_t__ mode; int flags; int id; int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int *,int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(
 git_diff_file_content *VAR_5,
 git_diff_options *VAR_6)
{
 int VAR_7 = 0;
 git_buf VAR_8 = VAR_0;

 if (VAR_5->file->mode == VAR_2)
  return FUNC_1(VAR_5, 1);

 if (VAR_5->file->mode == VAR_3)
  return 0;

 if (FUNC_5(
   &VAR_8, FUNC_7(VAR_5->repo), VAR_5->file->path) < 0)
  return -1;

 if (FUNC_0(VAR_5->file->mode))
  VAR_7 = FUNC_3(VAR_5, &VAR_8);
 else
  VAR_7 = FUNC_2(VAR_5, &VAR_8, VAR_6);


 if (!VAR_7 && (VAR_5->file->flags & VAR_1) == 0) {
  VAR_7 = FUNC_6(
   &VAR_5->file->id, VAR_5->map.data, VAR_5->map.len, VAR_4);
  VAR_5->file->flags |= VAR_1;
 }

 FUNC_4(&VAR_8);
 return VAR_7;
}
