
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
typedef scalar_t__ efi_status_t ;
typedef int efi_physical_addr_t ;
typedef int efi_capsule_header_t ;
struct TYPE_2__ {scalar_t__ (* update_capsule ) (int **,int,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int **,int,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(efi_capsule_header_t *VAR_7,
     struct page **VAR_8, int VAR_9)
{
 efi_physical_addr_t VAR_10;
 efi_status_t VAR_11;

 FUNC_1(&VAR_2);





 if (VAR_5 >= 0 && VAR_5 != VAR_9) {
  FUNC_3("Conflicting capsule reset type %d (%d).\n",
         VAR_9, VAR_5);
  return -VAR_1;
 }







 if (FUNC_6(VAR_6)) {
  FUNC_4("Capsule update raced with reboot, aborting.\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_2(VAR_8[0]);

 VAR_11 = VAR_4.update_capsule(&VAR_7, 1, VAR_10);
 if (VAR_11 == VAR_0) {
  VAR_3 = 1;
  VAR_5 = VAR_9;
 }

 return FUNC_0(VAR_11);
}
