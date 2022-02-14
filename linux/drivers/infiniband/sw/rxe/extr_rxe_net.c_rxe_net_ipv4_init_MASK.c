
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sk4; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_2 ;
 int * FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(void)
{
 VAR_2.sk4 = FUNC_3(&VAR_1,
    FUNC_1(VAR_0), 0);
 if (FUNC_0(VAR_2.sk4)) {
  VAR_2.sk4 = ((void*)0);
  FUNC_2("Failed to create IPv4 UDP tunnel\n");
  return -1;
 }

 return 0;
}
