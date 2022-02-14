
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union hv_synic_sint {int masked; int as_uint64; } ;
union hv_synic_simp {int as_uint64; scalar_t__ base_simp_gpa; scalar_t__ simp_enabled; } ;
union hv_synic_siefp {int as_uint64; scalar_t__ base_siefp_gpa; scalar_t__ siefp_enabled; } ;
union hv_synic_scontrol {int as_uint64; scalar_t__ enable; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8(unsigned int VAR_1)
{
 union hv_synic_sint VAR_2;
 union hv_synic_simp VAR_3;
 union hv_synic_siefp VAR_4;
 union hv_synic_scontrol VAR_5;

 FUNC_3(VAR_0, VAR_2.as_uint64);

 VAR_2.masked = 1;



 FUNC_7(VAR_0, VAR_2.as_uint64);

 FUNC_1(VAR_3.as_uint64);
 VAR_3.simp_enabled = 0;
 VAR_3.base_simp_gpa = 0;

 FUNC_5(VAR_3.as_uint64);

 FUNC_0(VAR_4.as_uint64);
 VAR_4.siefp_enabled = 0;
 VAR_4.base_siefp_gpa = 0;

 FUNC_4(VAR_4.as_uint64);


 FUNC_2(VAR_5.as_uint64);
 VAR_5.enable = 0;
 FUNC_6(VAR_5.as_uint64);
}
