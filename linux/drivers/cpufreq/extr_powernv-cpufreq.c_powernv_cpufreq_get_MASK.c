
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powernv_smp_call_data {unsigned int freq; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct powernv_smp_call_data*,int) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_1)
{
 struct powernv_smp_call_data VAR_2;

 FUNC_1(FUNC_0(VAR_1), VAR_0,
   &VAR_2, 1);

 return VAR_2.freq;
}
