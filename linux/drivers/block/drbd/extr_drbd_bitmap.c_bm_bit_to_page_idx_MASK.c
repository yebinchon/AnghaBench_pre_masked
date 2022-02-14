
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct drbd_bitmap {unsigned int bm_number_of_pages; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(struct drbd_bitmap *VAR_1, u64 VAR_2)
{

 unsigned int VAR_3 = VAR_2 >> (VAR_0 + 3);
 FUNC_0(VAR_3 >= VAR_1->bm_number_of_pages);
 return VAR_3;
}
