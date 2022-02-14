
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int driver; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_2;

 if (VAR_0)
  return 0;

 VAR_2 = FUNC_0(&VAR_1.driver);
 if (VAR_2)
  FUNC_1("Could not register IPMI driver\n");
 else
  VAR_0 = 1;
 return VAR_2;
}
