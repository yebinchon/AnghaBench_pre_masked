
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_ide_platdata {int dummy; } ;
struct s3c_ide_info {int cpu_type; scalar_t__ ide_addr; int sfr_addr; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct s3c_ide_info *VAR_2,
    struct s3c_ide_platdata *VAR_3)
{
 switch (VAR_2->cpu_type) {
 case 129:

  FUNC_2(VAR_2->sfr_addr);
  FUNC_4(VAR_2->ide_addr, 1);
  FUNC_3(VAR_2->ide_addr, 1);
  FUNC_1(100);


  FUNC_5(0x1f, VAR_2->ide_addr + VAR_0);
  FUNC_5(0x1b, VAR_2->ide_addr + VAR_1);
  break;

 case 128:

  FUNC_4(VAR_2->ide_addr, 0);
  FUNC_3(VAR_2->ide_addr, 1);
  FUNC_1(100);


  FUNC_5(0x3f, VAR_2->ide_addr + VAR_0);
  FUNC_5(0x3f, VAR_2->ide_addr + VAR_1);
  break;

 default:
  FUNC_0();
 }
}
