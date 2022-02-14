
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_msc_params {int duration; int try_invalid_scsi_command; int try_invalid_wrapper_block; int try_last_lba; int max_errors; } ;


 int FUNC_0 (struct usb_msc_params*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct usb_msc_params *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->duration = 60;
 VAR_0->try_invalid_scsi_command = 1;
 VAR_0->try_invalid_wrapper_block = 1;
 VAR_0->try_last_lba = 1;
 VAR_0->max_errors = -1;
}
