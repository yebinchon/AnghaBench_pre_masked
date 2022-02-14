
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tiler_block {size_t fmt; int alloc_node; int area; } ;
struct TYPE_2__ {int alloc_head; } ;


 int VAR_0 ;
 struct tiler_block* FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (struct tiler_block*) ;
 struct tiler_block* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int,int *) ;

struct tiler_block *FUNC_7(size_t VAR_8)
{
 struct tiler_block *VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1);
 int VAR_10 = (VAR_8 + VAR_3 - 1) >> VAR_2;
 unsigned long VAR_11;

 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_9->fmt = VAR_4;

 if (FUNC_6(VAR_5[VAR_4], VAR_10,
    &VAR_9->area)) {
  FUNC_1(VAR_9);
  return FUNC_0(-VAR_0);
 }

 FUNC_4(&VAR_6, VAR_11);
 FUNC_3(&VAR_9->alloc_node, &VAR_7->alloc_head);
 FUNC_5(&VAR_6, VAR_11);

 return VAR_9;
}
