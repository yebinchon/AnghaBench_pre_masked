
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
struct s10_priv {TYPE_1__* svc_bufs; int chan; } ;
struct fpga_manager {struct s10_priv* priv; } ;
struct TYPE_2__ {int * buf; int lock; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct fpga_manager *VAR_2)
{
 struct s10_priv *VAR_3 = VAR_2->priv;
 uint VAR_4 = 0;
 uint VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (!VAR_3->svc_bufs[VAR_5].buf) {
   VAR_4++;
   continue;
  }

  if (!FUNC_1(VAR_1,
        &VAR_3->svc_bufs[VAR_5].lock)) {
   FUNC_0(VAR_3->chan,
        VAR_3->svc_bufs[VAR_5].buf);
   VAR_3->svc_bufs[VAR_5].buf = ((void*)0);
   VAR_4++;
  }
 }

 return VAR_4 == VAR_0;
}
