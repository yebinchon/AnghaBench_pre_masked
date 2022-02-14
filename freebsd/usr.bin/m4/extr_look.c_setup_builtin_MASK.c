
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct macro_definition {int dummy; } ;
typedef TYPE_2__* ndptr ;
struct TYPE_5__ {unsigned int builtin_type; TYPE_1__* d; } ;
struct TYPE_4__ {char* defn; unsigned int type; int * next; } ;


 TYPE_2__* FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char const*) ;
 void* FUNC_3 (int,int *) ;
 char* FUNC_4 (char const*) ;

void
FUNC_5(const char *VAR_1, unsigned int VAR_2)
{
 ndptr VAR_3;
 char *VAR_4;

 if (VAR_0) {
  VAR_4 = FUNC_3(FUNC_2(VAR_1)+3+1, ((void*)0));
  FUNC_1(VAR_4, "m4_", 3);
  FUNC_1(VAR_4 + 3, VAR_1, FUNC_2(VAR_1)+1);
 } else
  VAR_4 = FUNC_4(VAR_1);

 VAR_3 = FUNC_0(VAR_4);
 VAR_3->builtin_type = VAR_2;
 VAR_3->d = FUNC_3(sizeof(struct macro_definition), ((void*)0));
 VAR_3->d->defn = VAR_4;
 VAR_3->d->type = VAR_2;
 VAR_3->d->next = ((void*)0);
}
