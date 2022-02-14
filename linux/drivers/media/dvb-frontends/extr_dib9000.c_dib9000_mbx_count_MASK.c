
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct dib9000_state {int dummy; } ;


 int FUNC_0 (struct dib9000_state*,int,int ) ;

__attribute__((used)) static u8 FUNC_1(struct dib9000_state *VAR_0, u8 VAR_1, u16 VAR_2)
{
 if (VAR_1 == 0)
  return (u8) (FUNC_0(VAR_0, 1028, VAR_2) >> 10) & 0x1f;
 else
  return (u8) (FUNC_0(VAR_0, 1044, VAR_2) >> 8) & 0x7f;
}
