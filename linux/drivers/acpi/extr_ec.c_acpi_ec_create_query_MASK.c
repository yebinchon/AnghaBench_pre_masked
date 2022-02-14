
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct transaction {int rlen; int * rdata; int command; } ;
struct acpi_ec_query {struct transaction transaction; int work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 struct acpi_ec_query* FUNC_1 (int,int ) ;

__attribute__((used)) static struct acpi_ec_query *FUNC_2(u8 *VAR_3)
{
 struct acpi_ec_query *VAR_4;
 struct transaction *VAR_5;

 VAR_4 = FUNC_1(sizeof (struct acpi_ec_query), VAR_1);
 if (!VAR_4)
  return ((void*)0);
 FUNC_0(&VAR_4->work, VAR_2);
 VAR_5 = &VAR_4->transaction;
 VAR_5->command = VAR_0;
 VAR_5->rdata = VAR_3;
 VAR_5->rlen = 1;
 return VAR_4;
}
