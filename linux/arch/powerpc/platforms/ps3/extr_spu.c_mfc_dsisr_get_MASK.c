
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct spu {int dummy; } ;
struct TYPE_4__ {TYPE_1__* shadow; } ;
struct TYPE_3__ {int mfc_dsisr_RW; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct spu*) ;

__attribute__((used)) static u64 FUNC_2(struct spu *VAR_0)
{
 return FUNC_0(&FUNC_1(VAR_0)->shadow->mfc_dsisr_RW);
}
