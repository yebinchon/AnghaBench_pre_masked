
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edd_device {int kobj; } ;
struct edd_attribute {int attr; scalar_t__ (* test ) (struct edd_device*) ;} ;


 struct edd_attribute** VAR_0 ;
 int FUNC_0 (struct edd_device*) ;
 scalar_t__ FUNC_1 (struct edd_device*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct edd_device * VAR_1)
{
 struct edd_attribute * VAR_2;
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; (VAR_2 = VAR_0[VAR_4]) && !VAR_3; VAR_4++) {
  if (!VAR_2->test ||
      (VAR_2->test && VAR_2->test(VAR_1)))
   VAR_3 = FUNC_2(&VAR_1->kobj,&VAR_2->attr);
 }

 if (!VAR_3) {
  FUNC_0(VAR_1);
 }
}
