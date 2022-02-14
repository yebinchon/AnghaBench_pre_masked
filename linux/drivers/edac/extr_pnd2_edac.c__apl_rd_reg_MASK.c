
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_3(int VAR_12, int VAR_13, int VAR_14, u32 *VAR_15)
{
 int VAR_16 = 0xff, VAR_17;
 u16 VAR_18;
 u8 VAR_19;


 FUNC_0(VAR_9, VAR_6, &VAR_19);
 if (VAR_19)
  FUNC_1(VAR_9, VAR_6, 0);

 if (FUNC_2(&VAR_18)) {
  VAR_17 = -VAR_0;
  goto out;
 }

 FUNC_1(VAR_10, VAR_2, (VAR_12 << 24) | VAR_13);
 FUNC_1(VAR_10, VAR_4, 0);
 FUNC_1(VAR_10, VAR_5, 0);
 FUNC_1(VAR_11, VAR_7, 0);
 FUNC_1(VAR_11, VAR_8, (VAR_14 << 8) | VAR_3);

 while (FUNC_2(&VAR_18)) {
  if (VAR_16-- == 0) {
   VAR_17 = -VAR_1;
   goto out;
  }
 }

 FUNC_0(VAR_10, VAR_4, VAR_15);
 VAR_17 = (VAR_18 >> 1) & 0x3;
out:

 if (VAR_19)
  FUNC_1(VAR_9, VAR_6, VAR_19);

 return VAR_17;
}
