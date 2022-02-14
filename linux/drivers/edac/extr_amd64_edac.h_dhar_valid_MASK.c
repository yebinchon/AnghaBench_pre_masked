
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct amd64_pvt {int fam; int model; int dhar; int F1; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static inline u8 FUNC_2(struct amd64_pvt *VAR_1)
{
 if (VAR_1->fam == 0x15 && VAR_1->model >= 0x30) {
  u32 VAR_2;
  FUNC_1(VAR_1->F1, VAR_0, &VAR_2);
  return (VAR_2 >> 1) & FUNC_0(0);
 }
 return (VAR_1)->dhar & FUNC_0(0);
}
