
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int minor; int major; } ;
struct TYPE_6__ {TYPE_1__ version; } ;
struct TYPE_7__ {TYPE_2__ args; int request; } ;
typedef TYPE_3__ command ;
typedef int amb_dev ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(amb_dev *VAR_3)
{
  u32 VAR_4;
  u32 VAR_5;
  command VAR_6;
  VAR_6.request = FUNC_3 (VAR_1);
  while (FUNC_2 (VAR_3, &VAR_6)) {
    FUNC_5(VAR_2);
    FUNC_4();
  }
  VAR_4 = FUNC_1 (VAR_6.args.version.major);
  VAR_5 = FUNC_1 (VAR_6.args.version.minor);
  FUNC_0 (VAR_0, "microcode version is %u.%u", VAR_4, VAR_5);
}
