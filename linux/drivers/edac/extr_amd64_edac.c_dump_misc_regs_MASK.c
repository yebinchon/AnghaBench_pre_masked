
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd64_pvt {int ecc_sym_sz; scalar_t__ umc; } ;


 int FUNC_0 (struct amd64_pvt*) ;
 int FUNC_1 (struct amd64_pvt*) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (struct amd64_pvt*) ;
 int FUNC_4 (int,char*,char*) ;

__attribute__((used)) static void FUNC_5(struct amd64_pvt *VAR_0)
{
 if (VAR_0->umc)
  FUNC_1(VAR_0);
 else
  FUNC_0(VAR_0);

 FUNC_4(1, "  DramHoleValid: %s\n", FUNC_3(VAR_0) ? "yes" : "no");

 FUNC_2("using x%u syndromes.\n", VAR_0->ecc_sym_sz);
}
