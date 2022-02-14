
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_status {int* status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int,int,int,int,int,int,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*,...) ;
 int VAR_9 ;
 int FUNC_3 (char*,char*) ;

void
FUNC_4(struct fdc_status *VAR_10, int VAR_11)
{
 char VAR_12[100];

 if (!VAR_11)
  FUNC_0(VAR_9,
  "\nFDC status ST0=%#x ST1=%#x ST2=%#x C=%u H=%u R=%u N=%u:\n",
   VAR_10->status[0] & 0xff,
   VAR_10->status[1] & 0xff,
   VAR_10->status[2] & 0xff,
   VAR_10->status[3] & 0xff,
   VAR_10->status[4] & 0xff,
   VAR_10->status[5] & 0xff,
   VAR_10->status[6] & 0xff);

 if ((VAR_10->status[0] & VAR_1) == 0) {
  FUNC_2(VAR_12, "timeout");
 } else if ((VAR_10->status[0] & VAR_1) != VAR_0) {
  FUNC_2(VAR_12, "unexcpted interrupt code %#x",
   VAR_10->status[0] & VAR_1);
 } else {
  FUNC_3(VAR_12, "unexpected error code in ST1/ST2");

  if (VAR_10->status[1] & VAR_3)
   FUNC_3(VAR_12, "end of cylinder (wrong format)");
  else if (VAR_10->status[1] & VAR_2) {
   if (VAR_10->status[2] & VAR_6)
    FUNC_3(VAR_12, "CRC error in data field");
   else
    FUNC_3(VAR_12, "CRC error in ID field");
  } else if (VAR_10->status[1] & VAR_4) {
   if (VAR_10->status[2] & VAR_7)
    FUNC_3(VAR_12, "no address mark in data field");
   else
    FUNC_3(VAR_12, "no address mark in ID field");
  } else if (VAR_10->status[2] & VAR_8)
   FUNC_3(VAR_12, "wrong cylinder (format mismatch)");
  else if (VAR_10->status[1] & VAR_5)
   FUNC_3(VAR_12, "no data (sector not found)");
 }
 FUNC_1(VAR_12, VAR_9);
}
