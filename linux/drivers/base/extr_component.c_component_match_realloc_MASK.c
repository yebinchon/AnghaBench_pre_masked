
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct component_match_array {int dummy; } ;
struct component_match {size_t alloc; struct component_match_array* compare; int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct component_match_array*) ;
 struct component_match_array* FUNC_1 (size_t,int,int ) ;
 int FUNC_2 (struct component_match_array*,struct component_match_array*,int) ;
 int FUNC_3 (int ,size_t) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2,
 struct component_match *VAR_3, size_t VAR_4)
{
 struct component_match_array *VAR_5;

 if (VAR_3->alloc == VAR_4)
  return 0;

 VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_3->compare) {
  FUNC_2(VAR_5, VAR_3->compare, sizeof(*VAR_5) *
         FUNC_3(VAR_3->num, VAR_4));
  FUNC_0(VAR_3->compare);
 }
 VAR_3->compare = VAR_5;
 VAR_3->alloc = VAR_4;

 return 0;
}
