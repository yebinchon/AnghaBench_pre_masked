
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct repository {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct repository*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct repository*,struct string_list*) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_5(struct repository *VAR_6, struct string_list *VAR_7, int VAR_8)
{
 int VAR_9;

 FUNC_1();
 if (!FUNC_3())
  return -1;

 if (VAR_8 & (VAR_1|VAR_2))
  VAR_4 = !!(VAR_8 & VAR_1);
 if (VAR_8 & VAR_3)
  VAR_9 = 0;
 else
  VAR_9 = FUNC_2(&VAR_5,
            FUNC_0(VAR_6),
            VAR_0);
 FUNC_4(VAR_6, VAR_7);
 return VAR_9;
}
