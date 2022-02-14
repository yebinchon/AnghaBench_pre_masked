
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cma_device {int device; int * default_roce_tos; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int ) ;

int FUNC_2(struct cma_device *VAR_1, unsigned int VAR_2,
        u8 VAR_3)
{
 if (!FUNC_0(VAR_1->device, VAR_2))
  return -VAR_0;

 VAR_1->default_roce_tos[VAR_2 - FUNC_1(VAR_1->device)] =
   VAR_3;

 return 0;
}
