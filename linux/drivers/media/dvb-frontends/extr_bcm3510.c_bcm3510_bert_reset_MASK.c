
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bcm3510_state {int dummy; } ;
struct TYPE_5__ {int RESYNC; int CNTCTL; int BITCNT; } ;
struct TYPE_6__ {TYPE_1__ BERCTL_fa; } ;
typedef TYPE_2__ bcm3510_register_value ;


 int FUNC_0 (struct bcm3510_state*,int,TYPE_2__*) ;
 int FUNC_1 (struct bcm3510_state*,int,TYPE_2__) ;

__attribute__((used)) static int FUNC_2(struct bcm3510_state *VAR_0)
{
 bcm3510_register_value VAR_1;
 int VAR_2;

 if ((VAR_2 = FUNC_0(VAR_0,0xfa,&VAR_1)) < 0)
  return VAR_2;

 VAR_1.BERCTL_fa.RESYNC = 0; FUNC_1(VAR_0,0xfa,VAR_1);
 VAR_1.BERCTL_fa.RESYNC = 1; FUNC_1(VAR_0,0xfa,VAR_1);
 VAR_1.BERCTL_fa.RESYNC = 0; FUNC_1(VAR_0,0xfa,VAR_1);
 VAR_1.BERCTL_fa.CNTCTL = 1; VAR_1.BERCTL_fa.BITCNT = 1; FUNC_1(VAR_0,0xfa,VAR_1);


 return 0;
}
