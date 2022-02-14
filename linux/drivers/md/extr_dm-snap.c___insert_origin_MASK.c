
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct origin {int hash_list; int bdev; } ;
struct list_head {int dummy; } ;


 struct list_head* VAR_0 ;
 int FUNC_0 (int *,struct list_head*) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct origin *VAR_1)
{
 struct list_head *VAR_2 = &VAR_0[FUNC_1(VAR_1->bdev)];
 FUNC_0(&VAR_1->hash_list, VAR_2);
}
