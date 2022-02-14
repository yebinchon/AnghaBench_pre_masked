
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intsrc {scalar_t__ is_handlers; int is_event; TYPE_1__* is_pic; } ;
typedef int mask_fn ;
struct TYPE_2__ {int (* pic_vector ) (struct intsrc*) ;scalar_t__ pic_eoi_source; scalar_t__ pic_enable_source; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct intsrc** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct intsrc*,int ,int,int ,int ,int ,int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct intsrc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct intsrc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct intsrc *VAR_6)
{
 int VAR_7, VAR_8;

 FUNC_0(FUNC_3(VAR_6->is_pic), ("unregistered PIC"));
 VAR_8 = VAR_6->is_pic->pic_vector(VAR_6);
 FUNC_0(VAR_8 < VAR_5, ("IRQ %d too large (%u irqs)", VAR_8,
     VAR_5));
 if (VAR_1[VAR_8] != ((void*)0))
  return (VAR_0);
 VAR_7 = FUNC_1(&VAR_6->is_event, VAR_6, 0, VAR_8,
     VAR_3, (mask_fn)VAR_6->is_pic->pic_enable_source,
     (mask_fn)VAR_6->is_pic->pic_eoi_source, VAR_2, "irq%d:",
     VAR_8);
 if (VAR_7)
  return (VAR_7);
 FUNC_6(&VAR_4);
 if (VAR_1[VAR_8] != ((void*)0)) {
  FUNC_7(&VAR_4);
  FUNC_2(VAR_6->is_event);
  return (VAR_0);
 }
 FUNC_4(VAR_6);
 VAR_1[VAR_8] = VAR_6;
 VAR_6->is_handlers = 0;
 FUNC_7(&VAR_4);
 return (0);
}
