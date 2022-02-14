
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sort_list_item {int dummy; } ;
struct sort_level {size_t start_position; int sln; size_t tosort_num; int leaves_num; size_t tosort; size_t sorted; int leaves; struct sort_level** sublevels; } ;
typedef int pthread_t ;
typedef int pthread_attr_t ;
struct TYPE_8__ {int rflag; } ;
struct TYPE_5__ {int rflag; } ;
struct TYPE_7__ {TYPE_1__ sm; } ;
struct TYPE_6__ {scalar_t__ complex_sort; scalar_t__ sflag; scalar_t__ kflag; } ;


 int FUNC_0 (int ,int,int,int (*) (void const*,void const*)) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 (int,int *) ;
 scalar_t__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (size_t,int ,int) ;
 int FUNC_3 (struct sort_level**,int ,int ) ;
 int FUNC_4 (int ,int,int,int (*) (void const*,void const*)) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct sort_level*,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int *,int ,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (struct sort_level*) ;
 int VAR_10 ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int VAR_11 ;
 int FUNC_14 (int) ;
 struct sort_level** FUNC_15 (int ) ;
 TYPE_2__ VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_16(struct sort_level *VAR_14)
{
 struct sort_level *VAR_15;

 VAR_10 = VAR_12.kflag ? VAR_4[0].sm.rflag :
     VAR_2->rflag;

 VAR_14->start_position = 0;
 VAR_14->sln = 256;
 VAR_14->sublevels = FUNC_15(VAR_11);
 FUNC_3(VAR_14->sublevels, 0, VAR_11);

 for (size_t VAR_16 = 0; VAR_16 < VAR_14->tosort_num; ++VAR_16)
  FUNC_5(VAR_14, VAR_16);

 if (VAR_14->leaves_num > 1) {
  if (VAR_5 > 1) {
   if (VAR_12.sflag) {
    FUNC_4(VAR_14->leaves, VAR_14->leaves_num,
        sizeof(struct sort_list_item *),
        (int(*)(const void *, const void *)) VAR_6);
   } else {
    FUNC_0(VAR_14->leaves, VAR_14->leaves_num,
        sizeof(struct sort_list_item *),
        (int(*)(const void *, const void *)) VAR_6);
   }
  } else if (!VAR_12.sflag && VAR_12.complex_sort) {
   FUNC_0(VAR_14->leaves, VAR_14->leaves_num,
       sizeof(struct sort_list_item *),
       (int(*)(const void *, const void *)) VAR_7);
  }
 }

 if (!VAR_10) {
  FUNC_2(VAR_14->tosort + VAR_14->start_position, VAR_14->leaves,
      VAR_14->leaves_num * sizeof(struct sort_list_item*));
  VAR_14->start_position += VAR_14->leaves_num;
  FUNC_14(VAR_14->leaves_num);

  for (size_t VAR_17 = 0; VAR_17 < VAR_14->sln; ++VAR_17) {
   VAR_15 = VAR_14->sublevels[VAR_17];

   if (VAR_15) {
    VAR_15->sorted = VAR_14->tosort;
    VAR_15->start_position = VAR_14->start_position;
    VAR_14->start_position += VAR_15->tosort_num;
    FUNC_11(VAR_15);
    VAR_14->sublevels[VAR_17] = ((void*)0);
   }
  }

 } else {
  size_t VAR_18;

  for (size_t VAR_19 = 0; VAR_19 < VAR_14->sln; ++VAR_19) {

   VAR_18 = VAR_14->sln - VAR_19 - 1;
   VAR_15 = VAR_14->sublevels[VAR_18];

   if (VAR_15) {
    VAR_15->sorted = VAR_14->tosort;
    VAR_15->start_position = VAR_14->start_position;
    VAR_14->start_position += VAR_15->tosort_num;
    FUNC_11(VAR_15);
    VAR_14->sublevels[VAR_18] = ((void*)0);
   }
  }

  FUNC_2(VAR_14->tosort + VAR_14->start_position, VAR_14->leaves,
      VAR_14->leaves_num * sizeof(struct sort_list_item*));

  FUNC_14(VAR_14->leaves_num);
 }




  FUNC_12();
}
