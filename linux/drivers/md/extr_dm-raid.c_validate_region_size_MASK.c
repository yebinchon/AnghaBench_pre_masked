
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int chunksize; } ;
struct TYPE_6__ {unsigned long chunk_sectors; TYPE_2__ bitmap_info; } ;
struct raid_set {TYPE_3__ md; TYPE_1__* ti; } ;
struct TYPE_4__ {int len; char* error; } ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (struct raid_set*) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static int FUNC_6(struct raid_set *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = VAR_1->ti->len / (1 << 21);

 if (FUNC_4(VAR_1))
  return 0;

 if (!VAR_2) {



  if (VAR_3 > (1 << 13)) {

   VAR_2 = FUNC_3(VAR_3);
   FUNC_1("Choosing default region size of %lu sectors",
          VAR_2);
  } else {
   FUNC_1("Choosing default region size of 4MiB");
   VAR_2 = 1 << 13;
  }
 } else {



  if (VAR_2 > VAR_1->ti->len) {
   VAR_1->ti->error = "Supplied region size is too large";
   return -VAR_0;
  }

  if (VAR_2 < VAR_3) {
   FUNC_0("Supplied region_size (%lu sectors) below minimum (%lu)",
         VAR_2, VAR_3);
   VAR_1->ti->error = "Supplied region size is too small";
   return -VAR_0;
  }

  if (!FUNC_2(VAR_2)) {
   VAR_1->ti->error = "Region size is not a power of 2";
   return -VAR_0;
  }

  if (VAR_2 < VAR_1->md.chunk_sectors) {
   VAR_1->ti->error = "Region size is smaller than the chunk size";
   return -VAR_0;
  }
 }




 VAR_1->md.bitmap_info.chunksize = FUNC_5(VAR_2);

 return 0;
}
