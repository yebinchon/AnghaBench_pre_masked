
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int definehash; scalar_t__ skip; int * indentstack; int * defines; int * tokens; TYPE_2__* scriptstack; int filename; } ;
typedef TYPE_1__ source_t ;
struct TYPE_8__ {int * next; } ;
typedef TYPE_2__ script_t ;
typedef int define_t ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char const*,int) ;

source_t *FUNC_7(const char *VAR_1)
{
 source_t *VAR_2;
 script_t *VAR_3;

 FUNC_5();

 VAR_3 = FUNC_3(VAR_1);
 if (!VAR_3) return ((void*)0);

 VAR_3->next = ((void*)0);

 VAR_2 = (source_t *) FUNC_2(sizeof(source_t));
 FUNC_0(VAR_2, 0, sizeof(source_t));

 FUNC_6(VAR_2->filename, VAR_1, sizeof(VAR_2->filename));
 VAR_2->scriptstack = VAR_3;
 VAR_2->tokens = ((void*)0);
 VAR_2->defines = ((void*)0);
 VAR_2->indentstack = ((void*)0);
 VAR_2->skip = 0;




 FUNC_4(VAR_2);
 return VAR_2;
}
