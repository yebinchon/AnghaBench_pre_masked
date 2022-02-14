
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcb_bus {int bus_nr; int carrier; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mcb_bus*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 struct mcb_bus* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1)
{
 struct mcb_bus *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_2->carrier);
 FUNC_0(&VAR_0, VAR_2->bus_nr);
 FUNC_1(VAR_2);
}
