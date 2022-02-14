
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct tiler_block {int fmt; int alloc_node; int area; } ;
typedef enum tiler_fmt { ____Placeholder_tiler_fmt } tiler_fmt ;
struct TYPE_4__ {scalar_t__ slot_w; scalar_t__ slot_h; scalar_t__ cpp; } ;
struct TYPE_3__ {int alloc_head; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 struct tiler_block* FUNC_3 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_4 (struct tiler_block*) ;
 struct tiler_block* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_5 ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__,int *) ;
 int FUNC_11 (int) ;

struct tiler_block *FUNC_12(enum tiler_fmt VAR_6, u16 VAR_7,
  u16 VAR_8, u16 VAR_9)
{
 struct tiler_block *VAR_10;
 u32 VAR_11 = 128;
 int VAR_12;
 unsigned long VAR_13;
 u32 VAR_14;

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return FUNC_3(-VAR_0);

 FUNC_1(!FUNC_11(VAR_6));


 VAR_7 = FUNC_2(VAR_7, VAR_3[VAR_6].slot_w);
 VAR_8 = FUNC_2(VAR_8, VAR_3[VAR_6].slot_h);


 VAR_14 = VAR_3[VAR_6].slot_w * VAR_3[VAR_6].cpp;
 VAR_11 = FUNC_7(VAR_11, VAR_14);
 VAR_9 = (VAR_9 > VAR_11) ? FUNC_0(VAR_9, VAR_11) : VAR_11;
 VAR_9 /= VAR_14;

 VAR_10->fmt = VAR_6;

 VAR_12 = FUNC_10(VAR_2[VAR_6], VAR_7, VAR_8, VAR_9, -1, VAR_14,
   &VAR_10->area);
 if (VAR_12) {
  FUNC_4(VAR_10);
  return FUNC_3(-VAR_0);
 }


 FUNC_8(&VAR_4, VAR_13);
 FUNC_6(&VAR_10->alloc_node, &VAR_5->alloc_head);
 FUNC_9(&VAR_4, VAR_13);

 return VAR_10;
}
