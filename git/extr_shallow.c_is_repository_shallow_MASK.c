
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* parsed_objects; } ;
struct object_id {int dummy; } ;
typedef int buf ;
struct TYPE_2__ {char* alternate_shallow_file; int is_shallow; int shallow_stat; } ;
typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char*,struct object_id*) ;
 char* FUNC_6 (struct repository*) ;
 int FUNC_7 (struct repository*,struct object_id*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

int FUNC_10(struct repository *VAR_0)
{







 FILE *VAR_1;
 char VAR_2[1024];
 const char *VAR_3 = VAR_0->parsed_objects->alternate_shallow_file;

 if (VAR_0->parsed_objects->is_shallow >= 0)
  return VAR_0->parsed_objects->is_shallow;

 if (!VAR_3)
  VAR_3 = FUNC_6(VAR_0);





 if (!*VAR_3 || (VAR_1 = FUNC_4(VAR_3, "r")) == ((void*)0)) {
  FUNC_8(VAR_0->parsed_objects->shallow_stat);
  VAR_0->parsed_objects->is_shallow = 0;
  return VAR_0->parsed_objects->is_shallow;
 }
 FUNC_9(VAR_0->parsed_objects->shallow_stat, FUNC_3(VAR_1));
 VAR_0->parsed_objects->is_shallow = 1;

 while (FUNC_2(VAR_2, sizeof(VAR_2), VAR_1)) {
  struct object_id VAR_4;
  if (FUNC_5(VAR_2, &VAR_4))
   FUNC_0("bad shallow line: %s", VAR_2);
  FUNC_7(VAR_0, &VAR_4);
 }
 FUNC_1(VAR_1);
 return VAR_0->parsed_objects->is_shallow;
}
