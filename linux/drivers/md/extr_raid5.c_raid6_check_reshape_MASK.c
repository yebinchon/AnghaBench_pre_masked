
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int new_chunk_sectors; scalar_t__ new_layout; int array_sectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mddev *VAR_2)
{
 int VAR_3 = VAR_2->new_chunk_sectors;

 if (VAR_2->new_layout >= 0 && !FUNC_0(VAR_2->new_layout))
  return -VAR_0;
 if (VAR_3 > 0) {
  if (!FUNC_2(VAR_3))
   return -VAR_0;
  if (VAR_3 < (VAR_1 >> 9))
   return -VAR_0;
  if (VAR_2->array_sectors & (VAR_3-1))

   return -VAR_0;
 }


 return FUNC_1(VAR_2);
}
