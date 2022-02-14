
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u8 FUNC_3(u64 VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 FUNC_1(VAR_1, VAR_0,
  (0 << 31) | (VAR_3 << 24) | (0 << 16) | VAR_2);
 FUNC_2(850);
 VAR_4 = FUNC_0(VAR_1, VAR_0);
 return (VAR_4 >> 16) & 0xff;
}
