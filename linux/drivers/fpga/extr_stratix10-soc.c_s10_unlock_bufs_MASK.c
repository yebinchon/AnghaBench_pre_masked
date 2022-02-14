
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
struct s10_priv {TYPE_1__* svc_bufs; } ;
struct TYPE_2__ {void* buf; int lock; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,void*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct s10_priv *VAR_2, void *VAR_3)
{
 uint VAR_4;

 if (!VAR_3)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_2->svc_bufs[VAR_4].buf == VAR_3) {
   FUNC_1(VAR_1,
      &VAR_2->svc_bufs[VAR_4].lock);
   return;
  }

 FUNC_0(1, "Unknown buffer returned from service layer %p\n", VAR_3);
}
