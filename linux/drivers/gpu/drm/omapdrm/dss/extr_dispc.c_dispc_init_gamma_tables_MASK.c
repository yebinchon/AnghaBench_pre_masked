
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct dispc_gamma_desc {int len; } ;
struct dispc_device {int ** gamma_table; TYPE_1__* pdev; TYPE_2__* feat; } ;
struct TYPE_6__ {struct dispc_gamma_desc gamma; } ;
struct TYPE_5__ {int has_gamma_table; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int *,int ,int,int ) ;
 int FUNC_2 (struct dispc_device*,int ) ;
 int FUNC_3 (struct dispc_device*,int,int *,int ) ;
 TYPE_3__* VAR_6 ;

__attribute__((used)) static int FUNC_4(struct dispc_device *VAR_7)
{
 int VAR_8;

 if (!VAR_7->feat->has_gamma_table)
  return 0;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7->gamma_table); VAR_8++) {
  const struct dispc_gamma_desc *VAR_9 = &VAR_6[VAR_8].gamma;
  u32 *VAR_10;

  if (VAR_8 == VAR_4 &&
      !FUNC_2(VAR_7, VAR_1))
   continue;

  if (VAR_8 == VAR_5 &&
      !FUNC_2(VAR_7, VAR_2))
   continue;

  VAR_10 = FUNC_1(&VAR_7->pdev->dev, VAR_9->len,
     sizeof(u32), VAR_3);
  if (!VAR_10)
   return -VAR_0;

  VAR_7->gamma_table[VAR_8] = VAR_10;

  FUNC_3(VAR_7, VAR_8, ((void*)0), 0);
 }
 return 0;
}
