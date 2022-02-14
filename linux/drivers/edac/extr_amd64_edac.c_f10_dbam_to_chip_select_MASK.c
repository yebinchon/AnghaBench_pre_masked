
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct amd64_pvt {int dclr1; int dclr0; int dchr0; int dchr1; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct amd64_pvt *VAR_2, u8 VAR_3,
       unsigned VAR_4, int VAR_5)
{
 u32 VAR_6 = VAR_3 ? VAR_2->dclr1 : VAR_2->dclr0;

 FUNC_0(VAR_4 > 11);

 if (VAR_2->dchr0 & VAR_0 || VAR_2->dchr1 & VAR_0)
  return FUNC_2(VAR_4, VAR_6 & VAR_1);
 else
  return FUNC_1(VAR_4, VAR_6 & VAR_1);
}
