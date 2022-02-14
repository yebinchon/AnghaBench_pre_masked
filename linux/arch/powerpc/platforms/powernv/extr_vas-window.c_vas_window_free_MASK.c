
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vas_window {int winid; struct vas_instance* vinst; } ;
struct vas_instance {int ida; } ;


 int FUNC_0 (struct vas_window*) ;
 int FUNC_1 (struct vas_window*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct vas_window*) ;

__attribute__((used)) static void FUNC_4(struct vas_window *VAR_0)
{
 int VAR_1 = VAR_0->winid;
 struct vas_instance *VAR_2 = VAR_0->vinst;

 FUNC_1(VAR_0);

 FUNC_3(VAR_0);

 FUNC_0(VAR_0);

 FUNC_2(&VAR_2->ida, VAR_1);
}
