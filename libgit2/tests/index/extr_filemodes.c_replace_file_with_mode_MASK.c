
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,char const*) ;
 int FUNC_4 (TYPE_1__*,char*,char const*,unsigned int,int ) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(
 const char *VAR_4, const char *VAR_5, unsigned int VAR_6)
{
 git_buf VAR_7 = VAR_0, VAR_8 = VAR_0;

 FUNC_0(FUNC_3(&VAR_7, "filemodes", VAR_4));
 FUNC_0(FUNC_4(&VAR_8, "%s as %08u (%d)",
  VAR_4, VAR_6, FUNC_6()));

 FUNC_0(FUNC_5(VAR_7.ptr, VAR_5));
 FUNC_1(
  VAR_7.ptr, VAR_8.ptr, VAR_8.size,
  VAR_3|VAR_1|VAR_2, VAR_6);

 FUNC_2(&VAR_7);
 FUNC_2(&VAR_8);
}
