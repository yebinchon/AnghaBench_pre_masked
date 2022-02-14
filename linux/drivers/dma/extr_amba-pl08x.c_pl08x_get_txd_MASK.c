
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl08x_txd {int dsg_list; } ;
struct pl08x_dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pl08x_txd* FUNC_1 (int,int ) ;

__attribute__((used)) static struct pl08x_txd *FUNC_2(struct pl08x_dma_chan *VAR_1)
{
 struct pl08x_txd *VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);

 if (VAR_2)
  FUNC_0(&VAR_2->dsg_list);
 return VAR_2;
}
