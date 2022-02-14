
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct ioat_test {int raw_is_virtual; int verify; int raw_write; int zero_stats; int buffer_size; int chain_depth; int duration; int channel_index; void* transactions; int testkind; void* coalesce_period; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (int,int ,struct ioat_test*) ;
 int FUNC_4 (struct ioat_test*,int,char**) ;
 int FUNC_5 (struct ioat_test*,int ,int) ;
 int FUNC_6 (char*,int ) ;
 char* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_7 (struct ioat_test*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;

int
FUNC_10(int VAR_13, char **VAR_14)
{
 struct ioat_test VAR_15;
 int VAR_16, VAR_17;
 bool VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 unsigned VAR_25;

 FUNC_5(&VAR_15, 0, sizeof(VAR_15));

 VAR_18 = VAR_19 = VAR_20 = VAR_21 = VAR_22 = VAR_23 = VAR_24 = 0;
 VAR_25 = 0;

 while ((VAR_17 = FUNC_2(VAR_13, VAR_14, "c:EefmrvVwxXz")) != -1) {
  switch (VAR_17) {
  case 'c':
   VAR_15.coalesce_period = FUNC_0(VAR_11);
   break;
  case 'E':
   VAR_20 = 1;
   VAR_25++;
   break;
  case 'e':
   VAR_21 = 1;
   VAR_25++;
   break;
  case 'f':
   VAR_18 = 1;
   VAR_25++;
   break;
  case 'm':
   VAR_22 = 1;
   VAR_25++;
   break;
  case 'r':
   VAR_19 = 1;
   VAR_25++;
   break;
  case 'v':
   VAR_15.raw_is_virtual = 1;
   break;
  case 'V':
   VAR_15.verify = 1;
   break;
  case 'w':
   VAR_15.raw_write = 1;
   break;
  case 'x':
   VAR_23 = 1;
   VAR_25++;
   break;
  case 'X':
   VAR_24 = 1;
   VAR_25++;
   break;
  case 'z':
   VAR_15.zero_stats = 1;
   break;
  default:
   FUNC_9();
  }
 }
 VAR_13 -= VAR_12;
 VAR_14 += VAR_12;

 if (VAR_13 < 2)
  FUNC_9();

 if (VAR_25 > 1) {
  FUNC_8("Invalid: Cannot use >1 mode flag (-E, -e, -f, -m, -r, -x or -X)\n");
  FUNC_9();
 }


 VAR_15.buffer_size = 256 * 1024;
 VAR_15.chain_depth = 2;
 VAR_15.duration = 0;
 VAR_15.testkind = VAR_4;

 if (VAR_18)
  VAR_15.testkind = VAR_8;
 else if (VAR_20 || VAR_21) {
  VAR_15.testkind = VAR_5;
  VAR_15.buffer_size = 8 * 1024;
 } else if (VAR_22)
  VAR_15.testkind = VAR_9;
 else if (VAR_23)
  VAR_15.testkind = VAR_6;
 else if (VAR_24)
  VAR_15.testkind = VAR_7;

 VAR_15.channel_index = FUNC_0(VAR_14[0]);
 if (VAR_15.channel_index > 8) {
  FUNC_8("Channel number must be between 0 and 7.\n");
  return (VAR_2);
 }

 if (VAR_19) {
  FUNC_4(&VAR_15, VAR_13, VAR_14);
  return (VAR_0);
 }

 VAR_15.transactions = FUNC_0(VAR_14[1]);

 if (VAR_13 >= 3) {
  VAR_15.buffer_size = FUNC_0(VAR_14[2]);
  if (VAR_15.buffer_size == 0) {
   FUNC_8("Buffer size must be greater than zero\n");
   return (VAR_2);
  }
 }

 if (VAR_13 >= 4) {
  VAR_15.chain_depth = FUNC_0(VAR_14[3]);
  if (VAR_15.chain_depth < 1) {
   FUNC_8("Chain length must be greater than zero\n");
   return (VAR_2);
  }
 }

 if (VAR_13 >= 5) {
  VAR_15.duration = FUNC_0(VAR_14[4]);
  if (VAR_15.duration < 1) {
   FUNC_8("Duration must be greater than zero\n");
   return (VAR_2);
  }
 }

 VAR_16 = FUNC_6("/dev/ioat_test", VAR_10);
 if (VAR_16 < 0) {
  FUNC_8("Cannot open /dev/ioat_test\n");
  return (VAR_1);
 }

 (void)FUNC_3(VAR_16, VAR_3, &VAR_15);
 FUNC_1(VAR_16);

 return (FUNC_7(&VAR_15));
}
