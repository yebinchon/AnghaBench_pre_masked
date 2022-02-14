
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_cmt_channel {unsigned long max_match_value; unsigned long next_match_value; int index; TYPE_2__* cmt; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct sh_cmt_channel*,int ) ;

__attribute__((used)) static void FUNC_2(struct sh_cmt_channel *VAR_0, unsigned long VAR_1)
{
 if (VAR_1 > VAR_0->max_match_value)
  FUNC_0(&VAR_0->cmt->pdev->dev, "ch%u: delta out of range\n",
    VAR_0->index);

 VAR_0->next_match_value = VAR_1;
 FUNC_1(VAR_0, 0);
}
