
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx842_workmem {int start; } ;
struct coprocessor_status_block {int flags; int cc; int ce; int count; scalar_t__ cs; } ;
typedef int ktime_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct coprocessor_status_block*,char*,...) ;
 int FUNC_1 (struct coprocessor_status_block*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct nx842_workmem *VAR_12,
   struct coprocessor_status_block *VAR_13)
{
 ktime_t VAR_14 = VAR_12->start, VAR_15 = FUNC_8();
 ktime_t VAR_16 = FUNC_6(VAR_14, VAR_6);

 while (!(FUNC_2(VAR_13->flags) & VAR_5)) {
  FUNC_5();
  VAR_15 = FUNC_8();
  if (FUNC_7(VAR_15, VAR_16))
   break;
 }


 FUNC_3();


 if (!(VAR_13->flags & VAR_5)) {
  FUNC_0(VAR_13, "CSB still not valid after %ld us, giving up",
   (long)FUNC_9(VAR_15, VAR_14));
  return -VAR_11;
 }
 if (VAR_13->flags & VAR_4) {
  FUNC_0(VAR_13, "Invalid CSB format");
  return -VAR_10;
 }
 if (VAR_13->flags & VAR_3) {
  FUNC_0(VAR_13, "Invalid CSB chaining state");
  return -VAR_10;
 }


 if (VAR_13->cs) {
  FUNC_0(VAR_13, "Invalid CSB completion sequence");
  return -VAR_10;
 }


 switch (VAR_13->cc) {

 case 143:
  break;
 case 140:



  break;


 case 160:

  FUNC_0(VAR_13, "Operand Overlap error");
  return -VAR_8;
 case 162:
  FUNC_0(VAR_13, "Invalid operand");
  return -VAR_8;
 case 161:

  return -VAR_9;
 case 175:
  FUNC_0(VAR_13, "Function aborted");
  return -VAR_7;
 case 173:
  FUNC_0(VAR_13, "CRC mismatch");
  return -VAR_8;
 case 142:
  FUNC_0(VAR_13, "Compressed data template invalid");
  return -VAR_8;
 case 141:
  FUNC_0(VAR_13, "Compressed data template shows data past end");
  return -VAR_8;
 case 170:




  FUNC_0(VAR_13, "DDE byte count exceeds the limit");
  return -VAR_8;


 case 165:

  FUNC_1(VAR_13, "Invalid alignment");
  return -VAR_8;
 case 172:

  FUNC_0(VAR_13, "Invalid data length");
  return -VAR_8;
 case 128:
 case 139:
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:

  FUNC_1(VAR_13, "Translation error");
  return -VAR_10;
 case 129:
 case 158:
 case 157:
 case 156:
 case 155:
 case 154:
 case 153:
 case 152:

  FUNC_1(VAR_13, "Protection error");
  return -VAR_10;
 case 159:

  FUNC_0(VAR_13, "Insufficient Privilege error");
  return -VAR_10;
 case 169:

  FUNC_0(VAR_13, "Too many DDEs in DDL");
  return -VAR_8;
 case 132:
 case 164:

  FUNC_0(VAR_13, "Invalid CRB");
  return -VAR_8;
 case 163:




  FUNC_0(VAR_13, "Invalid DDE");
  return -VAR_8;
 case 146:

  FUNC_0(VAR_13, "Segmented DDL error");
  return -VAR_8;
 case 171:

  FUNC_0(VAR_13, "DDE overflow error");
  return -VAR_8;
 case 144:

  FUNC_0(VAR_13, "Session violation error");
  return -VAR_10;
 case 174:

  FUNC_0(VAR_13, "Chained CRB error");
  return -VAR_10;
 case 145:

  FUNC_0(VAR_13, "CRB sequence number error");
  return -VAR_10;
 case 131:
  FUNC_0(VAR_13, "Unknown subfunction code");
  return -VAR_10;


 case 150:
 case 149:
 case 148:
 case 147:
  FUNC_1(VAR_13, "Read error outside coprocessor");
  return -VAR_10;
 case 130:
  FUNC_1(VAR_13, "Write error outside coprocessor");
  return -VAR_10;
 case 166:
  FUNC_0(VAR_13, "Internal error in coprocessor");
  return -VAR_10;
 case 151:
  FUNC_0(VAR_13, "Storage provision error");
  return -VAR_10;
 case 168:
  FUNC_0(VAR_13, "Correctable hardware error");
  return -VAR_10;
 case 167:
  FUNC_0(VAR_13, "Job did not finish within allowed time");
  return -VAR_10;

 default:
  FUNC_0(VAR_13, "Invalid CC %d", VAR_13->cc);
  return -VAR_10;
 }


 if (VAR_13->ce & VAR_1) {
  FUNC_0(VAR_13, "CSB request was terminated");
  return -VAR_10;
 }
 if (VAR_13->ce & VAR_0) {
  FUNC_0(VAR_13, "CSB request not complete");
  return -VAR_10;
 }
 if (!(VAR_13->ce & VAR_2)) {
  FUNC_0(VAR_13, "TPBC not provided, unknown target length");
  return -VAR_10;
 }


 FUNC_10("Processed %u bytes in %lu us\n",
        FUNC_4(VAR_13->count),
        (unsigned long)FUNC_9(VAR_15, VAR_14));

 return 0;
}
