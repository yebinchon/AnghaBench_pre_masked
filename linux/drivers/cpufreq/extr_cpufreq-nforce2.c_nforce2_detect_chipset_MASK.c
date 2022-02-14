
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(void)
{
 VAR_4 = FUNC_0(VAR_3,
     VAR_2,
     VAR_1, VAR_1, ((void*)0));

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 FUNC_1("Detected nForce2 chipset revision %X\n",
  VAR_4->revision);
 FUNC_1("FSB changing is maybe unstable and can lead to crashes and data loss\n");

 return 0;
}
