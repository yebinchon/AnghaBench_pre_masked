
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct mtd_info {int dummy; } ;
struct TYPE_2__ {int nr_parts; int parts; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct mtd_info* FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (struct mtd_info*,int ,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct work_struct *VAR_2)
{
 struct mtd_info *VAR_3;

 VAR_3 = FUNC_1(VAR_0, FUNC_0(VAR_0), "flash");

 FUNC_2(VAR_3, VAR_1->parts, VAR_1->nr_parts);
}
