
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_context {int flags; } ;
struct file {int * f_op; } ;
struct TYPE_2__ {struct spu_context* i_ctx; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct file*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const void *VAR_2, struct file *VAR_3, unsigned VAR_4)
{
 struct spu_context *VAR_5;
 if (VAR_3->f_op != &VAR_1)
  return 0;
 VAR_5 = FUNC_0(FUNC_1(VAR_3))->i_ctx;
 if (VAR_5->flags & VAR_0)
  return 0;
 return VAR_4 + 1;
}
