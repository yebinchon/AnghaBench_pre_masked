
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,char*,...) ;

__attribute__((used)) static void FUNC_4(char *VAR_2[])
{
 char *VAR_3;
 git_buf VAR_4 = VAR_0, VAR_5 = VAR_0;
 size_t VAR_6;

 for (VAR_6 = 0, VAR_3 = VAR_2[VAR_6]; VAR_3; VAR_3 = VAR_2[++VAR_6]) {
  FUNC_1(&VAR_4);
  FUNC_1(&VAR_5);

  FUNC_3(&VAR_4, "%s/%s", VAR_1, VAR_3);
  FUNC_3(&VAR_5, "This is a dirty file in the working directory!\n\n"
   "It will not be staged!  Its filename is %s.\n", VAR_3);

  FUNC_0(VAR_4.ptr, VAR_5.ptr);
 }

 FUNC_2(&VAR_4);
 FUNC_2(&VAR_5);
}
