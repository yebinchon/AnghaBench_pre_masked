
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entropy_store {int lock; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct entropy_store*,void const*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static void FUNC_4(struct entropy_store *VAR_1, const void *VAR_2,
      int VAR_3)
{
 unsigned long VAR_4;

 FUNC_3(VAR_1->name, VAR_3, VAR_0);
 FUNC_1(&VAR_1->lock, VAR_4);
 FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_1->lock, VAR_4);
}
