
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_1__ symbol_t ;


 int FUNC_0 (TYPE_1__**) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__** FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__**,int,int,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3 ()
{
  int VAR_3, VAR_4;
  symbol_t *VAR_5;
  symbol_t **VAR_6;

  if(!VAR_1)
   return;


  for (VAR_4 = 0, VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next, VAR_4++) ;

  VAR_6 = FUNC_1(VAR_4 * sizeof(symbol_t*));
  for (VAR_3 = 0, VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next, VAR_3++)
    {
      VAR_6[VAR_3] = VAR_5;
    }

  FUNC_2(VAR_6, VAR_4, sizeof(symbol_t*), VAR_2);

  VAR_5 = VAR_1 = VAR_6[0];
  for (VAR_3 = 1; VAR_3 < VAR_4; VAR_3++)
    {
      VAR_5->next = VAR_6[VAR_3];
      VAR_5 = VAR_5->next;
    }
  VAR_0 = VAR_5;
  VAR_5->next = 0;

  for (VAR_3 = 0, VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next, VAR_3++) ;

  FUNC_0(VAR_6);
}
