
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
struct ar934x_nfc {int (* select_chip ) (int) ;} ;


 struct ar934x_nfc* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct mtd_info *VAR_0, int VAR_1)
{
 struct ar934x_nfc *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->select_chip)
  VAR_2->select_chip(VAR_1);
}
