
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_device {int mmc3_profile; unsigned int write_speed; unsigned int read_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int,struct pktcdvd_device*,char*,...) ;
 int FUNC_2 (struct pktcdvd_device*,unsigned int*) ;
 int FUNC_3 (struct pktcdvd_device*,unsigned int*) ;
 int FUNC_4 (struct pktcdvd_device*) ;
 int FUNC_5 (struct pktcdvd_device*) ;
 int FUNC_6 (struct pktcdvd_device*,unsigned int,unsigned int) ;
 int FUNC_7 (struct pktcdvd_device*) ;
 int FUNC_8 (struct pktcdvd_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct pktcdvd_device *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6;

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3) {
  FUNC_1(2, VAR_2, "failed probe\n");
  return VAR_3;
 }

 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3) {
  FUNC_1(1, VAR_2, "failed saving write settings\n");
  return -VAR_0;
 }

 FUNC_8(VAR_2, VAR_1);

 VAR_3 = FUNC_2(VAR_2, &VAR_4);
 if (VAR_3)
  VAR_4 = 16 * 177;
 switch (VAR_2->mmc3_profile) {
  case 0x13:
  case 0x1a:
  case 0x12:
   FUNC_1(1, VAR_2, "write speed %ukB/s\n", VAR_4);
   break;
  default:
   VAR_3 = FUNC_3(VAR_2, &VAR_5);
   if (VAR_3)
    VAR_5 = 16;
   VAR_4 = FUNC_0(VAR_4, VAR_5 * 177);
   FUNC_1(1, VAR_2, "write speed %ux\n", VAR_4 / 176);
   break;
 }
 VAR_6 = VAR_4;

 VAR_3 = FUNC_6(VAR_2, VAR_4, VAR_6);
 if (VAR_3) {
  FUNC_1(1, VAR_2, "couldn't set write speed\n");
  return -VAR_0;
 }
 VAR_2->write_speed = VAR_4;
 VAR_2->read_speed = VAR_6;

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3) {
  FUNC_1(1, VAR_2, "Optimum Power Calibration failed\n");
 }

 return 0;
}
