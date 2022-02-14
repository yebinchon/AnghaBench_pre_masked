
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct amd64_pvt {int ecc_sym_sz; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct mem_ctl_info *VAR_2, u16 VAR_3)
{
 struct amd64_pvt *VAR_4 = VAR_2->pvt_info;
 int VAR_5 = -1;

 if (VAR_4->ecc_sym_sz == 8)
  VAR_5 = FUNC_2(VAR_3, VAR_1,
       FUNC_0(VAR_1),
       VAR_4->ecc_sym_sz);
 else if (VAR_4->ecc_sym_sz == 4)
  VAR_5 = FUNC_2(VAR_3, VAR_0,
       FUNC_0(VAR_0),
       VAR_4->ecc_sym_sz);
 else {
  FUNC_1("Illegal syndrome type: %u\n", VAR_4->ecc_sym_sz);
  return VAR_5;
 }

 return FUNC_3(VAR_5, VAR_4->ecc_sym_sz);
}
