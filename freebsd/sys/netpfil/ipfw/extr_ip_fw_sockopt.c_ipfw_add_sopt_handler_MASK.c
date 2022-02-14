
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipfw_sopt_handler {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ipfw_sopt_handler* VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (struct ipfw_sopt_handler*,int ) ;
 struct ipfw_sopt_handler* FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct ipfw_sopt_handler*,struct ipfw_sopt_handler*,size_t) ;
 int FUNC_5 (struct ipfw_sopt_handler*,size_t,int,int ) ;

void
FUNC_6(struct ipfw_sopt_handler *VAR_7, size_t VAR_8)
{
 size_t VAR_9;
 struct ipfw_sopt_handler *VAR_10;

 FUNC_0();

 for (;;) {
  VAR_9 = VAR_6 + VAR_8;
  FUNC_1();
  VAR_10 = FUNC_3(sizeof(*VAR_7) * VAR_9, VAR_0, VAR_1 | VAR_2);
  FUNC_0();
  if (VAR_6 + VAR_8 <= VAR_9)
   break;


  FUNC_2(VAR_10, VAR_0);
 }


 VAR_9 = VAR_6 + VAR_8;
 FUNC_4(VAR_10, VAR_5, VAR_6 * sizeof(*VAR_7));
 FUNC_4(&VAR_10[VAR_6], VAR_7, VAR_8 * sizeof(*VAR_7));
 FUNC_5(VAR_10, VAR_9, sizeof(*VAR_7), VAR_3);

 if (VAR_5 != ((void*)0))
  FUNC_2(VAR_5, VAR_0);
 VAR_5 = VAR_10;
 VAR_6 = VAR_9;
 VAR_4++;

 FUNC_1();
}
