
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct acpi_ec {int timestamp; int data_addr; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline u8 FUNC_2(struct acpi_ec *VAR_1)
{
 u8 VAR_2 = FUNC_1(VAR_1->data_addr);

 VAR_1->timestamp = VAR_0;
 FUNC_0("EC_DATA(R) = 0x%2.2x", VAR_2);
 return VAR_2;
}
