
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipfw_sopt_handler {int handler; int version; int opcode; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct ipfw_sopt_handler* VAR_2 ;
 int VAR_3 ;
 struct ipfw_sopt_handler* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct ipfw_sopt_handler*,int ) ;
 int FUNC_4 (struct ipfw_sopt_handler*,struct ipfw_sopt_handler*,size_t) ;

int
FUNC_5(struct ipfw_sopt_handler *VAR_4, size_t VAR_5)
{
 size_t VAR_6;
 struct ipfw_sopt_handler *VAR_7, *VAR_8;
 int VAR_9;

 FUNC_0();

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_7 = &VAR_4[VAR_9];
  VAR_8 = FUNC_2(VAR_7->opcode, VAR_7->version, VAR_7->handler);
  if (VAR_8 == ((void*)0))
   continue;

  VAR_6 = (VAR_2 + VAR_3 - (VAR_8 + 1)) * sizeof(*VAR_8);
  FUNC_4(VAR_8, VAR_8 + 1, VAR_6);
  VAR_3--;
 }

 if (VAR_3 == 0) {
  if (VAR_2 != ((void*)0))
   FUNC_3(VAR_2, VAR_0);
  VAR_2 = ((void*)0);
 }

 VAR_1++;

 FUNC_1();

 return (0);
}
