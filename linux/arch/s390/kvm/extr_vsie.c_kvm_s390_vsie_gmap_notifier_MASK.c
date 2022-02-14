
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long prefix; scalar_t__ mso; } ;
struct vsie_page {TYPE_3__ scb_s; int gmap; } ;
struct page {struct kvm* private; } ;
struct TYPE_4__ {int page_count; int * pages; } ;
struct TYPE_5__ {TYPE_1__ vsie; } ;
struct kvm {TYPE_2__ arch; } ;
struct gmap {struct kvm* private; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 struct vsie_page* FUNC_2 (struct page*) ;
 int FUNC_3 (struct vsie_page*) ;

void FUNC_4(struct gmap *VAR_2, unsigned long VAR_3,
     unsigned long VAR_4)
{
 struct kvm *VAR_5 = VAR_2->private;
 struct vsie_page *VAR_6;
 unsigned long VAR_7;
 struct page *VAR_8;
 int VAR_9;

 if (!FUNC_1(VAR_2))
  return;
 if (VAR_3 >= 1UL << 31)

  return;





 for (VAR_9 = 0; VAR_9 < VAR_5->arch.vsie.page_count; VAR_9++) {
  VAR_8 = FUNC_0(VAR_5->arch.vsie.pages[VAR_9]);
  if (!VAR_8)
   continue;
  VAR_6 = FUNC_2(VAR_8);
  if (FUNC_0(VAR_6->gmap) != VAR_2)
   continue;
  VAR_7 = VAR_6->scb_s.prefix << VAR_0;

  VAR_7 += VAR_6->scb_s.mso;
  if (VAR_7 <= VAR_4 && VAR_3 <= VAR_7 + 2 * VAR_1 - 1)
   FUNC_3(VAR_6);
 }
}
