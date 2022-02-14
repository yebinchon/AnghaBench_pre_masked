
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct revindex_entry {int nr; } ;
struct packed_git {size_t num_objects; TYPE_2__* revindex; } ;
struct bitmap_index {size_t reuse_objects; struct packed_git* pack; struct bitmap* result; TYPE_1__* reverse_index; } ;
struct bitmap {size_t word_alloc; int * words; } ;
typedef int off_t ;
typedef int eword_t ;
struct TYPE_4__ {int offset; } ;
struct TYPE_3__ {struct revindex_entry* revindex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bitmap*) ;
 double const FUNC_1 (struct bitmap*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 char* FUNC_4 (unsigned char const*) ;
 unsigned char* FUNC_5 (struct packed_git*,int ) ;
 int VAR_1 ;

int FUNC_6(struct bitmap_index *VAR_2,
           struct packed_git **VAR_3,
           uint32_t *VAR_4,
           off_t *VAR_5)
{




 static const double VAR_6 = 0.9;

 struct bitmap *VAR_7 = VAR_2->result;
 uint32_t VAR_8;
 uint32_t VAR_9, VAR_10 = 0;

 FUNC_0(VAR_7);

 for (VAR_9 = 0; VAR_9 < VAR_7->word_alloc; ++VAR_9) {
  if (VAR_7->words[VAR_9] != (eword_t)~0) {
   VAR_10 += FUNC_2(~VAR_7->words[VAR_9]);
   break;
  }

  VAR_10 += VAR_0;
 }
 if (!VAR_10)
  return -1;

 if (VAR_10 >= VAR_2->pack->num_objects) {
  VAR_2->reuse_objects = *VAR_4 = VAR_2->pack->num_objects;
  *VAR_5 = -1;
  *VAR_3 = VAR_2->pack;
  return 0;
 }

 VAR_8 = FUNC_1(VAR_2->result) * VAR_6;

 if (VAR_10 < VAR_8)
  return -1;

 VAR_2->reuse_objects = *VAR_4 = VAR_10;
 *VAR_5 = VAR_2->pack->revindex[VAR_10].offset;
 *VAR_3 = VAR_2->pack;

 return 0;
}
