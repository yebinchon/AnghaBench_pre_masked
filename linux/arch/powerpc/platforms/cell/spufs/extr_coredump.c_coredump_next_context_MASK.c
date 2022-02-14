
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spu_context {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct spu_context* i_ctx; } ;
struct TYPE_3__ {int files; } ;


 TYPE_2__* FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 struct file* FUNC_1 (int) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (int ,int,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static struct spu_context *FUNC_4(int *VAR_2)
{
 struct file *VAR_3;
 int VAR_4 = FUNC_3(VAR_0->files, *VAR_2, VAR_1, ((void*)0));
 if (!VAR_4)
  return ((void*)0);
 *VAR_2 = VAR_4 - 1;
 VAR_3 = FUNC_1(*VAR_2);
 return FUNC_0(FUNC_2(VAR_3))->i_ctx;
}
