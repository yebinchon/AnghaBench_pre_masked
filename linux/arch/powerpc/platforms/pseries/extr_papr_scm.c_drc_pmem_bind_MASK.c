
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long uint64_t ;
struct papr_scm_priv {unsigned long bound_addr; int res; int drc_index; TYPE_1__* pdev; int blocks; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*,int ,int *) ;
 scalar_t__ FUNC_2 (int ,unsigned long*,int ,int ,int ,int ,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct papr_scm_priv *VAR_4)
{
 unsigned long VAR_5[VAR_3];
 uint64_t VAR_6 = 0;
 uint64_t VAR_7;
 int64_t VAR_8;







 VAR_7 = 0;

 do {
  VAR_8 = FUNC_2(VAR_2, VAR_5, VAR_4->drc_index, 0,
    VAR_4->blocks, VAR_0, VAR_7);
  VAR_7 = VAR_5[0];
  if (!VAR_6)
   VAR_6 = VAR_5[1];
  FUNC_0();
 } while (VAR_8 == VAR_1);

 if (VAR_8)
  return VAR_8;

 VAR_4->bound_addr = VAR_6;
 FUNC_1(&VAR_4->pdev->dev, "bound drc 0x%x to %pR\n", VAR_4->drc_index, &VAR_4->res);
 return VAR_8;
}
