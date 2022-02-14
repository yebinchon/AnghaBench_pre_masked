
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cppi41_desc {int dummy; } ;
struct cppi41_dd {int descs_phys; int cd; scalar_t__ qmgr_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct device*,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_2, struct cppi41_dd *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_4 = VAR_0 * sizeof(struct cppi41_desc);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {

  FUNC_2(0, VAR_3->qmgr_mem + FUNC_0(VAR_5));
  FUNC_2(0, VAR_3->qmgr_mem + FUNC_1(VAR_5));

  FUNC_3(VAR_2, VAR_4, VAR_3->cd,
    VAR_3->descs_phys);
 }
}
