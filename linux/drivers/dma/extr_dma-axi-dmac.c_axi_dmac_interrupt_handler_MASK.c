
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct TYPE_5__ {TYPE_1__ vchan; } ;
struct axi_dmac {TYPE_2__ chan; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (struct axi_dmac*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,unsigned int) ;
 int FUNC_3 (struct axi_dmac*,int ,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct axi_dmac *VAR_8 = VAR_7;
 unsigned int VAR_9;
 bool VAR_10 = 0;

 VAR_9 = FUNC_0(VAR_8, VAR_2);
 if (!VAR_9)
  return VAR_5;

 FUNC_3(VAR_8, VAR_2, VAR_9);

 FUNC_4(&VAR_8->chan.vchan.lock);

 if (VAR_9 & VAR_0) {
  unsigned int VAR_11;

  VAR_11 = FUNC_0(VAR_8, VAR_3);
  VAR_10 = FUNC_2(&VAR_8->chan, VAR_11);
 }

 if ((VAR_9 & VAR_1) || VAR_10)
  FUNC_1(&VAR_8->chan);
 FUNC_5(&VAR_8->chan.vchan.lock);

 return VAR_4;
}
