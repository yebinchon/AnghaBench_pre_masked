
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint64_t ;
typedef int uint16_t ;
typedef size_t u_int ;
struct dmar_unit {size_t irte_cnt; int dev; TYPE_1__* irt; } ;
struct TYPE_2__ {int irte1; int irte2; } ;
typedef TYPE_1__ dmar_irte_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dmar_unit*) ;
 int FUNC_2 (struct dmar_unit*) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,char*,size_t,int ,int ,int ) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (struct dmar_unit*,size_t,int) ;

__attribute__((used)) static void
FUNC_8(struct dmar_unit *VAR_4, u_int VAR_5, uint64_t VAR_6,
    uint16_t VAR_7)
{
 dmar_irte_t *VAR_8;
 uint64_t VAR_9;

 FUNC_3(VAR_5 < VAR_4->irte_cnt,
     ("bad cookie %d %d", VAR_5, VAR_4->irte_cnt));
 VAR_8 = &(VAR_4->irt[VAR_5]);
 VAR_9 = VAR_2 | VAR_1 |
     FUNC_0(VAR_7);
 if (VAR_3) {
  FUNC_4(VAR_4->dev,
      "programming irte[%d] rid %#x high %#jx low %#jx\n",
      VAR_5, VAR_7, (uintmax_t)VAR_9, (uintmax_t)VAR_6);
 }
 FUNC_1(VAR_4);
 if ((VAR_8->irte1 & VAR_0) != 0) {






  FUNC_3(VAR_8->irte2 == VAR_9,
      ("irte2 mismatch, %jx %jx", (uintmax_t)VAR_8->irte2,
      (uintmax_t)VAR_9));
  FUNC_6(&VAR_8->irte1, VAR_6);
 } else {
  FUNC_5(&VAR_8->irte2, VAR_9);
  FUNC_5(&VAR_8->irte1, VAR_6);
 }
 FUNC_7(VAR_4, VAR_5, 1);
 FUNC_2(VAR_4);

}
