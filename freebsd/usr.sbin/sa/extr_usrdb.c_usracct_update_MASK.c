
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int compare; } ;
typedef TYPE_1__ BTREEINFO ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,int ,char*,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_2(void)
{
 BTREEINFO VAR_3;

 FUNC_0(&VAR_3, sizeof VAR_3);
 VAR_3.compare = VAR_0;

 return (FUNC_1(VAR_1, VAR_2, "user accounting",
     &VAR_3));
}
