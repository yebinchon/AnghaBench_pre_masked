
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(char *VAR_1, char *VAR_2) {
 git_buf VAR_3 = VAR_0;

 FUNC_2(FUNC_4(&VAR_3, VAR_2));
 FUNC_5(&VAR_3);
 FUNC_0(VAR_1, VAR_3.ptr);
 FUNC_1(FUNC_6(VAR_1), VAR_3.size);

 FUNC_3(&VAR_3);
}
