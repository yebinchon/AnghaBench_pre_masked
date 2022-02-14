
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_cs_parser {TYPE_1__* rdev; } ;
struct TYPE_2__ {int family; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct radeon_cs_parser *VAR_2,
         unsigned VAR_3)
{
 switch (VAR_3) {
 case 0:
 case 1:

  return 0;

 case 3:
 case 4:

  if (VAR_2->rdev->family >= VAR_0)
   return 0;


 default:
  FUNC_0("UVD codec not supported by hardware %d!\n",
     VAR_3);
  return -VAR_1;
 }
}
