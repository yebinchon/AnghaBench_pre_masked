
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct SPU2_FMD {int ctrl2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct SPU2_FMD *VAR_3, u64 VAR_4,
     u64 VAR_5, u64 VAR_6,
     u64 VAR_7, u64 VAR_8)
{
 u64 VAR_9;
 u64 VAR_10;
 u64 VAR_11;
 u16 VAR_12 = 0;
 u64 VAR_13;


 VAR_10 = 0;

 VAR_11 = VAR_10;
 VAR_13 = VAR_4;
 VAR_9 = VAR_10 |
     (VAR_12 << VAR_0) |
     (VAR_11 << VAR_1) |
     (VAR_13 << VAR_2);

 VAR_3->ctrl2 = FUNC_0(VAR_9);
}
