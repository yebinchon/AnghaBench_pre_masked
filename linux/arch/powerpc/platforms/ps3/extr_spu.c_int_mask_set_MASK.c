
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct spu {int dummy; } ;
struct TYPE_3__ {int * masks; } ;
struct TYPE_4__ {TYPE_1__ cache; int spe_id; } ;


 int FUNC_0 (int ,int,int ) ;
 TYPE_2__* FUNC_1 (struct spu*) ;

__attribute__((used)) static void FUNC_2(struct spu *VAR_0, int VAR_1, u64 VAR_2)
{
 FUNC_1(VAR_0)->cache.masks[VAR_1] = VAR_2;
 FUNC_0(FUNC_1(VAR_0)->spe_id, VAR_1,
  FUNC_1(VAR_0)->cache.masks[VAR_1]);
}
