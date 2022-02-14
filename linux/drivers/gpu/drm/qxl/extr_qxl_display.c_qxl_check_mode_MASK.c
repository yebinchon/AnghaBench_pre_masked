
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_device {unsigned int vram_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct qxl_device *VAR_2,
     unsigned int VAR_3,
     unsigned int VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;

 if (FUNC_0(VAR_3, 4u, &VAR_5))
  return -VAR_0;
 if (FUNC_0(VAR_5, VAR_4, &VAR_6))
  return -VAR_0;
 if (VAR_6 > VAR_2->vram_size)
  return -VAR_1;
 return 0;
}
