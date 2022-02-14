
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_metadata {int lock; scalar_t__ fail_io; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_clone_metadata*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct dm_clone_metadata *VAR_1)
{
 int VAR_2 = -VAR_0;

 FUNC_1(&VAR_1->lock);

 if (VAR_1->fail_io)
  goto out;

 VAR_2 = FUNC_0(VAR_1);
out:
 FUNC_2(&VAR_1->lock);

 return VAR_2;
}
