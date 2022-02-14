
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bounce_page {int dummy; } ;
typedef TYPE_1__* bus_dmamap_t ;
typedef int bus_dma_tag_t ;
struct TYPE_3__ {int bpages; } ;


 struct bounce_page* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,struct bounce_page*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(bus_dma_tag_t VAR_1, bus_dmamap_t VAR_2)
{
 struct bounce_page *VAR_3;

 if (VAR_2 == ((void*)0))
  return;

 while ((VAR_3 = FUNC_0(&VAR_2->bpages)) != ((void*)0)) {
  FUNC_1(&VAR_2->bpages, VAR_0);
  FUNC_2(VAR_1, VAR_3);
 }
}
