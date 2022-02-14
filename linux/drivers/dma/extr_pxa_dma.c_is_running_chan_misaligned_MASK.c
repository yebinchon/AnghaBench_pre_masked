
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pxad_chan {TYPE_1__* phy; } ;
struct TYPE_2__ {int idx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static bool FUNC_3(struct pxad_chan *VAR_1)
{
 u32 VAR_2;

 FUNC_1(!VAR_1->phy);
 VAR_2 = FUNC_2(VAR_1->phy, VAR_0);
 return VAR_2 & (FUNC_0(VAR_1->phy->idx));
}
