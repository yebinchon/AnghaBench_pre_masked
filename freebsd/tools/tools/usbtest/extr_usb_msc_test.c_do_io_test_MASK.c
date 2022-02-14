
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint32_t ;
struct usb_msc_params {int io_mode; int io_offset; int io_delay; int io_size; scalar_t__ max_errors; int done; } ;
struct TYPE_2__ {scalar_t__ data_error; unsigned int xfer_rx_bytes; unsigned int xfer_tx_bytes; scalar_t__ xfer_error; scalar_t__ xfer_reset; } ;
 scalar_t__ FUNC_0 (int*,int*,unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned int,unsigned int,int*,int) ;
 int FUNC_2 (unsigned int,unsigned int,int*,int) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 unsigned int VAR_2 ;

__attribute__((used)) static void
FUNC_6(struct usb_msc_params *VAR_3, uint8_t VAR_4, uint32_t VAR_5,
    uint8_t *VAR_6, uint8_t *VAR_7)
{
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint8_t VAR_11;
 uint8_t VAR_12;

 switch (VAR_3->io_mode) {
 case 142:
  VAR_11 = 0;
  break;
 case 143:
  VAR_11 = (FUNC_4() & 1);
  break;
 default:
  VAR_11 = 1;
  break;
 }

 switch (VAR_3->io_offset) {
 case 141:
  VAR_8 = FUNC_4();
  break;
 default:
  VAR_8 = 0;
  break;
 }

 switch (VAR_3->io_delay) {
 case 144:
  FUNC_5(((uint32_t)FUNC_4()) % 10000U);
  break;
 case 145:
  FUNC_5(((uint32_t)FUNC_4()) % 100000U);
  break;
 case 146:
  FUNC_5(10000);
  break;
 case 147:
  FUNC_5(100000);
  break;
 default:
  break;
 }

 switch (VAR_3->io_size) {
 case 128:
  VAR_9 = ((uint32_t)FUNC_4()) & 65535U;
  break;
 case 129:
  VAR_9 = (VAR_2 & 65535U);
  break;
 case 137:
  VAR_9 = 1;
  break;
 case 135:
  VAR_9 = 2;
  break;
 case 133:
  VAR_9 = 4;
  break;
 case 130:
  VAR_9 = 8;
  break;
 case 138:
  VAR_9 = 16;
  break;
 case 134:
  VAR_9 = 32;
  break;
 case 131:
  VAR_9 = 64;
  break;
 case 139:
  VAR_9 = 128;
  break;
 case 136:
  VAR_9 = 256;
  break;
 case 132:
  VAR_9 = 512;
  break;
 case 140:
  VAR_9 = 1024;
  break;
 default:
  VAR_9 = 1;
  break;
 }

 if (VAR_9 == 0)
  VAR_9 = 1;

 VAR_8 %= VAR_5;

 VAR_10 = (VAR_5 - VAR_8);

 if (VAR_9 > VAR_10)
  VAR_9 = VAR_10;

 if (VAR_11) {
  VAR_12 = FUNC_1(VAR_8, VAR_9 * VAR_0,
      VAR_6 + (VAR_8 * VAR_0), VAR_4);

  if (VAR_12 == 0) {
   if (FUNC_0(VAR_6 + (VAR_8 * VAR_0),
       VAR_7 + (VAR_8 * VAR_0),
       VAR_9 * VAR_0)) {
    FUNC_3("ERROR: Data comparison failure\n");
    VAR_1.data_error++;
    VAR_12 = 1;
   }
  }
  VAR_1.xfer_rx_bytes += (VAR_9 * VAR_0);

 } else {

  VAR_12 = FUNC_2(VAR_8, VAR_9 * VAR_0,
      VAR_7 + (VAR_8 * VAR_0), VAR_4);

  VAR_1.xfer_tx_bytes += (VAR_9 * VAR_0);
 }

 if ((VAR_1.xfer_error + VAR_1.data_error +
     VAR_1.xfer_reset) >= VAR_3->max_errors) {
  FUNC_3("Maximum number of errors exceeded\n");
  VAR_3->done = 1;
 }
}
