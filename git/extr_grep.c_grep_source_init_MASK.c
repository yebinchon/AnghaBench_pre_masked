
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_source {int type; int * identifier; int * driver; scalar_t__ size; int * buf; void* path; void* name; } ;
typedef enum grep_source_type { ____Placeholder_grep_source_type } grep_source_type ;





 int * FUNC_0 (void const*) ;
 int * FUNC_1 (void const*) ;
 void* FUNC_2 (char const*) ;

void FUNC_3(struct grep_source *VAR_0, enum grep_source_type VAR_1,
        const char *VAR_2, const char *VAR_3,
        const void *VAR_4)
{
 VAR_0->type = VAR_1;
 VAR_0->name = FUNC_2(VAR_2);
 VAR_0->path = FUNC_2(VAR_3);
 VAR_0->buf = ((void*)0);
 VAR_0->size = 0;
 VAR_0->driver = ((void*)0);

 switch (VAR_1) {
 case 129:
  VAR_0->identifier = FUNC_1(VAR_4);
  break;
 case 128:
  VAR_0->identifier = FUNC_0(VAR_4);
  break;
 case 130:
  VAR_0->identifier = ((void*)0);
  break;
 }
}
