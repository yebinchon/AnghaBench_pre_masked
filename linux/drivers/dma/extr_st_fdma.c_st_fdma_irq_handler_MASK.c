
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_fdma_dev {struct st_fdma_chan* chans; } ;
struct TYPE_6__ {int lock; } ;
struct st_fdma_chan {TYPE_2__ vchan; TYPE_1__* fdesc; int status; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {int node; } ;
struct TYPE_5__ {TYPE_3__ vdesc; int iscyclic; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 (struct st_fdma_dev*,int ) ;
 int FUNC_1 (struct st_fdma_dev*,unsigned long,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct st_fdma_chan*,unsigned long) ;
 int FUNC_6 (struct st_fdma_chan*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_7, void *VAR_8)
{
 struct st_fdma_dev *VAR_9 = VAR_8;
 irqreturn_t VAR_10 = VAR_6;
 struct st_fdma_chan *VAR_11 = &VAR_9->chans[0];
 unsigned long VAR_12, VAR_13;

 VAR_12 = FUNC_0(VAR_9, VAR_4);
 VAR_13 = VAR_12;

 for (; VAR_12 != 0 ; VAR_12 >>= 2, VAR_11++) {
  if (!(VAR_12 & (VAR_2 | VAR_3)))
   continue;

  FUNC_3(&VAR_11->vchan.lock);
  FUNC_5(VAR_11, VAR_12);

  if (VAR_11->fdesc) {
   if (!VAR_11->fdesc->iscyclic) {
    FUNC_2(&VAR_11->fdesc->vdesc.node);
    FUNC_7(&VAR_11->fdesc->vdesc);
    VAR_11->fdesc = ((void*)0);
    VAR_11->status = VAR_0;
   } else {
    FUNC_8(&VAR_11->fdesc->vdesc);
   }


   if (!VAR_11->fdesc)
    FUNC_6(VAR_11);
  }

  FUNC_4(&VAR_11->vchan.lock);
  VAR_10 = VAR_5;
 }

 FUNC_1(VAR_9, VAR_13, VAR_1);

 return VAR_10;
}
