
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct argv_array {int argv; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct argv_array*) ;
 int FUNC_1 (struct argv_array*,int ) ;
 int FUNC_2 (struct argv_array*,char*,char*,int *) ;
 int FUNC_3 (struct object_id const*) ;
 int FUNC_4 (struct object_id const*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(const struct object_id *VAR_2)
{
 int VAR_3;
 struct argv_array VAR_4 = VAR_0;

 FUNC_2(&VAR_4, "reset", "--merge", ((void*)0));

 if (!FUNC_3(VAR_2))
  FUNC_1(&VAR_4, FUNC_4(VAR_2));

 VAR_3 = FUNC_5(VAR_4.argv, VAR_1);
 FUNC_0(&VAR_4);

 return VAR_3;
}
