
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct omap_desc {scalar_t__ sglen; int vd; scalar_t__ using_ll; } ;
struct TYPE_2__ {int lock; } ;
struct omap_chan {scalar_t__ sgidx; TYPE_1__ vc; scalar_t__ cyclic; struct omap_desc* desc; } ;


 int FUNC_0 (struct omap_chan*) ;
 int FUNC_1 (struct omap_chan*,struct omap_desc*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(int VAR_0, u16 VAR_1, void *VAR_2)
{
 struct omap_chan *VAR_3 = VAR_2;
 struct omap_desc *VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_3->vc.lock, VAR_5);
 VAR_4 = VAR_3->desc;
 if (VAR_4) {
  if (VAR_3->cyclic) {
   FUNC_5(&VAR_4->vd);
  } else if (VAR_4->using_ll || VAR_3->sgidx == VAR_4->sglen) {
   FUNC_0(VAR_3);
   FUNC_4(&VAR_4->vd);
  } else {
   FUNC_1(VAR_3, VAR_4);
  }
 }
 FUNC_3(&VAR_3->vc.lock, VAR_5);
}
