
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (struct hfi1_devdata*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct hfi1_devdata*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct hfi1_devdata *VAR_12, int VAR_13, u32 VAR_14,
        const u8 *VAR_15, u32 VAR_16)
{
 u64 VAR_17;
 u32 VAR_18;
 int VAR_19, VAR_20;


 VAR_19 = ((unsigned long)VAR_15 & 0x7) == 0;


 VAR_17 = (VAR_13 ? VAR_7 : 0ull)
  | VAR_6;
 FUNC_4(VAR_12, VAR_5, VAR_17);

 VAR_17 = ((VAR_14 & VAR_2)
   << VAR_3)
  | VAR_4;
 FUNC_4(VAR_12, VAR_1, VAR_17);


 for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18 += 8) {
  int VAR_21 = VAR_16 - VAR_18;

  if (VAR_21 < 8) {
   VAR_17 = 0;
   FUNC_1(&VAR_17, &VAR_15[VAR_18], VAR_21);
  } else if (VAR_19) {
   VAR_17 = *(u64 *)&VAR_15[VAR_18];
  } else {
   FUNC_1(&VAR_17, &VAR_15[VAR_18], 8);
  }
  FUNC_4(VAR_12, VAR_10, VAR_17);


  VAR_20 = 0;
  while ((FUNC_2(VAR_12, VAR_8)
      & VAR_9)
      == 0) {
   VAR_20++;
   if (VAR_20 > VAR_0) {
    FUNC_0(VAR_12, "timeout writing 8051 data\n");
    return -VAR_11;
   }
   FUNC_3(1);
  }
 }


 FUNC_4(VAR_12, VAR_1, 0);
 FUNC_4(VAR_12, VAR_5, 0);

 return 0;
}
