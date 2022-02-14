
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct i2c_client {int dev; } ;
typedef int pkt_buf ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (struct i2c_client*,int *,int) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_11, const char *VAR_12,
         u32 VAR_13, int VAR_14)
{
 u16 VAR_15;
 int VAR_16 = 0;
 int VAR_17;
 u8 VAR_18[VAR_7];


 if ((VAR_13 & 0x3) != 0 || (VAR_14 & 0x3) != 0) {
  FUNC_0(&VAR_11->dev,
   "addr & len must be 4 bytes aligned %x, %x\n",
   VAR_13, VAR_14);
  return -VAR_5;
 }

 while (VAR_14) {
  VAR_15 = FUNC_3(VAR_14, VAR_6);

  VAR_18[VAR_3] = VAR_8;
  VAR_18[VAR_4] = VAR_9;
  FUNC_5(VAR_15, &VAR_18[VAR_1]);
  FUNC_6(VAR_13, &VAR_18[VAR_2]);
  FUNC_2(&VAR_18[VAR_0], VAR_12, VAR_15);

  VAR_17 = FUNC_7(VAR_11, VAR_18, sizeof(VAR_18));
  if (VAR_17)
   return VAR_17;

  VAR_14 -= VAR_15;
  VAR_12 += VAR_15;
  VAR_13 += VAR_15;


  FUNC_1(VAR_10);

  if ((++VAR_16 % 32) == 0) {

   FUNC_4(20);
  }
 }

 return 0;
}
