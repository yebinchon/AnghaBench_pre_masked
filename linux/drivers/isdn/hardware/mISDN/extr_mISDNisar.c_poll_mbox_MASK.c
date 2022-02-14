
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isar_hw {int (* read_reg ) (int ,int ) ;int clsb; int name; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct isar_hw*) ;
 int FUNC_1 (char*,int ,int ,int) ;
 int FUNC_2 (struct isar_hw*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct isar_hw *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3;
 u8 VAR_5;

 VAR_5 = VAR_2->read_reg(VAR_2->hw, VAR_0);
 while (VAR_4 && !(VAR_5 & VAR_1)) {
  FUNC_4(1);
  VAR_4--;
 }
 if (VAR_4) {
  FUNC_0(VAR_2);
  FUNC_2(VAR_2, ((void*)0));
 }
 FUNC_1("%s: pulled %d bytes after %d us\n",
   VAR_2->name, VAR_2->clsb, VAR_3 - VAR_4);
 return VAR_4;
}
