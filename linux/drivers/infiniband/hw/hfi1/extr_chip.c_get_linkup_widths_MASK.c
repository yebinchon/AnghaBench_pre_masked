
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hfi1_devdata {int dummy; } ;


 int FUNC_0 (struct hfi1_devdata*,int*,int*) ;
 int FUNC_1 (struct hfi1_devdata*,int) ;
 int FUNC_2 (struct hfi1_devdata*,int *,int *,int*) ;

__attribute__((used)) static void FUNC_3(struct hfi1_devdata *VAR_0, u16 *VAR_1,
         u16 *VAR_2)
{
 u16 VAR_3, VAR_4, VAR_5;
 u8 VAR_6, VAR_7;
 u16 VAR_8, VAR_9;

 FUNC_2(VAR_0, &VAR_6, &VAR_7, &VAR_3);
 VAR_4 = VAR_3 >> 12;
 VAR_5 = (VAR_3 >> 8) & 0xf;

 *VAR_1 = FUNC_1(VAR_0, VAR_4);
 *VAR_2 = FUNC_1(VAR_0, VAR_5);


 FUNC_0(VAR_0, &VAR_8, &VAR_9);
}
