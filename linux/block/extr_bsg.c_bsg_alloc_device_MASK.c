
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsg_device {int dev_list; int max_queue; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct bsg_device* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct bsg_device *FUNC_4(void)
{
 struct bsg_device *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct bsg_device), VAR_1);
 if (FUNC_3(!VAR_2))
  return ((void*)0);

 FUNC_2(&VAR_2->lock);
 VAR_2->max_queue = VAR_0;
 FUNC_0(&VAR_2->dev_list);
 return VAR_2;
}
