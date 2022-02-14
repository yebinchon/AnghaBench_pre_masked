
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef unsigned long long u32 ;
struct ib_field {int size_bits; int offset_bits; int struct_offset_bytes; int offset_words; scalar_t__ struct_size_bytes; int field_name; } ;
typedef int __be64 ;
typedef int __be32 ;


 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (unsigned long long) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int,scalar_t__,void*) ;

void FUNC_6(const struct ib_field *VAR_0,
      int VAR_1,
      void *VAR_2,
      void *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
  if (VAR_0[VAR_4].size_bits <= 32) {
   int VAR_5;
   u32 VAR_6;
   __be32 VAR_7;
   __be32 *VAR_8;

   VAR_5 = 32 - VAR_0[VAR_4].offset_bits - VAR_0[VAR_4].size_bits;
   if (VAR_0[VAR_4].struct_size_bytes)
    VAR_6 = FUNC_5(VAR_0[VAR_4].struct_offset_bytes,
       VAR_0[VAR_4].struct_size_bytes,
       VAR_2) << VAR_5;
   else
    VAR_6 = 0;

   VAR_7 = FUNC_0(((1ull << VAR_0[VAR_4].size_bits) - 1) << VAR_5);
   VAR_8 = (__be32 *) VAR_3 + VAR_0[VAR_4].offset_words;
   *VAR_8 = (*VAR_8 & ~VAR_7) | (FUNC_0(VAR_6) & VAR_7);
  } else if (VAR_0[VAR_4].size_bits <= 64) {
   int VAR_9;
   u64 VAR_10;
   __be64 VAR_11;
   __be64 *VAR_12;

   VAR_9 = 64 - VAR_0[VAR_4].offset_bits - VAR_0[VAR_4].size_bits;
   if (VAR_0[VAR_4].struct_size_bytes)
    VAR_10 = FUNC_5(VAR_0[VAR_4].struct_offset_bytes,
       VAR_0[VAR_4].struct_size_bytes,
       VAR_2) << VAR_9;
   else
    VAR_10 = 0;

   VAR_11 = FUNC_1((~0ull >> (64 - VAR_0[VAR_4].size_bits)) << VAR_9);
   VAR_12 = (__be64 *) ((__be32 *) VAR_3 + VAR_0[VAR_4].offset_words);
   *VAR_12 = (*VAR_12 & ~VAR_11) | (FUNC_1(VAR_10) & VAR_11);
  } else {
   if (VAR_0[VAR_4].offset_bits % 8 ||
       VAR_0[VAR_4].size_bits % 8) {
    FUNC_4("Structure field %s of size %d bits is not byte-aligned\n",
     VAR_0[VAR_4].field_name, VAR_0[VAR_4].size_bits);
   }

   if (VAR_0[VAR_4].struct_size_bytes)
    FUNC_2(VAR_3 + VAR_0[VAR_4].offset_words * 4 +
           VAR_0[VAR_4].offset_bits / 8,
           VAR_2 + VAR_0[VAR_4].struct_offset_bytes,
           VAR_0[VAR_4].size_bits / 8);
   else
    FUNC_3(VAR_3 + VAR_0[VAR_4].offset_words * 4 +
           VAR_0[VAR_4].offset_bits / 8,
           0,
           VAR_0[VAR_4].size_bits / 8);
  }
 }
}
