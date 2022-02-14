
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {struct block_device* bd_contains; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct block_device *VAR_2, unsigned int VAR_3)
{
 if (VAR_2 && VAR_2 == VAR_2->bd_contains)
  return 0;

 if (FUNC_0(VAR_0))
  return 0;

 return -VAR_1;
}
