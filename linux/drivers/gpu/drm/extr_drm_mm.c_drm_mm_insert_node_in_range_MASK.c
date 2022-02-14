
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct drm_mm_node {scalar_t__ hole_size; unsigned long color; int allocated; int node_list; scalar_t__ start; scalar_t__ size; struct drm_mm* mm; } ;
struct drm_mm {int (* color_adjust ) (struct drm_mm_node*,unsigned long,scalar_t__*,scalar_t__*) ;int holes_size; } ;
typedef enum drm_mm_insert_mode { ____Placeholder_drm_mm_insert_mode } drm_mm_insert_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct drm_mm_node*) ;
 int FUNC_2 (struct drm_mm_node* const) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_4 (struct drm_mm_node*,struct drm_mm_node* const) ;
 struct drm_mm_node* FUNC_5 (struct drm_mm* const,scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 struct drm_mm_node* FUNC_11 (struct drm_mm* const,struct drm_mm_node*,int) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct drm_mm_node*) ;
 int FUNC_15 (struct drm_mm_node* const) ;
 int FUNC_16 (struct drm_mm_node*,unsigned long,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_17 (int) ;

int FUNC_18(struct drm_mm * const VAR_4,
    struct drm_mm_node * const VAR_5,
    u64 VAR_6, u64 VAR_7,
    unsigned long VAR_8,
    u64 VAR_9, u64 VAR_10,
    enum drm_mm_insert_mode VAR_11)
{
 struct drm_mm_node *VAR_12;
 u64 VAR_13;
 bool VAR_14;

 FUNC_0(VAR_9 > VAR_10);

 if (FUNC_17(VAR_6 == 0 || VAR_10 - VAR_9 < VAR_6))
  return -VAR_3;

 if (FUNC_13(FUNC_12(&VAR_4->holes_size)) < VAR_6)
  return -VAR_3;

 if (VAR_7 <= 1)
  VAR_7 = 0;

 VAR_14 = VAR_11 & VAR_2;
 VAR_11 &= ~VAR_2;

 VAR_13 = FUNC_6(VAR_7) ? VAR_7 - 1 : 0;
 for (VAR_12 = FUNC_5(VAR_4, VAR_9, VAR_10, VAR_6, VAR_11);
      VAR_12;
      VAR_12 = VAR_14 ? ((void*)0) : FUNC_11(VAR_4, VAR_12, VAR_11)) {
  u64 VAR_15 = FUNC_1(VAR_12);
  u64 VAR_16 = VAR_15 + VAR_12->hole_size;
  u64 VAR_17, VAR_18;
  u64 VAR_19, VAR_20;

  if (VAR_11 == VAR_1 && VAR_15 >= VAR_10)
   break;

  if (VAR_11 == VAR_0 && VAR_16 <= VAR_9)
   break;

  VAR_19 = VAR_15;
  VAR_20 = VAR_16;
  if (VAR_4->color_adjust)
   VAR_4->color_adjust(VAR_12, VAR_8, &VAR_19, &VAR_20);

  VAR_17 = FUNC_9(VAR_19, VAR_9);
  VAR_18 = FUNC_10(VAR_20, VAR_10);

  if (VAR_18 <= VAR_17 || VAR_18 - VAR_17 < VAR_6)
   continue;

  if (VAR_11 == VAR_0)
   VAR_17 = VAR_18 - VAR_6;

  if (VAR_7) {
   u64 VAR_21;

   if (FUNC_7(VAR_13))
    VAR_21 = VAR_17 & VAR_13;
   else
    FUNC_3(VAR_17, VAR_7, &VAR_21);
   if (VAR_21) {
    VAR_17 -= VAR_21;
    if (VAR_11 != VAR_0)
     VAR_17 += VAR_7;

    if (VAR_17 < FUNC_9(VAR_19, VAR_9) ||
        FUNC_10(VAR_20, VAR_10) - VAR_17 < VAR_6)
     continue;

    if (VAR_18 <= VAR_17 ||
        VAR_18 - VAR_17 < VAR_6)
     continue;
   }
  }

  VAR_5->mm = VAR_4;
  VAR_5->size = VAR_6;
  VAR_5->start = VAR_17;
  VAR_5->color = VAR_8;
  VAR_5->hole_size = 0;

  FUNC_8(&VAR_5->node_list, &VAR_12->node_list);
  FUNC_4(VAR_12, VAR_5);
  VAR_5->allocated = 1;

  FUNC_14(VAR_12);
  if (VAR_17 > VAR_15)
   FUNC_2(VAR_12);
  if (VAR_17 + VAR_6 < VAR_16)
   FUNC_2(VAR_5);

  FUNC_15(VAR_5);
  return 0;
 }

 return -VAR_3;
}
