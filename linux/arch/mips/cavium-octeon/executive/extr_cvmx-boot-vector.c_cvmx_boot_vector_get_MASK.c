
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvmx_boot_vector_element {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cvmx_boot_vector_element* FUNC_0 (int ,int ,unsigned long long,int,char*,int ) ;

struct cvmx_boot_vector_element *FUNC_1(void)
{
 struct cvmx_boot_vector_element *VAR_2;

 VAR_2 = FUNC_0(VAR_0, 0,
  (1ull << 32) - 1, 8, "__boot_vector1__", VAR_1);
 return VAR_2;
}
