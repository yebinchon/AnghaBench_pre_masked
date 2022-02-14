
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int efi_status_t ;
typedef int efi_capsule_header_t ;
struct TYPE_2__ {scalar_t__ runtime_version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int ,int **,unsigned long*,int *,int*,int *) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static efi_status_t FUNC_3(efi_capsule_header_t **VAR_6,
      unsigned long VAR_7,
      u64 *VAR_8,
      int *VAR_9)
{
 efi_status_t VAR_10;

 if (VAR_4.runtime_version < VAR_0)
  return VAR_3;

 if (FUNC_0(&VAR_5))
  return VAR_1;
 VAR_10 = FUNC_1(VAR_2, VAR_6, &VAR_7,
    VAR_8, VAR_9, ((void*)0));
 FUNC_2(&VAR_5);
 return VAR_10;
}
