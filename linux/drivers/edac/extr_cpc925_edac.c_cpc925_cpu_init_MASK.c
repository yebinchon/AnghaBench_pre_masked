
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpc925_dev_info {scalar_t__ vbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct cpc925_dev_info *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_0(VAR_3->vbase + VAR_2);

 VAR_5 = FUNC_2();
 if (VAR_4 & VAR_5) {
  FUNC_3(VAR_1, "CPU(s) not present, "
    "but enabled in APIMASK, disabling\n");
  VAR_4 &= ~VAR_5;
 }

 if ((VAR_4 & VAR_0) == 0)
  VAR_4 |= VAR_0;

 FUNC_1(VAR_4, VAR_3->vbase + VAR_2);
}
