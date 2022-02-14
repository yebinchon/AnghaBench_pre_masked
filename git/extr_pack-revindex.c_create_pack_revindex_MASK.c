
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct packed_git {unsigned int num_objects; char* index_data; int index_version; int pack_size; TYPE_2__* revindex; } ;
struct TYPE_5__ {int offset; unsigned int nr; } ;
struct TYPE_4__ {unsigned int rawsz; } ;


 int FUNC_0 (TYPE_2__*,unsigned int const) ;
 int FUNC_1 (int const*) ;
 void* FUNC_2 (int const) ;
 int FUNC_3 (TYPE_2__*,unsigned int const,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_4(struct packed_git *VAR_1)
{
 const unsigned VAR_2 = VAR_1->num_objects;
 unsigned VAR_3;
 const char *VAR_4 = VAR_1->index_data;
 const unsigned VAR_5 = VAR_0->rawsz;

 FUNC_0(VAR_1->revindex, VAR_2 + 1);
 VAR_4 += 4 * 256;

 if (VAR_1->index_version > 1) {
  const uint32_t *VAR_6 =
   (uint32_t *)(VAR_4 + 8 + VAR_1->num_objects * (VAR_5 + 4));
  const uint32_t *VAR_7 = VAR_6 + VAR_1->num_objects;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
   const uint32_t VAR_8 = FUNC_2(*VAR_6++);
   if (!(VAR_8 & 0x80000000)) {
    VAR_1->revindex[VAR_3].offset = VAR_8;
   } else {
    VAR_1->revindex[VAR_3].offset = FUNC_1(VAR_7);
    VAR_7 += 2;
   }
   VAR_1->revindex[VAR_3].nr = VAR_3;
  }
 } else {
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
   const uint32_t VAR_9 = *((uint32_t *)(VAR_4 + (VAR_5 + 4) * VAR_3));
   VAR_1->revindex[VAR_3].offset = FUNC_2(VAR_9);
   VAR_1->revindex[VAR_3].nr = VAR_3;
  }
 }





 VAR_1->revindex[VAR_2].offset = VAR_1->pack_size - VAR_5;
 VAR_1->revindex[VAR_2].nr = -1;
 FUNC_3(VAR_1->revindex, VAR_2, VAR_1->pack_size);
}
