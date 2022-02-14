
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct io_context* io_context; } ;
struct io_context {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct task_struct*,int ,int) ;
 int FUNC_1 (struct io_context*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct io_context*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;

struct io_context *FUNC_7(struct task_struct *VAR_0,
           gfp_t VAR_1, int VAR_2)
{
 struct io_context *VAR_3;

 FUNC_4(FUNC_2(VAR_1));

 do {
  FUNC_5(VAR_0);
  VAR_3 = VAR_0->io_context;
  if (FUNC_3(VAR_3)) {
   FUNC_1(VAR_3);
   FUNC_6(VAR_0);
   return VAR_3;
  }
  FUNC_6(VAR_0);
 } while (!FUNC_0(VAR_0, VAR_1, VAR_2));

 return ((void*)0);
}
