
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct multi_pack_index {unsigned char* chunk_object_offsets; scalar_t__ chunk_large_offsets; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char const*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static off_t FUNC_4(struct multi_pack_index *VAR_2, uint32_t VAR_3)
{
 const unsigned char *VAR_4;
 uint32_t VAR_5;

 VAR_4 = VAR_2->chunk_object_offsets + VAR_3 * VAR_0;
 VAR_5 = FUNC_2(VAR_4 + sizeof(uint32_t));

 if (VAR_2->chunk_large_offsets && VAR_5 & VAR_1) {
  if (sizeof(off_t) < sizeof(uint64_t))
   FUNC_1(FUNC_0("multi-pack-index stores a 64-bit offset, but off_t is too small"));

  VAR_5 ^= VAR_1;
  return FUNC_3(VAR_2->chunk_large_offsets + sizeof(uint64_t) * VAR_5);
 }

 return VAR_5;
}
