
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ git_off_t ;
struct TYPE_11__ {int flags; scalar_t__ max_size; } ;
typedef TYPE_3__ git_diff_options ;
struct TYPE_10__ {char* data; scalar_t__ len; } ;
struct TYPE_12__ {int opts_flags; scalar_t__ opts_max_size; scalar_t__ src; int flags; TYPE_2__ map; TYPE_1__* file; int driver; int repo; } ;
typedef TYPE_4__ git_diff_file_content ;
struct TYPE_9__ {scalar_t__ size; int flags; int path; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int*,int ) ;

__attribute__((used)) static int FUNC_4(
 git_diff_file_content *VAR_10, const git_diff_options *VAR_11)
{
 VAR_10->opts_flags = VAR_11 ? VAR_11->flags : VAR_7;

 if (VAR_11 && VAR_11->max_size >= 0)
  VAR_10->opts_max_size = VAR_11->max_size ?
   VAR_11->max_size : VAR_0;

 if (VAR_10->src == VAR_8)
  VAR_10->src = VAR_9;

 if (!VAR_10->driver &&
  FUNC_2(&VAR_10->driver, VAR_10->repo,
      ((void*)0), VAR_10->file->path) < 0)
  return -1;


 FUNC_3(&VAR_10->opts_flags, VAR_10->driver);


 if ((git_off_t)((size_t)VAR_10->file->size) != VAR_10->file->size)
  VAR_10->file->flags |= VAR_1;

 else if (VAR_10->opts_flags & VAR_6) {
  VAR_10->file->flags &= ~VAR_1;
  VAR_10->file->flags |= VAR_2;
 }

 else if (VAR_10->opts_flags & VAR_5) {
  VAR_10->file->flags &= ~VAR_2;
  VAR_10->file->flags |= VAR_1;
 }

 FUNC_1(VAR_10);

 if ((VAR_10->flags & VAR_4) != 0) {
  VAR_10->flags |= VAR_3;
  VAR_10->map.len = 0;
  VAR_10->map.data = "";
 }

 if ((VAR_10->flags & VAR_3) != 0)
  FUNC_0(VAR_10);

 return 0;
}
