
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
 long FUNC_0 (struct device_node*,int ,int ,int ,int) ;

__attribute__((used)) static long FUNC_1(struct device_node *VAR_5, long VAR_6, long VAR_7)
{
 switch(VAR_6) {
 case 0:
  return FUNC_0(VAR_5, VAR_4,
   VAR_1, VAR_2, !VAR_7);
 case 1:
  return FUNC_0(VAR_5, VAR_4,
   VAR_1, VAR_3, !VAR_7);
 default:
  return -VAR_0;
 }
}
