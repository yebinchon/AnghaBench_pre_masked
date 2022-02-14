
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gs_cb {int gsd; } ;
struct TYPE_3__ {struct gs_cb* gs_cb; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 TYPE_2__* VAR_2 ;
 struct gs_cb* FUNC_1 (int,int ) ;
 int FUNC_2 (struct gs_cb*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(void)
{
 struct gs_cb *VAR_3;

 if (!VAR_2->thread.gs_cb) {
  VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
  if (!VAR_3)
   return -VAR_0;
  VAR_3->gsd = 25;
  FUNC_3();
  FUNC_0(2, 4);
  FUNC_2(VAR_3);
  VAR_2->thread.gs_cb = VAR_3;
  FUNC_4();
 }
 return 0;
}
