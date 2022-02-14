
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct sur40_state {int pix_fmt; } ;
struct file {int dummy; } ;


 struct sur40_state* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
       struct v4l2_format *VAR_2)
{
 struct sur40_state *VAR_3 = FUNC_0(VAR_0);

 VAR_2->fmt.pix = VAR_3->pix_fmt;
 return 0;
}
