
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mcp3911 {int dummy; } ;


 int FUNC_0 (struct mcp3911*,int ,int*,int ) ;
 int FUNC_1 (struct mcp3911*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mcp3911 *VAR_0, u8 VAR_1, u32 VAR_2,
  u32 VAR_3, u8 VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, &VAR_5, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_3 &= VAR_2;
 VAR_3 |= VAR_5 & ~VAR_2;
 return FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4);
}
