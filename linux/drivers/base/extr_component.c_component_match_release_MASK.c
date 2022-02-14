
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct component_match_array {int data; int (* release ) (struct device*,int ) ;} ;
struct component_match {unsigned int num; struct component_match_array* compare; } ;


 int FUNC_0 (struct component_match_array*) ;
 int FUNC_1 (struct device*,int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0,
 struct component_match *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num; VAR_2++) {
  struct component_match_array *VAR_3 = &VAR_1->compare[VAR_2];

  if (VAR_3->release)
   VAR_3->release(VAR_0, VAR_3->data);
 }

 FUNC_0(VAR_1->compare);
}
