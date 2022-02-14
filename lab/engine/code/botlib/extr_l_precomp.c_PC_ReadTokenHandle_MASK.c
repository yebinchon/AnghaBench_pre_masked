
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int floatvalue; int intvalue; int subtype; int type; int string; } ;
typedef TYPE_1__ token_t ;
struct TYPE_6__ {int string; int type; int floatvalue; int intvalue; int subtype; } ;
typedef TYPE_2__ pc_token_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(int VAR_3, pc_token_t *VAR_4)
{
 token_t VAR_5;
 int VAR_6;

 if (VAR_3 < 1 || VAR_3 >= VAR_0)
  return 0;
 if (!VAR_2[VAR_3])
  return 0;

 VAR_6 = FUNC_0(VAR_2[VAR_3], &VAR_5);
 FUNC_2(VAR_4->string, VAR_5.string);
 VAR_4->type = VAR_5.type;
 VAR_4->subtype = VAR_5.subtype;
 VAR_4->intvalue = VAR_5.intvalue;
 VAR_4->floatvalue = VAR_5.floatvalue;
 if (VAR_4->type == VAR_1)
  FUNC_1(VAR_4->string);
 return VAR_6;
}
