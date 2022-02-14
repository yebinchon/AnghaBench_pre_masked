
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct altera_mbox {scalar_t__ mbox_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct altera_mbox *VAR_2)
{
 u32 VAR_3;




 FUNC_1(0xA5A5AA55, VAR_2->mbox_base + VAR_0);
 VAR_3 = FUNC_0(VAR_2->mbox_base + VAR_0);
 if (VAR_3 == 0xA5A5AA55) {

  FUNC_1(0, VAR_2->mbox_base + VAR_0);
  return 1;
 }
 return 0;
}
