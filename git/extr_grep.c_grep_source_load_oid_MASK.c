
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_source {int identifier; int name; int buf; int size; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ,int*,int *) ;

__attribute__((used)) static int FUNC_6(struct grep_source *VAR_0)
{
 enum object_type VAR_1;

 FUNC_2();
 VAR_0->buf = FUNC_5(VAR_0->identifier, &VAR_1, &VAR_0->size);
 FUNC_3();

 if (!VAR_0->buf)
  return FUNC_1(FUNC_0("'%s': unable to read %s"),
        VAR_0->name,
        FUNC_4(VAR_0->identifier));
 return 0;
}
