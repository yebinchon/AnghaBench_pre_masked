
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct iobus_devinfo {int* id_reg; struct resource_list id_resources; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct iobus_devinfo* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (struct resource_list*,char*,int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, device_t VAR_2)
{
        struct iobus_devinfo *VAR_3;
        struct resource_list *VAR_4;
        int VAR_5 = 0;

 VAR_3 = FUNC_2(VAR_2);
        VAR_4 = &VAR_3->id_resources;

 VAR_5 += FUNC_1(VAR_1, VAR_2);

        VAR_5 += FUNC_3(" offset 0x%x", VAR_3->id_reg[1]);
        VAR_5 += FUNC_4(VAR_4, "irq", VAR_0, "%jd");

        VAR_5 += FUNC_0(VAR_1, VAR_2);

        return (VAR_5);
}
