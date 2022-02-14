
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_path_diriter ;
struct TYPE_7__ {int ptr; } ;
struct TYPE_8__ {TYPE_1__ path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_2__ VAR_3 ;

void FUNC_9(void)
{
 git_path_diriter VAR_4 = VAR_1;
 int VAR_5;

 FUNC_3(&VAR_2, &VAR_3);
 FUNC_8(&VAR_3);

 FUNC_2(FUNC_5(&VAR_4, VAR_3.path.ptr, 0));

 while ((VAR_5 = FUNC_6(&VAR_4)) == 0)
  FUNC_7(&VAR_4, &VAR_3);

 FUNC_1(VAR_5, VAR_0);

 FUNC_4(&VAR_4);

 FUNC_0(&VAR_3);
}
