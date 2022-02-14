
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_7__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*,char const*,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char const*,char*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 char const* FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(git_repository *VAR_1, const char *VAR_2)
{
 git_buf VAR_3 = VAR_0, VAR_4 = VAR_0, VAR_5 = VAR_0;
 int VAR_6;

 FUNC_2(FUNC_6(&VAR_3, VAR_2, "description"));
 FUNC_2(FUNC_7(&VAR_4, VAR_3.ptr));

 FUNC_4(&VAR_3);

 FUNC_2(FUNC_6(&VAR_3, FUNC_8(VAR_1), "description"));
 FUNC_2(FUNC_7(&VAR_5, VAR_3.ptr));

 FUNC_1(VAR_4.ptr, VAR_5.ptr);

 VAR_6 = FUNC_3(VAR_1, "core.filemode");

 FUNC_0(
  VAR_2, FUNC_8(VAR_1),
  "hooks/update.sample", VAR_6);
 FUNC_0(
  VAR_2, FUNC_8(VAR_1),
  "hooks/link.sample", VAR_6);
 FUNC_0(
  VAR_2, FUNC_8(VAR_1),
  "hooks/.dotfile", VAR_6);

 FUNC_5(&VAR_4);
 FUNC_5(&VAR_5);
 FUNC_5(&VAR_3);
}
