
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*,char*,int ) ;
 scalar_t__ FUNC_1 (struct repository*,struct object_id const*,char*,struct object_id*,unsigned short*) ;
 int FUNC_2 (struct object_id const*,struct object_id const*,int*,char**,char*,int) ;
 int FUNC_3 (struct object_id const*) ;
 int FUNC_4 (struct object_id*,struct object_id const*) ;
 int FUNC_5 (struct object_id const*,struct object_id const*) ;
 int FUNC_6 (struct object_id const*,char*,struct object_id const*,struct object_id*) ;
 char* FUNC_7 (int,int) ;

void FUNC_8(struct repository *VAR_0,
  const struct object_id *VAR_1,
  const struct object_id *VAR_2,
  struct object_id *VAR_3,
  int VAR_4)
{
 char *VAR_5;
 char *VAR_6;
 int VAR_7, VAR_8;





 if (!VAR_4)
  VAR_4 = 2;

 VAR_7 = VAR_8 = FUNC_5(VAR_1, VAR_2);
 VAR_5 = FUNC_7(1, 1);
 VAR_6 = FUNC_7(1, 1);





 FUNC_2(VAR_1, VAR_2, &VAR_7, &VAR_5, "", VAR_4);





 FUNC_2(VAR_2, VAR_1, &VAR_8, &VAR_6, "", VAR_4);


 FUNC_4(VAR_3, VAR_2);

 if (VAR_7 < VAR_8) {

  unsigned short VAR_9;

  if (!*VAR_6)
   return;

  if (FUNC_1(VAR_0, VAR_2, VAR_6, VAR_3, &VAR_9))
   FUNC_0("cannot find path %s in tree %s",
       VAR_6, FUNC_3(VAR_2));
  return;
 }

 if (!*VAR_5)
  return;

 FUNC_6(VAR_1, VAR_5, VAR_2, VAR_3);
}
