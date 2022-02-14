
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct abituguru3_data {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct abituguru3_data*) ;
 int FUNC_2 (struct abituguru3_data*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct abituguru3_data *VAR_5)
{
 int VAR_6, VAR_7 = VAR_3;

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 != VAR_2) {
  FUNC_0("synchronize timeout during initial busy "
   "wait, status: 0x%02x\n", VAR_6);
  return -VAR_4;
 }

 FUNC_5(0x20, VAR_5->addr + VAR_1);
 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 != VAR_2) {
  FUNC_0("synchronize timeout after sending 0x20, "
   "status: 0x%02x\n", VAR_6);
  return -VAR_4;
 }

 FUNC_5(0x10, VAR_5->addr + VAR_0);
 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 != VAR_2) {
  FUNC_0("synchronize timeout after sending 0x10, "
   "status: 0x%02x\n", VAR_6);
  return -VAR_4;
 }

 FUNC_5(0x00, VAR_5->addr + VAR_0);
 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 != VAR_2) {
  FUNC_0("synchronize timeout after sending 0x00, "
   "status: 0x%02x\n", VAR_6);
  return -VAR_4;
 }

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 != VAR_2) {
  FUNC_0("synchronize timeout waiting for read, "
   "status: 0x%02x\n", VAR_6);
  return -VAR_4;
 }

 while ((VAR_6 = FUNC_3(VAR_5->addr + VAR_0)) != 0xAC) {
  VAR_7--;
  if (VAR_7 == 0) {
   FUNC_0("synchronize timeout cmd does not "
    "hold 0xAC after synchronize, cmd: 0x%02x\n",
    VAR_6);
   return -VAR_4;
  }
  FUNC_4(1);
 }
 return 0;
}
