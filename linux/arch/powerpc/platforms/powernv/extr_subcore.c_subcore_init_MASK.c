
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev_root; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_6(void)
{
 unsigned VAR_10;

 VAR_10 = FUNC_1(FUNC_4(VAR_4));

 if (VAR_10 != VAR_1 &&
     VAR_10 != VAR_2 &&
     VAR_10 != VAR_3)
  return 0;





 if (VAR_8 % VAR_9)
  return 0;

 FUNC_0(!FUNC_2(&VAR_5, VAR_0));

 FUNC_5(1);

 return FUNC_3(VAR_6.dev_root,
      &VAR_7);
}
