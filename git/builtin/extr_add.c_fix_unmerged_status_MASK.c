
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct update_callback_data {int flags; } ;
struct diff_filepair {scalar_t__ status; TYPE_1__* two; } ;
struct TYPE_2__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct diff_filepair *VAR_4,
          struct update_callback_data *VAR_5)
{
 if (VAR_4->status != VAR_3)
  return VAR_4->status;
 if (!(VAR_5->flags & VAR_0) && !VAR_4->two->mode)




  return VAR_1;
 else






  return VAR_2;
}
