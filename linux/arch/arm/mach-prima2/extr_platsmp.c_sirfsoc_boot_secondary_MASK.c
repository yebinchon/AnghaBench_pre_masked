
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 () ;
 int VAR_9 ;
 int FUNC_4 () ;
 struct device_node* FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (struct device_node*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int*) ;
 scalar_t__ FUNC_11 (int,unsigned long) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(unsigned int VAR_12, struct task_struct *VAR_13)
{
 unsigned long VAR_14;
 struct device_node *VAR_15;

 VAR_15 = FUNC_5(((void*)0), VAR_8);
 if (!VAR_15)
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_15, 0);
 if (!VAR_7)
  return -VAR_1;
 FUNC_1(FUNC_0(VAR_11),
  VAR_7 + 0x2bc);


 FUNC_1(0x3CAF5D62,
  VAR_7 + 0x2b8);


 FUNC_4();

 FUNC_8(&VAR_6);
 VAR_10 = FUNC_2(VAR_12);
 FUNC_10(&VAR_10);





 FUNC_3();

 VAR_14 = VAR_9 + (1 * VAR_3);
 while (FUNC_11(VAR_9, VAR_14)) {
  FUNC_7();
  if (VAR_10 == -1)
   break;

  FUNC_12(10);
 }





 FUNC_9(&VAR_6);

 return VAR_10 != -1 ? -VAR_2 : 0;
}
