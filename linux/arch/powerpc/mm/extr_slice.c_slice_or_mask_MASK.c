
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slice_mask {int low_slices; int high_slices; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct slice_mask *VAR_1,
     const struct slice_mask *VAR_2,
     const struct slice_mask *VAR_3)
{
 VAR_1->low_slices = VAR_2->low_slices | VAR_3->low_slices;
 if (!VAR_0)
  return;
 FUNC_0(VAR_1->high_slices, VAR_2->high_slices, VAR_3->high_slices, VAR_0);
}
