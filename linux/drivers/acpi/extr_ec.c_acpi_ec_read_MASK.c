
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct transaction {int wlen; int rlen; int * rdata; int * wdata; int command; } ;
struct acpi_ec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_ec*,struct transaction*) ;

__attribute__((used)) static int FUNC_1(struct acpi_ec *VAR_1, u8 VAR_2, u8 *VAR_3)
{
 int VAR_4;
 u8 VAR_5;
 struct transaction VAR_6 = {.command = VAR_0,
    .wdata = &VAR_2, .rdata = &VAR_5,
    .wlen = 1, .rlen = 1};

 VAR_4 = FUNC_0(VAR_1, &VAR_6);
 *VAR_3 = VAR_5;
 return VAR_4;
}
