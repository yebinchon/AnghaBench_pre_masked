
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct master {int dev; struct component_match* match; } ;
struct component_match_array {int duplicate; struct component* component; } ;
struct component_match {size_t num; struct component_match_array* compare; } ;
struct component {struct master* master; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t,...) ;
 int FUNC_1 (int ) ;
 struct component* FUNC_2 (struct master*,struct component_match_array*) ;

__attribute__((used)) static int FUNC_3(struct master *VAR_1)
{
 struct component_match *VAR_2 = VAR_1->match;
 size_t VAR_3;
 int VAR_4 = 0;





 for (VAR_3 = 0; VAR_3 < VAR_2->num; VAR_3++) {
  struct component_match_array *VAR_5 = &VAR_2->compare[VAR_3];
  struct component *VAR_6;

  FUNC_0(VAR_1->dev, "Looking for component %zu\n", VAR_3);

  if (VAR_2->compare[VAR_3].component)
   continue;

  VAR_6 = FUNC_2(VAR_1, VAR_5);
  if (!VAR_6) {
   VAR_4 = -VAR_0;
   break;
  }

  FUNC_0(VAR_1->dev, "found component %s, duplicate %u\n", FUNC_1(VAR_6->dev), !!VAR_6->master);


  VAR_2->compare[VAR_3].duplicate = !!VAR_6->master;
  VAR_2->compare[VAR_3].component = VAR_6;
  VAR_6->master = VAR_1;
 }
 return VAR_4;
}
