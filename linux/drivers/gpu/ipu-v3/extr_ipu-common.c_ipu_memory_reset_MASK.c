
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_soc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ipu_soc*,int ) ;
 int FUNC_2 (struct ipu_soc*,int,int ) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ipu_soc *VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(VAR_3, 0x807FFFFF, VAR_1);

 VAR_4 = VAR_2 + FUNC_3(1000);
 while (FUNC_1(VAR_3, VAR_1) & 0x80000000) {
  if (FUNC_4(VAR_2, VAR_4))
   return -VAR_0;
  FUNC_0();
 }

 return 0;
}
