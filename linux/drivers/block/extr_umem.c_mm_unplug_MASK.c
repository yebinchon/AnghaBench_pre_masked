
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardinfo {int lock; } ;
struct blk_plug_cb {struct cardinfo* data; } ;


 int FUNC_0 (struct cardinfo*) ;
 int FUNC_1 (struct blk_plug_cb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct blk_plug_cb *VAR_0, bool VAR_1)
{
 struct cardinfo *VAR_2 = VAR_0->data;

 FUNC_2(&VAR_2->lock);
 FUNC_0(VAR_2);
 FUNC_3(&VAR_2->lock);
 FUNC_1(VAR_0);
}
