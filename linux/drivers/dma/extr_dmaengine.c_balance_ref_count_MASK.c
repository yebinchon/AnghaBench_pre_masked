
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct dma_chan {scalar_t__ client_count; } ;


 int FUNC_0 (struct module*) ;
 struct module* FUNC_1 (struct dma_chan*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(struct dma_chan *VAR_1)
{
 struct module *VAR_2 = FUNC_1(VAR_1);

 while (VAR_1->client_count < VAR_0) {
  FUNC_0(VAR_2);
  VAR_1->client_count++;
 }
}
