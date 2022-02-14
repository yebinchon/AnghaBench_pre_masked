
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_ohci {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fw_ohci*,int) ;
 int FUNC_1 (struct fw_ohci*,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct fw_ohci *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, 7, VAR_0, VAR_2 << 5);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0(VAR_1, VAR_3);
}
