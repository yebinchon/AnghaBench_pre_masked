
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef void* uint32_t ;
typedef int uint16_t ;
struct usb_msc_params {int try_invalid_scsi_command; int try_invalid_wrapper_block; int try_invalid_max_packet_size; int try_last_lba; int try_abort_data_write; int try_sense_on_error; int try_all_lun; int try_shorter_wrapper_block; void* duration; void* max_errors; int io_lun; int io_pattern; int io_area; int io_offset; int io_delay; int io_size; int io_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usb_msc_params*,int ,int ) ;
 void* FUNC_1 () ;
 int FUNC_2 (struct usb_msc_params*) ;
 int FUNC_3 (struct usb_msc_params*) ;
 int FUNC_4 (struct usb_msc_params*) ;
 int FUNC_5 (struct usb_msc_params*) ;
 int FUNC_6 (struct usb_msc_params*) ;
 int FUNC_7 (struct usb_msc_params*) ;
 int FUNC_8 (struct usb_msc_params*) ;
 int FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (int,char*,char*,int ,int ,int ,int ,int ,int ,char*,char*,char*,char*,int ,int,int,char*,char*,char*,char*,int ,int ) ;

void
FUNC_11(uint8_t VAR_7, uint16_t VAR_8,
    uint16_t VAR_9, uint32_t VAR_10)
{
 struct usb_msc_params VAR_11;
 uint8_t VAR_12;

 FUNC_8(&VAR_11);

 VAR_11.duration = VAR_10;

 while (1) {

  VAR_12 = FUNC_10(VAR_7,
      "Mass Storage Test Parameters",
      " 1) Toggle I/O mode: <%s>\n"
      " 2) Toggle I/O size: <%s>\n"
      " 3) Toggle I/O delay: <%s>\n"
      " 4) Toggle I/O offset: <%s>\n"
      " 5) Toggle I/O area: <%s>\n"
      " 6) Toggle I/O pattern: <%s>\n"
      " 7) Toggle try invalid SCSI command: <%s>\n"
      " 8) Toggle try invalid wrapper block: <%s>\n"
      " 9) Toggle try invalid MaxPacketSize: <%s>\n"
      "10) Toggle try last Logical Block Address: <%s>\n"
      "11) Toggle I/O lun: <%d>\n"
      "12) Set maximum number of errors: <%d>\n"
      "13) Set test duration: <%d> seconds\n"
      "14) Toggle try aborted write transfer: <%s>\n"
      "15) Toggle request sense on error: <%s>\n"
      "16) Toggle try all LUN: <%s>\n"
      "17) Toggle try too short wrapper block: <%s>\n"
      "20) Reset parameters\n"
      "30) Start test (VID=0x%04x, PID=0x%04x)\n"
      "40) Select another device\n"
      " x) Return to previous menu \n",
      FUNC_4(&VAR_11),
      FUNC_7(&VAR_11),
      FUNC_3(&VAR_11),
      FUNC_5(&VAR_11),
      FUNC_2(&VAR_11),
      FUNC_6(&VAR_11),
      (VAR_11.try_invalid_scsi_command ? "YES" : "NO"),
      (VAR_11.try_invalid_wrapper_block ? "YES" : "NO"),
      (VAR_11.try_invalid_max_packet_size ? "YES" : "NO"),
      (VAR_11.try_last_lba ? "YES" : "NO"),
      VAR_11.io_lun,
      (int)VAR_11.max_errors,
      (int)VAR_11.duration,
      (VAR_11.try_abort_data_write ? "YES" : "NO"),
      (VAR_11.try_sense_on_error ? "YES" : "NO"),
      (VAR_11.try_all_lun ? "YES" : "NO"),
      (VAR_11.try_shorter_wrapper_block ? "YES" : "NO"),
      VAR_8, VAR_9);
  switch (VAR_12) {
  case 0:
   break;
  case 1:
   VAR_11.io_mode++;
   VAR_11.io_mode %= VAR_3;
   break;
  case 2:
   VAR_11.io_size++;
   VAR_11.io_size %= VAR_6;
   break;
  case 3:
   VAR_11.io_delay++;
   VAR_11.io_delay %= VAR_1;
   break;
  case 4:
   VAR_11.io_offset++;
   VAR_11.io_offset %= VAR_4;
   break;
  case 5:
   VAR_11.io_area++;
   VAR_11.io_area %= VAR_0;
   break;
  case 6:
   VAR_11.io_pattern++;
   VAR_11.io_pattern %= VAR_5;
   break;
  case 7:
   VAR_11.try_invalid_scsi_command ^= 1;
   break;
  case 8:
   VAR_11.try_invalid_wrapper_block ^= 1;
   break;
  case 9:
   VAR_11.try_invalid_max_packet_size ^= 1;
   break;
  case 10:
   VAR_11.try_last_lba ^= 1;
   break;
  case 11:
   VAR_11.io_lun++;
   VAR_11.io_lun %= VAR_2;
   break;
  case 12:
   VAR_11.max_errors = FUNC_1();
   break;
  case 13:
   VAR_11.duration = FUNC_1();
   break;
  case 14:
   VAR_11.try_abort_data_write ^= 1;
   break;
  case 15:
   VAR_11.try_sense_on_error ^= 1;
   break;
  case 16:
   VAR_11.try_all_lun ^= 1;
   break;
  case 17:
   VAR_11.try_shorter_wrapper_block ^= 1;
   break;
  case 20:
   FUNC_8(&VAR_11);
   break;
  case 30:
   FUNC_0(&VAR_11, VAR_8, VAR_9);
   break;
  case 40:
   FUNC_9(VAR_7 + 1, &VAR_8, &VAR_9);
   break;
  default:
   return;
  }
 }
}
