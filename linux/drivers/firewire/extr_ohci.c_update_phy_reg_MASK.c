
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_ohci {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fw_ohci*,int) ;
 int FUNC_1 (struct fw_ohci*,int,int) ;

__attribute__((used)) static int FUNC_2(struct fw_ohci *VAR_1, int VAR_2,
     int VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;





 if (VAR_2 == 5)
  VAR_3 |= VAR_0;

 return FUNC_1(VAR_1, VAR_2, (VAR_5 & ~VAR_3) | VAR_4);
}
