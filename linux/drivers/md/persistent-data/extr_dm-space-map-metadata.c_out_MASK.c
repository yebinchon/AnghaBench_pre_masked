
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_metadata {int recursion_count; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct sm_metadata*) ;

__attribute__((used)) static int FUNC_2(struct sm_metadata *VAR_1)
{
 int VAR_2 = 0;




 if (!VAR_1->recursion_count) {
  FUNC_0("lost track of recursion depth");
  return -VAR_0;
 }

 if (VAR_1->recursion_count == 1)
  VAR_2 = FUNC_1(VAR_1);

 VAR_1->recursion_count--;

 return VAR_2;
}
