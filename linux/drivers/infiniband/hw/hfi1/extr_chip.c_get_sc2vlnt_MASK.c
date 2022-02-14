
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct sc2vlnt {int* vlnt; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hfi1_devdata*,int ) ;

__attribute__((used)) static int FUNC_1(struct hfi1_devdata *VAR_2, struct sc2vlnt *VAR_3)
{
 u64 VAR_4;
 int VAR_5;


 VAR_4 = FUNC_0(VAR_2, VAR_0);
 for (VAR_5 = 0; VAR_5 < sizeof(u64); VAR_5++) {
  u8 VAR_6 = *(((u8 *)&VAR_4) + VAR_5);

  VAR_3->vlnt[2 * VAR_5] = VAR_6 & 0xf;
  VAR_3->vlnt[(2 * VAR_5) + 1] = (VAR_6 & 0xf0) >> 4;
 }

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 for (VAR_5 = 0; VAR_5 < sizeof(u64); VAR_5++) {
  u8 VAR_7 = *(((u8 *)&VAR_4) + VAR_5);

  VAR_3->vlnt[16 + (2 * VAR_5)] = VAR_7 & 0xf;
  VAR_3->vlnt[16 + (2 * VAR_5) + 1] = (VAR_7 & 0xf0) >> 4;
 }
 return sizeof(struct sc2vlnt);
}
