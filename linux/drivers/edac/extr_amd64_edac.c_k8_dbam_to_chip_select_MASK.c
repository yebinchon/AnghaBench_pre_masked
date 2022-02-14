
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct amd64_pvt {int dclr1; int dclr0; scalar_t__ ext_model; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct amd64_pvt *VAR_3, u8 VAR_4,
      unsigned VAR_5, int VAR_6)
{
 u32 VAR_7 = VAR_4 ? VAR_3->dclr1 : VAR_3->dclr0;

 if (VAR_3->ext_model >= VAR_1) {
  FUNC_0(VAR_5 > 11);
  return FUNC_1(VAR_5, VAR_7 & VAR_2);
 }
 else if (VAR_3->ext_model >= VAR_0) {
  unsigned VAR_8;
  FUNC_0(VAR_5 > 10);
  VAR_8 = VAR_5/3 + (unsigned)(VAR_5 > 5);

  return 32 << (VAR_5 - VAR_8);
 }
 else {
  FUNC_0(VAR_5 > 6);
  return 32 << VAR_5;
 }
}
