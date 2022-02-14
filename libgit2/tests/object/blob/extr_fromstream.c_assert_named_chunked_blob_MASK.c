
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* write ) (TYPE_1__*,int ,int ) ;} ;
typedef TYPE_1__ git_writestream ;
typedef int git_oid ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__**,int ,char const*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,char const*) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(const char *VAR_2, const char *VAR_3)
{
 git_oid VAR_4, VAR_5;
 git_writestream *VAR_6;
 int VAR_7, VAR_8 = 6;

 FUNC_1(FUNC_4(&VAR_4, VAR_2));

 FUNC_1(FUNC_2(&VAR_6, VAR_0, VAR_3));

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  FUNC_1(VAR_6->write(VAR_6, VAR_1, FUNC_5(VAR_1)));

 FUNC_1(FUNC_3(&VAR_5, VAR_6));

 FUNC_0(&VAR_4, &VAR_5);
}
