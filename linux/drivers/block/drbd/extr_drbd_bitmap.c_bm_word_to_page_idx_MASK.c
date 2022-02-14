
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_bitmap {unsigned int bm_number_of_pages; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_1(struct drbd_bitmap *VAR_2, unsigned long VAR_3)
{

 unsigned int VAR_4 = VAR_3 >> (VAR_1 - VAR_0 + 3);
 FUNC_0(VAR_4 >= VAR_2->bm_number_of_pages);
 return VAR_4;
}
