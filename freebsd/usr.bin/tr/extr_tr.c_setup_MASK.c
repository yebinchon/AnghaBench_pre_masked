
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cset {int dummy; } ;
struct TYPE_4__ {char* str; int lastch; } ;
typedef TYPE_1__ STR ;


 int FUNC_0 (struct cset*,int ) ;
 int FUNC_1 (struct cset*,int ,int) ;
 struct cset* FUNC_2 () ;
 int FUNC_3 (struct cset*) ;
 int FUNC_4 (struct cset*) ;
 int FUNC_5 (int,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static struct cset *
FUNC_8(char *VAR_0, STR *VAR_1, int VAR_2, int VAR_3)
{
 struct cset *VAR_4;

 VAR_4 = FUNC_2();
 if (VAR_4 == ((void*)0))
  FUNC_5(1, ((void*)0));
 VAR_1->str = VAR_0;
 while (FUNC_6(VAR_1))
  FUNC_0(VAR_4, VAR_1->lastch);
 if (VAR_3)
  FUNC_1(VAR_4, FUNC_7("rune"), 1);
 if (VAR_2 || VAR_3)
  FUNC_4(VAR_4);
 FUNC_3(VAR_4);
 return (VAR_4);
}
