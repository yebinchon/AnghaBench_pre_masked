
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int denominator; int numerator; } ;
struct v4l2_frmivalenum {scalar_t__ index; scalar_t__ pixel_format; scalar_t__ width; scalar_t__ height; TYPE_2__ discrete; int type; } ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ height; } ;
struct sur40_state {TYPE_1__ pix_fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sur40_state* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
         struct v4l2_frmivalenum *VAR_6)
{
 struct sur40_state *VAR_7 = FUNC_0(VAR_4);

 if ((VAR_6->index > 0) || ((VAR_6->pixel_format != VAR_3)
  && (VAR_6->pixel_format != VAR_2))
  || (VAR_6->width != VAR_7->pix_fmt.width)
  || (VAR_6->height != VAR_7->pix_fmt.height))
  return -VAR_0;

 VAR_6->type = VAR_1;
 VAR_6->discrete.denominator = 60;
 VAR_6->discrete.numerator = 1;
 return 0;
}
