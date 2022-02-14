
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amd64_pvt {int F6; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static inline void FUNC_1(struct amd64_pvt *VAR_2, u32 VAR_3)
{





 if (VAR_3 >= 0x5 && VAR_3 <= 0x14) {
  VAR_3 -= 0x5;
  FUNC_0(VAR_2->F6, VAR_1, VAR_3, 0xF);
  FUNC_0(VAR_2->F6, VAR_0, 1, 0x1);
 } else {
  FUNC_0(VAR_2->F6, VAR_0, 0, 0x1);
 }
}
