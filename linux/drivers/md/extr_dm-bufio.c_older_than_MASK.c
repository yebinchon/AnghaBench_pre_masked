
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_buffer {scalar_t__ last_accessed; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct dm_buffer *VAR_1, unsigned long VAR_2)
{
 return FUNC_0(VAR_0, VAR_1->last_accessed + VAR_2);
}
