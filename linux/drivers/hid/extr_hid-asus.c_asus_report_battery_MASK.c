
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct asus_drvdata {int battery_in_query; int battery; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct asus_drvdata *VAR_1, u8 *VAR_2, int VAR_3)
{

 if ((VAR_1->battery_in_query == 0) &&
    (VAR_3 == VAR_0))
  FUNC_0(VAR_1->battery);

 return 0;
}
