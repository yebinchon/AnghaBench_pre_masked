
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t git_off_t ;
typedef int git_mwindow_file ;
struct TYPE_8__ {scalar_t__ mapped; scalar_t__ open_windows; scalar_t__ peak_mapped; scalar_t__ peak_open_windows; int mmap_calls; } ;
typedef TYPE_1__ git_mwindow_ctl ;
struct TYPE_9__ {size_t offset; int window_map; } ;
typedef TYPE_2__ git_mwindow ;
typedef int git_file ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ,size_t,size_t) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (TYPE_2__*,int,int) ;

__attribute__((used)) static git_mwindow *FUNC_5(
 git_mwindow_file *VAR_3,
 git_file VAR_4,
 git_off_t VAR_5,
 git_off_t VAR_6)
{
 git_mwindow_ctl *VAR_7 = &VAR_2;
 size_t VAR_8 = VAR_1 / 2;
 git_off_t VAR_9;
 git_mwindow *VAR_10;

 VAR_10 = FUNC_1(sizeof(*VAR_10));

 if (VAR_10 == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_10, 0x0, sizeof(*VAR_10));
 VAR_10->offset = (VAR_6 / VAR_8) * VAR_8;

 VAR_9 = VAR_5 - VAR_10->offset;
 if (VAR_9 > (git_off_t)VAR_1)
  VAR_9 = (git_off_t)VAR_1;

 VAR_7->mapped += (size_t)VAR_9;

 while (VAR_0 < VAR_7->mapped &&
   FUNC_3(VAR_3) == 0) ;







 if (FUNC_2(&VAR_10->window_map, VAR_4, VAR_10->offset, (size_t)VAR_9) < 0) {





  while (FUNC_3(VAR_3) == 0)
            ;

  if (FUNC_2(&VAR_10->window_map, VAR_4, VAR_10->offset, (size_t)VAR_9) < 0) {
   FUNC_0(VAR_10);
   return ((void*)0);
  }
 }

 VAR_7->mmap_calls++;
 VAR_7->open_windows++;

 if (VAR_7->mapped > VAR_7->peak_mapped)
  VAR_7->peak_mapped = VAR_7->mapped;

 if (VAR_7->open_windows > VAR_7->peak_open_windows)
  VAR_7->peak_open_windows = VAR_7->open_windows;

 return VAR_10;
}
