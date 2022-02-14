
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ type; float string; struct TYPE_14__* next; } ;
typedef TYPE_1__ token_t ;
struct TYPE_15__ {int defines; int definehash; } ;
typedef TYPE_2__ source_t ;
typedef int define_t ;


 int FUNC_0 (char*,...) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,long*,float*,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int *) ;
 int * FUNC_4 (int ,float) ;
 int * FUNC_5 (int ,float) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (float,char*) ;

int FUNC_10(source_t *VAR_5, signed long int *VAR_6,
            float *VAR_7, int VAR_8)
{
 token_t VAR_9, *VAR_10, *VAR_11;
 token_t *VAR_12, *VAR_13;
 define_t *VAR_14;
 int VAR_15 = VAR_3;

 if (VAR_6) *VAR_6 = 0;
 if (VAR_7) *VAR_7 = 0;

 if (!FUNC_7(VAR_5, &VAR_9))
 {
  FUNC_8(VAR_5, "no value after #if/#elif");
  return VAR_3;
 }
 VAR_10 = ((void*)0);
 VAR_11 = ((void*)0);
 do
 {

  if (VAR_9.type == VAR_0)
  {
   if (VAR_15)
   {
    VAR_15 = VAR_3;
    VAR_12 = FUNC_1(&VAR_9);
    VAR_12->next = ((void*)0);
    if (VAR_11) VAR_11->next = VAR_12;
    else VAR_10 = VAR_12;
    VAR_11 = VAR_12;
   }
   else if (!FUNC_9(VAR_9.string, "defined"))
   {
    VAR_15 = VAR_4;
    VAR_12 = FUNC_1(&VAR_9);
    VAR_12->next = ((void*)0);
    if (VAR_11) VAR_11->next = VAR_12;
    else VAR_10 = VAR_12;
    VAR_11 = VAR_12;
   }
   else
   {




    VAR_14 = FUNC_4(VAR_5->defines, VAR_9.string);

    if (!VAR_14)
    {
     FUNC_8(VAR_5, "can't evaluate %s, not defined", VAR_9.string);
     return VAR_3;
    }
    if (!FUNC_3(VAR_5, &VAR_9, VAR_14)) return VAR_3;
   }
  }

  else if (VAR_9.type == VAR_1 || VAR_9.type == VAR_2)
  {
   VAR_12 = FUNC_1(&VAR_9);
   VAR_12->next = ((void*)0);
   if (VAR_11) VAR_11->next = VAR_12;
   else VAR_10 = VAR_12;
   VAR_11 = VAR_12;
  }
  else
  {
   FUNC_8(VAR_5, "can't evaluate %s", VAR_9.string);
   return VAR_3;
  }
 } while(FUNC_7(VAR_5, &VAR_9));

 if (!FUNC_2(VAR_5, VAR_10, VAR_6, VAR_7, VAR_8)) return VAR_3;




 for (VAR_12 = VAR_10; VAR_12; VAR_12 = VAR_13)
 {



  VAR_13 = VAR_12->next;
  FUNC_6(VAR_12);
 }





 return VAR_4;
}
