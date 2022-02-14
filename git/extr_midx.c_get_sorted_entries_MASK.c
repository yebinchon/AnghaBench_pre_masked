
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct pack_midx_entry {int oid; } ;
struct pack_info {TYPE_1__* p; } ;
struct multi_pack_index {size_t num_packs; int * chunk_oid_fanout; } ;
struct TYPE_3__ {scalar_t__ num_objects; } ;


 int FUNC_0 (struct pack_midx_entry*,size_t) ;
 int FUNC_1 (struct pack_midx_entry*,size_t,size_t) ;
 int FUNC_2 (struct pack_midx_entry*,size_t,int ) ;
 int FUNC_3 (size_t,TYPE_1__*,size_t,struct pack_midx_entry*) ;
 int FUNC_4 (struct pack_midx_entry*) ;
 size_t FUNC_5 (TYPE_1__*,size_t) ;
 int FUNC_6 (struct pack_midx_entry*,struct pack_midx_entry*,int) ;
 int VAR_0 ;
 int FUNC_7 (struct multi_pack_index*,struct pack_midx_entry*,size_t) ;
 size_t FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int *) ;

__attribute__((used)) static struct pack_midx_entry *FUNC_10(struct multi_pack_index *VAR_1,
        struct pack_info *VAR_2,
        uint32_t VAR_3,
        uint32_t *VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10 = 0;
 struct pack_midx_entry *VAR_11 = ((void*)0);
 struct pack_midx_entry *VAR_12 = ((void*)0);
 uint32_t VAR_13 = VAR_1 ? VAR_1->num_packs : 0;

 for (VAR_6 = VAR_13; VAR_6 < VAR_3; VAR_6++)
  VAR_10 += VAR_2[VAR_6].p->num_objects;






 VAR_9 = VAR_8 = VAR_10 > 3200 ? VAR_10 / 200 : 16;

 FUNC_0(VAR_11, VAR_8);
 FUNC_0(VAR_12, VAR_9);
 *VAR_4 = 0;

 for (VAR_5 = 0; VAR_5 < 256; VAR_5++) {
  uint32_t VAR_14 = 0;

  if (VAR_1) {
   uint32_t VAR_15 = 0, VAR_16;

   if (VAR_5)
    VAR_15 = FUNC_8(VAR_1->chunk_oid_fanout[VAR_5 - 1]);
   VAR_16 = FUNC_8(VAR_1->chunk_oid_fanout[VAR_5]);

   for (VAR_7 = VAR_15; VAR_7 < VAR_16; VAR_7++) {
    FUNC_1(VAR_11, VAR_14 + 1, VAR_8);
    FUNC_7(VAR_1,
          &VAR_11[VAR_14],
          VAR_7);
    VAR_14++;
   }
  }

  for (VAR_6 = VAR_13; VAR_6 < VAR_3; VAR_6++) {
   uint32_t VAR_17 = 0, VAR_18;

   if (VAR_5)
    VAR_17 = FUNC_5(VAR_2[VAR_6].p, VAR_5 - 1);
   VAR_18 = FUNC_5(VAR_2[VAR_6].p, VAR_5);

   for (VAR_7 = VAR_17; VAR_7 < VAR_18; VAR_7++) {
    FUNC_1(VAR_11, VAR_14 + 1, VAR_8);
    FUNC_3(VAR_6, VAR_2[VAR_6].p, VAR_7, &VAR_11[VAR_14]);
    VAR_14++;
   }
  }

  FUNC_2(VAR_11, VAR_14, VAR_0);





  for (VAR_7 = 0; VAR_7 < VAR_14; VAR_7++) {
   if (VAR_7 && FUNC_9(&VAR_11[VAR_7 - 1].oid,
      &VAR_11[VAR_7].oid))
    continue;

   FUNC_1(VAR_12, *VAR_4 + 1, VAR_9);
   FUNC_6(&VAR_12[*VAR_4],
          &VAR_11[VAR_7],
          sizeof(struct pack_midx_entry));
   (*VAR_4)++;
  }
 }

 FUNC_4(VAR_11);
 return VAR_12;
}
