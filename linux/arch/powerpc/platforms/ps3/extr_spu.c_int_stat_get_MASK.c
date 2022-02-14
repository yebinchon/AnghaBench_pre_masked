
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct spu {int dummy; } ;
struct TYPE_2__ {int spe_id; } ;


 int FUNC_0 (int ,int,int *) ;
 TYPE_1__* FUNC_1 (struct spu*) ;

__attribute__((used)) static u64 FUNC_2(struct spu *VAR_0, int VAR_1)
{
 u64 VAR_2;

 FUNC_0(FUNC_1(VAR_0)->spe_id, VAR_1, &VAR_2);
 return VAR_2;
}
