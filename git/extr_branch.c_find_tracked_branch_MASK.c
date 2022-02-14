
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * src; } ;
struct tracking {int matches; TYPE_1__ spec; int * src; int remote; } ;
struct remote {int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct remote*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct remote *VAR_0, void *VAR_1)
{
 struct tracking *VAR_2 = VAR_1;

 if (!FUNC_2(VAR_0, &VAR_2->spec)) {
  if (++VAR_2->matches == 1) {
   VAR_2->src = VAR_2->spec.src;
   VAR_2->remote = VAR_0->name;
  } else {
   FUNC_1(VAR_2->spec.src);
   FUNC_0(VAR_2->src);
  }
  VAR_2->spec.src = ((void*)0);
 }

 return 0;
}
