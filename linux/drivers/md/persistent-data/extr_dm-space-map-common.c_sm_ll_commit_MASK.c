
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_disk {int bitmap_index_changed; int (* commit ) (struct ll_disk*) ;} ;


 int FUNC_0 (struct ll_disk*) ;

int FUNC_1(struct ll_disk *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->bitmap_index_changed) {
  VAR_1 = VAR_0->commit(VAR_0);
  if (!VAR_1)
   VAR_0->bitmap_index_changed = 0;
 }

 return VAR_1;
}
