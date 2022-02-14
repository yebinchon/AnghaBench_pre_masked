
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int data; } ;
struct TYPE_7__ {TYPE_2__* file; TYPE_1__ map; int driver; } ;
typedef TYPE_3__ git_diff_file_content ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(git_diff_file_content *VAR_3)
{
 if ((VAR_3->file->flags & VAR_0) != 0)
  return;

 switch (FUNC_0(
  VAR_3->driver, VAR_3->map.data, VAR_3->map.len)) {
 case 0: VAR_3->file->flags |= VAR_2; break;
 case 1: VAR_3->file->flags |= VAR_1; break;
 default: break;
 }
}
