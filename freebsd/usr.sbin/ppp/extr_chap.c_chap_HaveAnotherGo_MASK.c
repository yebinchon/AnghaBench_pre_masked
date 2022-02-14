
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* local; } ;
struct chap {int peertries; int auth; TYPE_1__ challenge; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct chap *VAR_0)
{
  if (++VAR_0->peertries < 3) {

    *VAR_0->challenge.local = '\0';
    FUNC_0(&VAR_0->auth);
    return 1;
  }

  return 0;
}
