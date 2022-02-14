
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qce_device {int result; int done_tasklet; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct qce_device *VAR_0, int VAR_1)
{
 VAR_0->result = VAR_1;
 FUNC_0(&VAR_0->done_tasklet);
}
