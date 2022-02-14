
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct device_node {int phandle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (void*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (unsigned int,unsigned long,void**) ;
 struct device_node* FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (int ,unsigned long,unsigned long) ;
 int FUNC_5 (unsigned int,unsigned long,unsigned long) ;
 int VAR_5 ;
 int * FUNC_6 (struct task_struct*) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(unsigned int VAR_7, struct task_struct *VAR_8)
{
 unsigned long VAR_9 =
  (unsigned long)(&VAR_5);
 unsigned long VAR_10 =
  (unsigned long)(&VAR_2);
 void *VAR_11 = ((void*)0);
 int VAR_12, VAR_13;

 VAR_1 = 0;
 VAR_2 = FUNC_6(VAR_8);

 if (VAR_6 == VAR_3) {







   FUNC_5(VAR_7, VAR_9, VAR_10);
 } else {
  struct device_node *VAR_14 = FUNC_2(VAR_7);

  FUNC_4(VAR_14->phandle, VAR_9, VAR_10);
 }

 for (VAR_12 = 0; VAR_12 < 50000; VAR_12++) {
  if (VAR_1)
   break;
  FUNC_7(100);
 }

 if (VAR_1) {
  VAR_13 = 0;
 } else {
  FUNC_3("Processor %d is stuck.\n", VAR_7);
  VAR_13 = -VAR_0;
 }
 VAR_2 = ((void*)0);

 FUNC_0(VAR_11);

 return VAR_13;
}
