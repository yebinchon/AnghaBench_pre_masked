
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef int u32 ;
typedef scalar_t__ efi_status_t ;
struct TYPE_2__ {scalar_t__ (* query_variable_info_nonblocking ) (int ,unsigned long*,unsigned long*,unsigned long*) ;} ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,unsigned long*,unsigned long*,unsigned long*) ;

__attribute__((used)) static efi_status_t
FUNC_1(u32 VAR_4, unsigned long VAR_5)
{
 efi_status_t VAR_6;
 u64 VAR_7, VAR_8, VAR_9;

 VAR_6 = VAR_3.query_variable_info_nonblocking(VAR_4, &VAR_7,
           &VAR_8,
           &VAR_9);
 if (VAR_6 != VAR_2)
  return VAR_6;

 if (VAR_8 - VAR_5 < VAR_0)
  return VAR_1;

 return VAR_2;
}
