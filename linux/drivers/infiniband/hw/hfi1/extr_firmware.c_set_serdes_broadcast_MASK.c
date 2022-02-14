
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,scalar_t__ const,int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hfi1_devdata *VAR_1, u8 VAR_2, u8 VAR_3,
     const u8 *VAR_4, int VAR_5)
{
 while (--VAR_5 >= 0) {
  FUNC_0(VAR_1, VAR_4[VAR_5], 0xfd, VAR_0,
        (u32)VAR_2 << 4 | (u32)VAR_3 << 16);
 }
}
