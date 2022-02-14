
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int efi_status_t ;
typedef int efi_char16_t ;
struct TYPE_2__ {int efi_rts_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,unsigned long,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(int VAR_4,
      efi_status_t VAR_5,
      unsigned long VAR_6,
      efi_char16_t *VAR_7)
{
 if (FUNC_1(&VAR_2)) {
  FUNC_2("failed to invoke the reset_system() runtime service:\n"
   "could not get exclusive access to the firmware\n");
  return;
 }
 VAR_1.efi_rts_id = VAR_0;
 FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_3(&VAR_2);
}
