
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct multi_pack_index {scalar_t__ chunk_object_offsets; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static uint32_t FUNC_1(struct multi_pack_index *VAR_1, uint32_t VAR_2)
{
 return FUNC_0(VAR_1->chunk_object_offsets + VAR_2 * VAR_0);
}
