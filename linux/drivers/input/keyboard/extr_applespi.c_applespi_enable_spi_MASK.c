
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct applespi_data {TYPE_1__* spi; int sien; int sist; } ;
typedef int acpi_status ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int *,unsigned long long*) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct applespi_data *VAR_1)
{
 acpi_status VAR_2;
 unsigned long long VAR_3;


 VAR_2 = FUNC_2(VAR_1->sist, ((void*)0), ((void*)0),
      &VAR_3);
 if (FUNC_1(VAR_2) && VAR_3)
  return 0;


 VAR_2 = FUNC_3(VAR_1->sien, ((void*)0), 1);
 if (FUNC_0(VAR_2)) {
  FUNC_5(&VAR_1->spi->dev, "SIEN failed: %s\n",
   FUNC_4(VAR_2));
  return -VAR_0;
 }







 FUNC_6(50);

 return 0;
}
