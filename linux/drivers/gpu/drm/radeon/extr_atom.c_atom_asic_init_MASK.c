
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_device {scalar_t__ family; } ;
struct atom_context {scalar_t__ cmd_table; scalar_t__ data_table; TYPE_2__* card; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct atom_context*,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int) ;

int FUNC_5(struct atom_context *VAR_6)
{
 struct radeon_device *VAR_7 = VAR_6->card->dev->dev_private;
 int VAR_8 = FUNC_0(VAR_6->data_table + VAR_2);
 uint32_t VAR_9[16];
 int VAR_10;

 FUNC_4(VAR_9, 0, 64);

 VAR_9[0] = FUNC_3(FUNC_1(VAR_8 + VAR_4));
 VAR_9[1] = FUNC_3(FUNC_1(VAR_8 + VAR_3));
 if (!VAR_9[0] || !VAR_9[1])
  return 1;

 if (!FUNC_0(VAR_6->cmd_table + 4 + 2 * VAR_0))
  return 1;
 VAR_10 = FUNC_2(VAR_6, VAR_0, VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_4(VAR_9, 0, 64);

 if (VAR_7->family < VAR_5) {
  if (FUNC_0(VAR_6->cmd_table + 4 + 2 * VAR_1))
   FUNC_2(VAR_6, VAR_1, VAR_9);
 }
 return VAR_10;
}
