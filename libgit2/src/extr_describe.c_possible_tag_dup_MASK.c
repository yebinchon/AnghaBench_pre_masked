
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct possible_tag {int * name; } ;


 int FUNC_0 (struct possible_tag*) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (struct possible_tag*) ;
 struct possible_tag* FUNC_3 (int) ;
 int FUNC_4 (struct possible_tag*,struct possible_tag*,int) ;

__attribute__((used)) static int FUNC_5(struct possible_tag **VAR_0, struct possible_tag *VAR_1)
{
 struct possible_tag *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(sizeof(struct possible_tag));
 FUNC_0(VAR_2);

 FUNC_4(VAR_2, VAR_1, sizeof(struct possible_tag));
 VAR_2->name = ((void*)0);

 if ((VAR_3 = FUNC_1(&VAR_2->name, VAR_1->name)) < 0) {
  FUNC_2(VAR_2);
  *VAR_0 = ((void*)0);
  return VAR_3;
 }

 *VAR_0 = VAR_2;
 return 0;
}
