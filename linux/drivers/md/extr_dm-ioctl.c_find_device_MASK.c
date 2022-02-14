
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct hash_cell {struct mapped_device* md; } ;
struct dm_ioctl {int dummy; } ;


 struct hash_cell* FUNC_0 (struct dm_ioctl*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct mapped_device *FUNC_3(struct dm_ioctl *VAR_1)
{
 struct hash_cell *VAR_2;
 struct mapped_device *VAR_3 = ((void*)0);

 FUNC_1(&VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  VAR_3 = VAR_2->md;
 FUNC_2(&VAR_0);

 return VAR_3;
}
