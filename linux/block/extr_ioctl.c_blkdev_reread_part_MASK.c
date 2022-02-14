
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int bd_mutex; } ;


 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct block_device *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->bd_mutex);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->bd_mutex);

 return VAR_1;
}
