
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct txx9dmac_dev {int descsize; } ;
struct TYPE_2__ {int phys; int flags; int tx_submit; } ;
struct txx9dmac_desc {int hwdesc; TYPE_1__ txd; int tx_list; } ;
struct txx9dmac_chan {int chan; struct txx9dmac_dev* ddev; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 struct txx9dmac_desc* FUNC_4 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct txx9dmac_desc *FUNC_5(struct txx9dmac_chan *VAR_3,
       gfp_t VAR_4)
{
 struct txx9dmac_dev *VAR_5 = VAR_3->ddev;
 struct txx9dmac_desc *VAR_6;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_4);
 if (!VAR_6)
  return ((void*)0);
 FUNC_0(&VAR_6->tx_list);
 FUNC_2(&VAR_6->txd, &VAR_3->chan);
 VAR_6->txd.tx_submit = VAR_2;

 VAR_6->txd.flags = VAR_0;
 VAR_6->txd.phys = FUNC_3(FUNC_1(&VAR_3->chan), &VAR_6->hwdesc,
     VAR_5->descsize, VAR_1);
 return VAR_6;
}
