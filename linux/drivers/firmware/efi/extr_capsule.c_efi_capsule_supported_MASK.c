
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u64 ;
typedef int u32 ;
typedef scalar_t__ efi_status_t ;
typedef int efi_guid_t ;
struct TYPE_4__ {int headersize; int imagesize; int flags; int guid; } ;
typedef TYPE_1__ efi_capsule_header_t ;
typedef int capsule ;
struct TYPE_5__ {scalar_t__ (* query_capsule_caps ) (TYPE_1__**,int,size_t*,int*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_1__**,int,size_t*,int*) ;

int FUNC_3(efi_guid_t VAR_5, u32 VAR_6, size_t VAR_7, int *VAR_8)
{
 efi_capsule_header_t VAR_9;
 efi_capsule_header_t *VAR_10[] = { &VAR_9 };
 efi_status_t VAR_11;
 u64 VAR_12;

 if (VAR_6 & ~VAR_0)
  return -VAR_2;

 VAR_9.headersize = VAR_9.imagesize = sizeof(VAR_9);
 FUNC_1(&VAR_9.guid, &VAR_5, sizeof(efi_guid_t));
 VAR_9.flags = VAR_6;

 VAR_11 = VAR_4.query_capsule_caps(VAR_10, 1, &VAR_12, VAR_8);
 if (VAR_11 != VAR_1)
  return FUNC_0(VAR_11);

 if (VAR_7 > VAR_12)
  return -VAR_3;

 return 0;
}
