
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_5__ {int base; int tmp_buf; int ignores; TYPE_2__ frames; } ;
typedef TYPE_1__ filesystem_iterator ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(filesystem_iterator *VAR_0)
{
 while (VAR_0->frames.size)
  FUNC_0(VAR_0);

 FUNC_1(VAR_0->frames);
 FUNC_3(&VAR_0->ignores);

 FUNC_2(&VAR_0->tmp_buf);

 FUNC_4(&VAR_0->base);
}
