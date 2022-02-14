
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int word; } ;
struct TYPE_4__ {TYPE_1__ xirr; } ;


 TYPE_2__** VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static inline unsigned int FUNC_3(void)
{
 int VAR_1 = FUNC_2();
 unsigned int VAR_2;


 VAR_2 = FUNC_1();
 if (VAR_2)
  return VAR_2;

 return FUNC_0(&VAR_0[VAR_1]->xirr.word);
}
