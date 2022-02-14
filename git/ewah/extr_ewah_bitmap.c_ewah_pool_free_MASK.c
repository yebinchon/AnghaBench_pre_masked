
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_bitmap {scalar_t__ alloc_size; } ;


 scalar_t__ VAR_0 ;
 struct ewah_bitmap** VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ewah_bitmap*) ;
 int FUNC_1 (struct ewah_bitmap*) ;

void FUNC_2(struct ewah_bitmap *VAR_3)
{
 if (VAR_3 == ((void*)0))
  return;

 if (VAR_2 == VAR_0 ||
  VAR_3->alloc_size == 0) {
  FUNC_1(VAR_3);
  return;
 }

 FUNC_0(VAR_3);
 VAR_1[VAR_2++] = VAR_3;
}
