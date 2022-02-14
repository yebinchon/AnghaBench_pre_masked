
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int file; } ;
struct rev_info {TYPE_1__ diffopt; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,unsigned long,int,int ) ;
 int FUNC_5 (struct object_id const*) ;
 char* FUNC_6 (struct object_id const*,int*,unsigned long*) ;
 int FUNC_7 (char const*,struct rev_info*) ;
 scalar_t__ FUNC_8 (char*,char*,char const**) ;

__attribute__((used)) static int FUNC_9(const struct object_id *VAR_1, struct rev_info *VAR_2)
{
 unsigned long VAR_3;
 enum object_type VAR_4;
 char *VAR_5 = FUNC_6(VAR_1, &VAR_4, &VAR_3);
 int VAR_6 = 0;

 if (!VAR_5)
  return FUNC_2(FUNC_0("could not read object %s"), FUNC_5(VAR_1));

 FUNC_1(VAR_4 == VAR_0);
 while (VAR_6 < VAR_3 && VAR_5[VAR_6] != '\n') {
  int VAR_7 = VAR_6 + 1;
  const char *VAR_8;
  while (VAR_7 < VAR_3 && VAR_5[VAR_7++] != '\n')
   ;
  if (FUNC_8(VAR_5 + VAR_6, "tagger ", &VAR_8))
   FUNC_7(VAR_8, VAR_2);
  VAR_6 = VAR_7;
 }

 if (VAR_6 < VAR_3)
  FUNC_4(VAR_5 + VAR_6, VAR_3 - VAR_6, 1, VAR_2->diffopt.file);
 FUNC_3(VAR_5);
 return 0;
}
