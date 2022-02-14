
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unix_sockaddr_context {int orig_dir; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct unix_sockaddr_context *VAR_0)
{
 if (!VAR_0->orig_dir)
  return;





 if (FUNC_0(VAR_0->orig_dir) < 0)
  FUNC_1("unable to restore original working directory");
 FUNC_2(VAR_0->orig_dir);
}
