
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_re_dev {int is_virtfn; TYPE_1__* en_dev; } ;
struct bnxt {int dummy; } ;
struct TYPE_2__ {int net; } ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 struct bnxt* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct bnxt_re_dev *VAR_0)
{
 struct bnxt *VAR_1;

 VAR_1 = FUNC_1(VAR_0->en_dev->net);
 if (FUNC_0(VAR_1))
  VAR_0->is_virtfn = 1;
}
