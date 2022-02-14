
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_array {int dummy; } ;
struct child_process {int out; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct child_process*,struct object_array*,int *) ;
 scalar_t__ FUNC_2 (struct child_process*) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct object_array *VAR_2)
{
 struct child_process VAR_3 = VAR_0;
 char VAR_4[1];
 int VAR_5;

 if (FUNC_1(&VAR_3, VAR_2, ((void*)0)) < 0)
  return 1;





 VAR_5 = FUNC_3(VAR_3.out, VAR_4, 1);
 if (VAR_5)
  goto error;
 FUNC_0(VAR_3.out);
 VAR_3.out = -1;






 if (FUNC_2(&VAR_3))
  goto error;


 return 0;

error:
 FUNC_4(VAR_1);
 if (VAR_3.out >= 0)
  FUNC_0(VAR_3.out);
 return 1;
}
