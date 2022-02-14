
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct acpi_ec {int timestamp; int command_addr; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct acpi_ec *VAR_1, u8 VAR_2)
{
 FUNC_0("EC_SC(W) = 0x%2.2x", VAR_2);
 FUNC_1(VAR_2, VAR_1->command_addr);
 VAR_1->timestamp = VAR_0;
}
