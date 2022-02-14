
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct swdevt {struct g_consumer* sw_id; } ;
struct g_consumer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct g_consumer*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct thread *VAR_3, struct swdevt *VAR_4)
{
 struct g_consumer *VAR_5;

 FUNC_1(&VAR_1);
 VAR_5 = VAR_4->sw_id;
 VAR_4->sw_id = ((void*)0);
 FUNC_2(&VAR_1);






 if (VAR_5 != ((void*)0))
  FUNC_0(VAR_2, VAR_5, VAR_0, ((void*)0));
}
