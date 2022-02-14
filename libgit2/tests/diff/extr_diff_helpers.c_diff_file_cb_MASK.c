
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int path; } ;
struct TYPE_7__ {size_t status; int flags; TYPE_1__ old_file; } ;
typedef TYPE_2__ git_diff_delta ;
struct TYPE_8__ {size_t files; int* file_status; int files_binary; int * statuses; int * names; scalar_t__ debug; } ;
typedef TYPE_3__ diff_expects ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_2__ const*,float) ;
 int VAR_2 ;

int FUNC_4(
 const git_diff_delta *VAR_3,
 float VAR_4,
 void *VAR_5)
{
 diff_expects *VAR_6 = VAR_5;

 if (VAR_6->debug)
  FUNC_3(VAR_2, VAR_3, VAR_4);

 if (VAR_6->names)
  FUNC_2(VAR_6->names[VAR_6->files], VAR_3->old_file.path);
 if (VAR_6->statuses)
  FUNC_1(VAR_6->statuses[VAR_6->files], (int)VAR_3->status);

 VAR_6->files++;

 if ((VAR_3->flags & VAR_1) != 0)
  VAR_6->files_binary++;

 FUNC_0(VAR_3->status <= VAR_0);

 VAR_6->file_status[VAR_3->status] += 1;

 return 0;
}
