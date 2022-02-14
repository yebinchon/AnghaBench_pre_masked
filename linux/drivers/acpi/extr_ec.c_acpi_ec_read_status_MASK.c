
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct acpi_ec {int command_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int,int,int,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline u8 FUNC_2(struct acpi_ec *VAR_5)
{
 u8 VAR_6 = FUNC_1(VAR_5->command_addr);

 FUNC_0("EC_SC(R) = 0x%2.2x "
     "SCI_EVT=%d BURST=%d CMD=%d IBF=%d OBF=%d",
     VAR_6,
     !!(VAR_6 & VAR_4),
     !!(VAR_6 & VAR_0),
     !!(VAR_6 & VAR_1),
     !!(VAR_6 & VAR_2),
     !!(VAR_6 & VAR_3));
 return VAR_6;
}
