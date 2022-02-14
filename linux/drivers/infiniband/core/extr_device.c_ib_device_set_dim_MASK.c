
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_device {int use_cq_dim; } ;


 int VAR_0 ;

int FUNC_0(struct ib_device *VAR_1, u8 VAR_2)
{
 if (VAR_2 > 1)
  return -VAR_0;
 VAR_1->use_cq_dim = VAR_2;

 return 0;
}
