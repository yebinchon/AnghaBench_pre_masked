
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ u_int ;
struct bounce_zone {int free_bpages; int total_bpages; int bounce_page_list; int lowaddr; } ;
struct bounce_page {scalar_t__ vaddr; int busaddr; } ;
typedef TYPE_1__* bus_dma_tag_t ;
struct TYPE_3__ {struct bounce_zone* bounce_zone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct bounce_page*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int,unsigned long,int ,int ,int ) ;
 int FUNC_2 (struct bounce_page*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_7(bus_dma_tag_t VAR_7, u_int VAR_8)
{
 struct bounce_zone *VAR_9;
 int VAR_10;

 VAR_9 = VAR_7->bounce_zone;
 VAR_10 = 0;
 while (VAR_8 > 0) {
  struct bounce_page *VAR_11;

  VAR_11 = (struct bounce_page *)FUNC_3(sizeof(*VAR_11), VAR_0,
           VAR_1 | VAR_2);

  if (VAR_11 == ((void*)0))
   break;
  VAR_11->vaddr = (vm_offset_t)FUNC_1(VAR_3, VAR_0,
      VAR_1, 0ul, VAR_9->lowaddr, VAR_3, 0);
  if (VAR_11->vaddr == 0) {
   FUNC_2(VAR_11, VAR_0);
   break;
  }
  VAR_11->busaddr = FUNC_6(VAR_11->vaddr);
  FUNC_4(&VAR_4);
  FUNC_0(&VAR_9->bounce_page_list, VAR_11, VAR_5);
  VAR_6++;
  VAR_9->total_bpages++;
  VAR_9->free_bpages++;
  FUNC_5(&VAR_4);
  VAR_10++;
  VAR_8--;
 }
 return (VAR_10);
}
