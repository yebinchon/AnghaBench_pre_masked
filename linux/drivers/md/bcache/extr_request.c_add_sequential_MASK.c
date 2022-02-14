
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ sequential_io; int sequential_io_avg; } ;


 int FUNC_0 (int ,scalar_t__,int,int ) ;

__attribute__((used)) static void FUNC_1(struct task_struct *VAR_0)
{
 FUNC_0(VAR_0->sequential_io_avg,
   VAR_0->sequential_io, 8, 0);

 VAR_0->sequential_io = 0;
}
