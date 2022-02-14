
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * bufs; int * new_pathw; int * bufsml; } ;
struct TYPE_10__ {TYPE_2__ info; } ;
struct TYPE_8__ {int * pathw; } ;
struct TYPE_11__ {int flags; scalar_t__ fs_type; int * ptr; TYPE_3__ fs; TYPE_1__ file; int * path; } ;
typedef TYPE_4__ uv_fs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;

void FUNC_3(uv_fs_t* VAR_5) {
  if (VAR_5 == ((void*)0))
    return;

  if (VAR_5->flags & VAR_0)
    return;

  if (VAR_5->flags & VAR_1)
    FUNC_0(VAR_5->file.pathw);

  if (VAR_5->flags & VAR_2) {
    if (VAR_5->fs_type == VAR_4 && VAR_5->ptr != ((void*)0))
      FUNC_2(VAR_5);
    else if (VAR_5->fs_type == VAR_3)
      FUNC_1(VAR_5);
    else
      FUNC_0(VAR_5->ptr);
  }

  if (VAR_5->fs.info.bufs != VAR_5->fs.info.bufsml)
    FUNC_0(VAR_5->fs.info.bufs);

  VAR_5->path = ((void*)0);
  VAR_5->file.pathw = ((void*)0);
  VAR_5->fs.info.new_pathw = ((void*)0);
  VAR_5->fs.info.bufs = ((void*)0);
  VAR_5->ptr = ((void*)0);

  VAR_5->flags |= VAR_0;
}
