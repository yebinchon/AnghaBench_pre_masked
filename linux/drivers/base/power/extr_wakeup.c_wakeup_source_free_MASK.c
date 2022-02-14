
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {int name; int id; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct wakeup_source*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct wakeup_source *VAR_1)
{
 FUNC_0(&VAR_0, VAR_1->id);
 FUNC_2(VAR_1->name);
 FUNC_1(VAR_1);
}
