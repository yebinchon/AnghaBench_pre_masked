
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int dummy; } ;
struct block_device {int bd_mutex; struct block_device* bd_contains; struct gendisk* bd_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gendisk*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct gendisk*,struct block_device*) ;

int FUNC_4(struct block_device *VAR_3)
{
 struct gendisk *VAR_4 = VAR_3->bd_disk;

 if (!FUNC_1(VAR_4) || VAR_3 != VAR_3->bd_contains)
  return -VAR_2;
 if (!FUNC_0(VAR_0))
  return -VAR_1;

 FUNC_2(&VAR_3->bd_mutex);

 return FUNC_3(VAR_4, VAR_3);
}
