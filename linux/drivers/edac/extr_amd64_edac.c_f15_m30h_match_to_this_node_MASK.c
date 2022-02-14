
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct amd64_pvt {int model; int F1; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,scalar_t__,int*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (struct amd64_pvt*) ;
 int FUNC_5 (struct amd64_pvt*) ;
 int FUNC_6 (struct amd64_pvt*) ;
 scalar_t__ FUNC_7 (struct amd64_pvt*) ;
 int FUNC_8 (struct amd64_pvt*,unsigned int) ;
 int FUNC_9 (struct amd64_pvt*,unsigned int) ;
 int FUNC_10 (int,char*,int,...) ;
 int FUNC_11 (struct amd64_pvt*) ;
 int FUNC_12 (struct amd64_pvt*,int,int,int,int) ;
 int FUNC_13 (struct amd64_pvt*,int) ;
 int FUNC_14 (struct amd64_pvt*,int,int,int) ;
 int FUNC_15 (int,int,int) ;
 int FUNC_16 (struct amd64_pvt*,unsigned int) ;
 int FUNC_17 (struct amd64_pvt*,unsigned int) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct amd64_pvt *VAR_4, unsigned VAR_5,
     u64 VAR_6, int *VAR_7)
{
 int VAR_8 = -VAR_3;
 int VAR_9 = 0;
 u64 VAR_10, VAR_11;
 u64 VAR_12, VAR_13;
 u32 VAR_14, VAR_15, VAR_16;
 u8 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 u64 VAR_22 = FUNC_11(VAR_4);
 u8 VAR_23 = FUNC_5(VAR_4);
 u8 VAR_24 = FUNC_8(VAR_4, VAR_5);
 u8 VAR_25 = FUNC_9(VAR_4, VAR_5);

 FUNC_2(VAR_4->F1, VAR_0, &VAR_14);
 FUNC_2(VAR_4->F1, VAR_2, &VAR_15);

 VAR_21 = (u8) ((VAR_14 >> 3) & FUNC_0(0));
 VAR_20 = (u8) ((VAR_14 >> 4) & 0x7);

 FUNC_10(1, "(range %d) SystemAddr= 0x%llx Limit=0x%llx\n",
   VAR_5, VAR_6, FUNC_17(VAR_4, VAR_5));

 if (!(FUNC_16(VAR_4, VAR_5) <= VAR_6) &&
     !(FUNC_17(VAR_4, VAR_5) >= VAR_6))
  return -VAR_3;

 if (FUNC_7(VAR_4) &&
     FUNC_6(VAR_4) <= VAR_6 &&
     VAR_6 < FUNC_1(32)) {
  FUNC_3("Huh? Address is in the MMIO hole: 0x%016llx\n",
       VAR_6);
  return -VAR_3;
 }


 VAR_12 = (u64) FUNC_4(VAR_4);
 VAR_13 = (VAR_15 >> 11) & 0x1FFF;

 if (!(VAR_14 & FUNC_0(0)) &&
     !(VAR_12 <= (VAR_6 >> 27) &&
       VAR_13 >= (VAR_6 >> 27)))
  return -VAR_3;


 VAR_9 = (int) FUNC_18(VAR_25);

 if (!(VAR_9 % 2 == 0) || (VAR_9 > 4))
  return -VAR_3;

 if (VAR_4->model >= 0x60)
  VAR_17 = FUNC_14(VAR_4, VAR_6, 0, VAR_25);
 else
  VAR_17 = FUNC_12(VAR_4, VAR_6, VAR_25,
           VAR_9, VAR_20);


 if (VAR_17 > 3)
  return -VAR_3;

 VAR_19 = (u8) (VAR_14 >> 1 & FUNC_0(0));


 if (VAR_19 && (VAR_6 >= FUNC_1(32)))
  VAR_11 = VAR_22;
 else
  VAR_11 = VAR_12 << 27;

 VAR_10 = VAR_6 - VAR_11;


 if (VAR_9 == 2) {
  if (VAR_23 == 0x4)
   VAR_10 = ((VAR_10 >> 9) << 8) |
      (VAR_10 & 0xff);
  else if (VAR_23 == 0x5)
   VAR_10 = ((VAR_10 >> 10) << 9) |
      (VAR_10 & 0x1ff);
  else
   return -VAR_3;

 } else if (VAR_9 == 4) {
  if (VAR_23 == 0x4)
   VAR_10 = ((VAR_10 >> 10) << 8) |
       (VAR_10 & 0xff);
  else if (VAR_23 == 0x5)
   VAR_10 = ((VAR_10 >> 11) << 9) |
       (VAR_10 & 0x1ff);
  else
   return -VAR_3;
 }

 if (VAR_21) {
  FUNC_2(VAR_4->F1,
       VAR_1 + (int) VAR_17 * 4,
       &VAR_16);
  VAR_10 += (u64) ((VAR_16 >> 11) & 0xfff) << 27;
 }

 FUNC_13(VAR_4, VAR_17);

 FUNC_10(1, "   Normalized DCT addr: 0x%llx\n", VAR_10);
 VAR_18 = (VAR_17 == 3) ? 1 : VAR_17;

 VAR_8 = FUNC_15(VAR_10, VAR_24, VAR_18);

 if (VAR_8 >= 0)
  *VAR_7 = VAR_18;

 return VAR_8;
}
