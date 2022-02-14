
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct hsc_channel {int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct list_head*,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct hsc_channel *VAR_1, struct list_head *VAR_2)
{
 unsigned long VAR_3;
 FUNC_0(VAR_0);

 FUNC_3(&VAR_1->lock, VAR_3);
 FUNC_2(VAR_2, &VAR_0);
 FUNC_4(&VAR_1->lock, VAR_3);

 FUNC_1(&VAR_0);
}
