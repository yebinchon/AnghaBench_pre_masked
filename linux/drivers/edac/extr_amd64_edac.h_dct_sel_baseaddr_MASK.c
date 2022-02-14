
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amd64_pvt {int fam; int model; int dct_sel_lo; int F1; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static inline u32 FUNC_1(struct amd64_pvt *VAR_1)
{
 if (VAR_1->fam == 0x15 && VAR_1->model >= 0x30) {
  u32 VAR_2;
  FUNC_0(VAR_1->F1, VAR_0, &VAR_2);
  return (VAR_2 >> 11) & 0x1FFF;
 }
 return (VAR_1)->dct_sel_lo & 0xFFFFF800;
}
