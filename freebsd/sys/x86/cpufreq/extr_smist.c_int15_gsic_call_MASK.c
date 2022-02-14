
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmf ;
struct vm86frame {int vmf_eax; int vmf_edx; int vmf_ebx; int vmf_ecx; } ;


 int FUNC_0 (struct vm86frame*,int) ;
 int FUNC_1 (int,struct vm86frame*) ;

__attribute__((used)) static int
FUNC_2(int *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4)
{
 struct vm86frame VAR_5;

 FUNC_0(&VAR_5, sizeof(VAR_5));
 VAR_5.vmf_eax = 0x0000E980;
 VAR_5.vmf_edx = 0x47534943;
 FUNC_1(0x15, &VAR_5);

 if (VAR_5.vmf_eax == 0x47534943) {
  *VAR_0 = VAR_5.vmf_eax;
  *VAR_1 = VAR_5.vmf_ebx & 0xff;
  *VAR_2 = (VAR_5.vmf_ebx >> 16) & 0xff;
  *VAR_3 = VAR_5.vmf_ecx;
  *VAR_4 = VAR_5.vmf_edx;
 } else {
  *VAR_0 = -1;
  *VAR_1 = -1;
  *VAR_2 = -1;
  *VAR_3 = -1;
  *VAR_4 = -1;
 }

 return (0);
}
