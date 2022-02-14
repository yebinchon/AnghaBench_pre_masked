
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct hsi_msg {int link; } ;
struct hsc_channel {int lock; } ;


 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct hsc_channel *VAR_0, struct hsi_msg *VAR_1,
       struct list_head *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 FUNC_0(&VAR_1->link, VAR_2);
 FUNC_2(&VAR_0->lock, VAR_3);
}
