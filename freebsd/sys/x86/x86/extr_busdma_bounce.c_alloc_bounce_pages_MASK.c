
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ u_int ;
struct bounce_zone {int free_bpages; int total_bpages; int bounce_page_list; int lowaddr; } ;
struct bounce_page {scalar_t__ vaddr; int busaddr; } ;
typedef TYPE_2__* bus_dma_tag_t ;
struct TYPE_4__ {int domain; } ;
struct TYPE_5__ {TYPE_1__ common; struct bounce_zone* bounce_zone; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct bounce_page*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int,unsigned long,int ,int ,int ) ;
 int FUNC_3 (struct bounce_page*,int ) ;
 int VAR_5 ;
 struct bounce_page* FUNC_4 (int,int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_8(bus_dma_tag_t VAR_7, u_int VAR_8)
{
 struct bounce_zone *VAR_9;
 int VAR_10;

 VAR_9 = VAR_7->bounce_zone;
 VAR_10 = 0;
 while (VAR_8 > 0) {
  struct bounce_page *VAR_11;

  VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_0,
      FUNC_0(VAR_7->common.domain), VAR_1 | VAR_2);

  if (VAR_11 == ((void*)0))
   break;
  VAR_11->vaddr = (vm_offset_t)FUNC_2(VAR_3,
      VAR_0, FUNC_0(VAR_7->common.domain), VAR_1,
      0ul, VAR_9->lowaddr, VAR_3, 0);
  if (VAR_11->vaddr == 0) {
   FUNC_3(VAR_11, VAR_0);
   break;
  }
  VAR_11->busaddr = FUNC_7(VAR_11->vaddr);
  FUNC_5(&VAR_4);
  FUNC_1(&VAR_9->bounce_page_list, VAR_11, VAR_5);
  VAR_6++;
  VAR_9->total_bpages++;
  VAR_9->free_bpages++;
  FUNC_6(&VAR_4);
  VAR_10++;
  VAR_8--;
 }
 return (VAR_10);
}
