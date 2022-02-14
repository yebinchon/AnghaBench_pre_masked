
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int string; } ;
typedef TYPE_1__ token_t ;
typedef int script_t ;
struct TYPE_8__ {void* value; void* key; } ;
typedef TYPE_2__ epair_t ;


 int FUNC_0 (char*,int ) ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (int ) ;

epair_t *FUNC_8(script_t *VAR_2)
{
 epair_t *VAR_3;
 token_t VAR_4;

 VAR_3 = FUNC_1(sizeof(epair_t));
 FUNC_6 (VAR_3, 0, sizeof(epair_t));

 FUNC_2(VAR_2, &VAR_4);
 FUNC_3(VAR_4.string);
 if (FUNC_7(VAR_4.string) >= VAR_0-1)
  FUNC_0 ("ParseEpair: token %s too long", VAR_4.string);
 VAR_3->key = FUNC_5(VAR_4.string);
 FUNC_2(VAR_2, &VAR_4);
 FUNC_3(VAR_4.string);
 if (FUNC_7(VAR_4.string) >= VAR_1-1)
  FUNC_0 ("ParseEpair: token %s too long", VAR_4.string);
 VAR_3->value = FUNC_5(VAR_4.string);


 FUNC_4(VAR_3->key);
 FUNC_4(VAR_3->value);

 return VAR_3;
}
