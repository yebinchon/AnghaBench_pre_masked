
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_list {struct pack_list* next; } ;


 int FUNC_0 (struct pack_list**,size_t,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct pack_list**) ;
 size_t FUNC_2 (struct pack_list*) ;
 struct pack_list** FUNC_3 (size_t,int) ;

__attribute__((used)) static void FUNC_4(struct pack_list **VAR_1)
{
 struct pack_list **VAR_2, *VAR_3;
 int VAR_4;
 size_t VAR_5 = FUNC_2(*VAR_1);

 if (VAR_5 < 2)
  return;


 VAR_2 = FUNC_3(VAR_5, sizeof(struct pack_list *));
 for (VAR_5 = 0, VAR_3 = *VAR_1; VAR_3; VAR_3 = VAR_3->next)
  VAR_2[VAR_5++] = VAR_3;

 FUNC_0(VAR_2, VAR_5, VAR_0);


 for (VAR_4 = 0; VAR_4 < VAR_5 - 1; VAR_4++)
  VAR_2[VAR_4]->next = VAR_2[VAR_4 + 1];
 VAR_2[VAR_5 - 1]->next = ((void*)0);
 *VAR_1 = VAR_2[0];

 FUNC_1(VAR_2);
}
