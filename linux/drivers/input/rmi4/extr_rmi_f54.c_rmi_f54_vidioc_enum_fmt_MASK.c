
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {scalar_t__ type; int pixelformat; scalar_t__ index; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int pixelformat; } ;
struct f54_data {TYPE_1__ format; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct f54_data* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
       struct v4l2_fmtdesc *VAR_4)
{
 struct f54_data *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 if (VAR_4->index)
  return -VAR_0;

 VAR_4->pixelformat = VAR_5->format.pixelformat;

 return 0;
}
