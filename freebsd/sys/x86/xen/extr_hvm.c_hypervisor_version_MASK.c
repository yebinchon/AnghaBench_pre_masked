
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static void
FUNC_3(void)
{
 uint32_t VAR_1[4];
 int VAR_2, VAR_3;

 FUNC_0(VAR_0 + 1, VAR_1);

 VAR_2 = VAR_1[0] >> 16;
 VAR_3 = VAR_1[0] & 0xffff;
 FUNC_2("XEN: Hypervisor version %d.%d detected.\n", VAR_2, VAR_3);

 FUNC_1(VAR_2, VAR_3);
}
