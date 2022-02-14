
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct csr_space {scalar_t__ length; scalar_t__ base; int member_1; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,struct csr_space*) ;
 int VAR_3 ;

__attribute__((used)) static acpi_status FUNC_1(acpi_handle VAR_4, u64 *VAR_5, u64 *VAR_6)
{
 struct csr_space VAR_7 = { 0, 0 };

 FUNC_0(VAR_4, VAR_2, VAR_3, &VAR_7);
 if (!VAR_7.length)
  return VAR_0;

 *VAR_5 = VAR_7.base;
 *VAR_6 = VAR_7.length;
 return VAR_1;
}
