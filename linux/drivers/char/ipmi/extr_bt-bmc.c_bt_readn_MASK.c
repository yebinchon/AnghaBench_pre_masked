
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bt_bmc {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct bt_bmc*) ;

__attribute__((used)) static ssize_t FUNC_1(struct bt_bmc *VAR_0, u8 *VAR_1, size_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_1[VAR_3] = FUNC_0(VAR_0);
 return VAR_2;
}
