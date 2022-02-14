
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__*,int *) ;

__attribute__((used)) static acpi_status
FUNC_1(u64 VAR_5, u32 VAR_6, u64 *VAR_7)
{
 u64 VAR_8;
 u64 VAR_9;



 *VAR_7 = 0;
 if (!VAR_5 || !VAR_6) {
  return (VAR_3);
 }
 FUNC_0(VAR_1, VAR_6, &VAR_9, ((void*)0));
 if (VAR_5 > VAR_9) {
  return (VAR_2);
 }

 VAR_8 = VAR_5 * VAR_6;



 if ((VAR_4 == 32) && (VAR_8 > VAR_0)) {
  return (VAR_2);
 }

 *VAR_7 = VAR_8;
 return (VAR_3);
}
