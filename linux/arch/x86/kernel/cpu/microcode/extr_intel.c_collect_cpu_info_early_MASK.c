
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_signature {unsigned int sig; int pf; int rev; int member_0; } ;
struct ucode_cpu_info {int valid; struct cpu_signature cpu_sig; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ucode_cpu_info*,int ,int) ;
 int FUNC_2 (unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_3 (int ,unsigned int,unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (unsigned int) ;

__attribute__((used)) static int FUNC_6(struct ucode_cpu_info *VAR_1)
{
 unsigned int VAR_2[2];
 unsigned int VAR_3, VAR_4;
 struct cpu_signature VAR_5 = { 0 };
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_1(VAR_1, 0, sizeof(*VAR_1));

 VAR_6 = 0x00000001;
 VAR_8 = 0;
 FUNC_2(&VAR_6, &VAR_7, &VAR_8, &VAR_9);
 VAR_5.sig = VAR_6;

 VAR_3 = FUNC_4(VAR_6);
 VAR_4 = FUNC_5(VAR_6);

 if ((VAR_4 >= 5) || (VAR_3 > 6)) {

  FUNC_3(VAR_0, VAR_2[0], VAR_2[1]);
  VAR_5.pf = 1 << ((VAR_2[1] >> 18) & 7);
 }

 VAR_5.rev = FUNC_0();

 VAR_1->cpu_sig = VAR_5;
 VAR_1->valid = 1;

 return 0;
}
