
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct diff_filepair {int status; TYPE_2__* two; TYPE_1__* one; int score; } ;
struct TYPE_4__ {int mode; } ;
struct TYPE_3__ {int mode; } ;







__attribute__((used)) static int FUNC_0(const struct diff_queue_struct *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr; VAR_1++) {
  const struct diff_filepair *VAR_2 = VAR_0->queue[VAR_1];

  switch (VAR_2->status) {
  case 129:
  case 131:
  case 130:
  case 128:
   return 0;
  default:
   if (VAR_2->score)
    return 0;
   if (VAR_2->one->mode && VAR_2->two->mode &&
       VAR_2->one->mode != VAR_2->two->mode)
    return 0;
   break;
  }
 }
 return 1;
}
