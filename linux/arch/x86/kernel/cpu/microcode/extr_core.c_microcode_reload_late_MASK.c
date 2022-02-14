
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int microcode; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_5;

 FUNC_0(&VAR_3, 0);
 FUNC_0(&VAR_4, 0);

 VAR_5 = FUNC_3(VAR_0, ((void*)0), VAR_2);
 if (VAR_5 > 0)
  FUNC_1();

 FUNC_2("Reload completed, microcode revision: 0x%x\n", VAR_1.microcode);

 return VAR_5;
}
