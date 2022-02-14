
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct source {TYPE_1__* vtable; } ;
struct TYPE_4__ {size_t readsp; struct source* readstack; } ;
struct TYPE_3__ {char* (* readline ) (struct source*) ;} ;


 TYPE_2__ VAR_0 ;
 char* FUNC_0 (struct source*) ;

__attribute__((used)) static __inline char *
FUNC_1(void)
{
 struct source *VAR_1 = &VAR_0.readstack[VAR_0.readsp];

 return (VAR_1->vtable->readline(VAR_1));
}
