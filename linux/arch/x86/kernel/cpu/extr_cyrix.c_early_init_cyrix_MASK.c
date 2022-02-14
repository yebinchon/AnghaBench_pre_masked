
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*) ;
 int FUNC_1 (struct cpuinfo_x86*,int ) ;

__attribute__((used)) static void FUNC_2(struct cpuinfo_x86 *VAR_1)
{
 unsigned char VAR_2, VAR_3, VAR_4 = 0;

 FUNC_0(&VAR_2, &VAR_4);
 VAR_3 = VAR_2 >> 4;

 switch (VAR_3) {
 case 3:

  FUNC_1(VAR_1, VAR_0);
  break;
 case 5:

  FUNC_1(VAR_1, VAR_0);
  break;
 }
}
