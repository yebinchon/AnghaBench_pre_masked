
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxad_phy {int dummy; } ;
struct pxad_chan {struct pxad_phy* phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pxad_phy*,int ) ;

__attribute__((used)) static bool FUNC_1(struct pxad_chan *VAR_2)
{
 u32 VAR_3;
 struct pxad_phy *VAR_4 = VAR_2->phy;

 if (!VAR_4)
  return 0;
 VAR_3 = FUNC_0(VAR_4, VAR_0);
 return VAR_3 & VAR_1;
}
