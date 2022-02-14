
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,char const*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,int ) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (int ) ;

void FUNC_10(void)
{
 const char *VAR_5 = "objects/8e/73b769e97678d684b809b163bebdae2911720f",
       *VAR_6 = "objects/8e/73b769e97678d684b809b163bebdae2911720e",
       *VAR_7 = "8e73b769e97678d684b809b163bebdae2911720e";
 git_buf VAR_8 = VAR_0, VAR_9 = VAR_0;
 git_object *VAR_10;
 git_oid VAR_11;

 FUNC_1(FUNC_8(&VAR_11, VAR_7));


 FUNC_1(FUNC_3(&VAR_8, FUNC_9(VAR_4), VAR_5));
 FUNC_1(FUNC_3(&VAR_9, FUNC_9(VAR_4), VAR_6));
 FUNC_1(FUNC_4(VAR_8.ptr, VAR_9.ptr, 0644));


 FUNC_0(VAR_1, FUNC_7(&VAR_10, VAR_4, &VAR_11, VAR_2));


 FUNC_1(FUNC_5(VAR_3, 0));
 FUNC_1(FUNC_7(&VAR_10, VAR_4, &VAR_11, VAR_2));
 FUNC_1(FUNC_5(VAR_3, 1));

 FUNC_6(VAR_10);
 FUNC_2(&VAR_8);
 FUNC_2(&VAR_9);
}
