
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int entropy ;
typedef int __u64 ;
struct TYPE_3__ {int parm_block; } ;
struct TYPE_4__ {TYPE_1__ prngws; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,char*,int) ;
 int FUNC_1 (int ,int *,int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 __u64 VAR_2[4];
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  FUNC_0(VAR_0, VAR_1->prngws.parm_block,
     (char *) VAR_2, (char *) VAR_2,
     sizeof(VAR_2));
  FUNC_1(VAR_1->prngws.parm_block, VAR_2, sizeof(VAR_2));
 }
}
