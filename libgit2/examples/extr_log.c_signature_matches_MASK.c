
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int email; int name; } ;
typedef TYPE_1__ git_signature ;


 int * FUNC_0 (int ,char const*) ;

__attribute__((used)) static int FUNC_1(const git_signature *VAR_0, const char *VAR_1) {
 if (VAR_1 == ((void*)0))
  return 1;

 if (VAR_0 != ((void*)0) &&
  (FUNC_0(VAR_0->name, VAR_1) != ((void*)0) ||
  FUNC_0(VAR_0->email, VAR_1) != ((void*)0)))
  return 1;

 return 0;
}
