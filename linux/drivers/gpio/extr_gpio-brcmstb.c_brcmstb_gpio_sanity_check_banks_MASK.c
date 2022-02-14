
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (struct device_node*,char*) ;
 int FUNC_2 (struct resource*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2,
  struct device_node *VAR_3, struct resource *VAR_4)
{
 int VAR_5 = FUNC_2(VAR_4) / VAR_1;
 int VAR_6 =
  FUNC_1(VAR_3, "brcm,gpio-bank-widths");

 if (VAR_5 != VAR_6) {
  FUNC_0(VAR_2, "Mismatch in banks: res had %d, bank-widths had %d\n",
    VAR_5, VAR_6);
  return -VAR_0;
 } else {
  return 0;
 }
}
