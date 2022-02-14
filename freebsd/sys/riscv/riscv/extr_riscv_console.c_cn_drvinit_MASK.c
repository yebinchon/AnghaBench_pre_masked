
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cn_pri; char* cn_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *,char*,char*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_7)
{

 if (VAR_3.cn_pri != VAR_0 &&
     VAR_3.cn_name[0] != '\0') {
  VAR_6 = FUNC_2(&VAR_5, ((void*)0));
  FUNC_3(VAR_6, 0);
  FUNC_4(VAR_6, ((void*)0), "%s", "rcons");

  VAR_1 = 1;

  FUNC_0(&VAR_2, 1);
  FUNC_1(&VAR_2, VAR_1, VAR_4, ((void*)0));
 }
}
