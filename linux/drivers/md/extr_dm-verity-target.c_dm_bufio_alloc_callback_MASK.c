
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_buffer {int dummy; } ;
struct buffer_aux {scalar_t__ hash_verified; } ;


 struct buffer_aux* FUNC_0 (struct dm_buffer*) ;

__attribute__((used)) static void FUNC_1(struct dm_buffer *VAR_0)
{
 struct buffer_aux *VAR_1 = FUNC_0(VAR_0);

 VAR_1->hash_verified = 0;
}
