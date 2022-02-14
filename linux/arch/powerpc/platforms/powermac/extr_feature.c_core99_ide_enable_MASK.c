
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_0 (struct device_node*,long) ;
 int VAR_5 ;
 long FUNC_1 (struct device_node*,int ,int ,int ,long) ;

__attribute__((used)) static long
FUNC_2(struct device_node *VAR_6, long VAR_7, long VAR_8)
{



 switch(VAR_7) {
     case 0:
  return FUNC_1(VAR_6, VAR_5,
   VAR_1, VAR_2, VAR_8);
     case 1:
  return FUNC_1(VAR_6, VAR_5,
   VAR_1, VAR_3, VAR_8);
     case 2:
  return FUNC_1(VAR_6, VAR_5,
   VAR_1, VAR_4, VAR_8);
     case 3:
  return FUNC_0(VAR_6, VAR_8);
     default:
  return -VAR_0;
 }
}
