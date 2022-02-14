
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct screen_info {int dummy; } ;
struct boot_params {struct screen_info screen_info; } ;
typedef scalar_t__ efi_status_t ;
typedef int efi_guid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int *,unsigned long*,void**) ;
 scalar_t__ FUNC_1 (int *,struct screen_info*,int *,unsigned long) ;
 int VAR_5 ;
 int FUNC_2 (struct screen_info*,int ,int) ;
 int FUNC_3 (struct screen_info*,int *,unsigned long) ;

void FUNC_4(struct boot_params *VAR_6)
{
 efi_guid_t VAR_7 = VAR_1;
 struct screen_info *VAR_8;
 efi_guid_t VAR_9 = VAR_4;
 efi_status_t VAR_10;
 unsigned long VAR_11;
 void **VAR_12 = ((void*)0);
 void **VAR_13 = ((void*)0);

 VAR_8 = &VAR_6->screen_info;
 FUNC_2(VAR_8, 0, sizeof(*VAR_8));

 VAR_11 = 0;
 VAR_10 = FUNC_0(VAR_5,
    VAR_2,
    &VAR_7, ((void*)0), &VAR_11, VAR_12);
 if (VAR_10 == VAR_0)
  VAR_10 = FUNC_1(((void*)0), VAR_8, &VAR_7, VAR_11);

 if (VAR_10 != VAR_3) {
  VAR_11 = 0;
  VAR_10 = FUNC_0(VAR_5,
     VAR_2,
     &VAR_9, ((void*)0), &VAR_11, VAR_13);
  if (VAR_10 == VAR_0)
   FUNC_3(VAR_8, &VAR_9, VAR_11);
 }
}
