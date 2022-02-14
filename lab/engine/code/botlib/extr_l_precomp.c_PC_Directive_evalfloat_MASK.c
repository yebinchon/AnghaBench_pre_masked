
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int subtype; int type; int string; scalar_t__ linescrossed; int endwhitespace_p; int whitespace_p; int line; } ;
typedef TYPE_2__ token_t ;
struct TYPE_11__ {TYPE_1__* scriptstack; } ;
typedef TYPE_3__ source_t ;
struct TYPE_9__ {int script_p; int line; } ;


 int FUNC_0 (TYPE_3__*,int *,float*,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 double FUNC_3 (float) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,char*,double) ;

int FUNC_5(source_t *VAR_6)
{
 float VAR_7;
 token_t VAR_8;

 if (!FUNC_0(VAR_6, ((void*)0), &VAR_7, VAR_4)) return VAR_4;
 VAR_8.line = VAR_6->scriptstack->line;
 VAR_8.whitespace_p = VAR_6->scriptstack->script_p;
 VAR_8.endwhitespace_p = VAR_6->scriptstack->script_p;
 VAR_8.linescrossed = 0;
 FUNC_4(VAR_8.string, "%1.2f", FUNC_3(VAR_7));
 VAR_8.type = VAR_3;
 VAR_8.subtype = VAR_1|VAR_2|VAR_0;
 FUNC_1(VAR_6, &VAR_8);
 if (VAR_7 < 0) FUNC_2(VAR_6);
 return VAR_5;
}
