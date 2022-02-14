
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scq_info {int paddr; scalar_t__ scd; } ;
struct idt77252_dev {int dummy; } ;


 int FUNC_0 (struct idt77252_dev*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(struct idt77252_dev *VAR_0, struct scq_info *VAR_1, int VAR_2)
{
 FUNC_0(VAR_0, VAR_1->scd, VAR_1->paddr);
 FUNC_0(VAR_0, VAR_1->scd + 1, 0x00000000);
 FUNC_0(VAR_0, VAR_1->scd + 2, 0xffffffff);
 FUNC_0(VAR_0, VAR_1->scd + 3, 0x00000000);
}
