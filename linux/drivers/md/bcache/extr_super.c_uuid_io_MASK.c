
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uuid_entry {int invalidated; int last_reg; int first_reg; int label; int uuid; } ;
struct closure {int dummy; } ;
struct cache_set {int nr_uuids; struct uuid_entry* uuids; int uuid_write_mutex; struct closure uuid_write; } ;
struct bkey {int dummy; } ;
struct TYPE_2__ {int bi_size; } ;
struct bio {unsigned long bi_opf; struct closure* bi_private; int bi_end_io; TYPE_1__ bi_iter; } ;
typedef int buf ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct bkey*) ;
 int FUNC_2 (struct bkey*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct bio* FUNC_3 (struct cache_set*) ;
 int FUNC_4 (struct bio*,struct uuid_entry*) ;
 int FUNC_5 (char*,int,struct bkey*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct bio*,struct cache_set*,struct bkey*,unsigned int) ;
 int FUNC_8 (struct bio*,int,unsigned long) ;
 int FUNC_9 (struct closure*,struct closure*) ;
 int FUNC_10 (struct closure*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_13(struct cache_set *VAR_5, int VAR_6, unsigned long VAR_7,
      struct bkey *VAR_8, struct closure *VAR_9)
{
 struct closure *VAR_10 = &VAR_5->uuid_write;
 struct uuid_entry *VAR_11;
 unsigned int VAR_12;
 char VAR_13[80];

 FUNC_0(!VAR_9);
 FUNC_11(&VAR_5->uuid_write_mutex);
 FUNC_9(VAR_10, VAR_9);

 for (VAR_12 = 0; VAR_12 < FUNC_1(VAR_8); VAR_12++) {
  struct bio *VAR_14 = FUNC_3(VAR_5);

  VAR_14->bi_opf = VAR_2 | VAR_0 | VAR_7;
  VAR_14->bi_iter.bi_size = FUNC_2(VAR_8) << 9;

  VAR_14->bi_end_io = VAR_3;
  VAR_14->bi_private = VAR_10;
  FUNC_8(VAR_14, VAR_6, VAR_2|VAR_0|VAR_7);
  FUNC_4(VAR_14, VAR_5->uuids);

  FUNC_7(VAR_14, VAR_5, VAR_8, VAR_12);

  if (VAR_6 != VAR_1)
   break;
 }

 FUNC_5(VAR_13, sizeof(VAR_13), VAR_8);
 FUNC_12("%s UUIDs at %s", VAR_6 == VAR_1 ? "wrote" : "read", VAR_13);

 for (VAR_11 = VAR_5->uuids; VAR_11 < VAR_5->uuids + VAR_5->nr_uuids; VAR_11++)
  if (!FUNC_6(VAR_11->uuid, 16))
   FUNC_12("Slot %zi: %pU: %s: 1st: %u last: %u inv: %u",
     VAR_11 - VAR_5->uuids, VAR_11->uuid, VAR_11->label,
     VAR_11->first_reg, VAR_11->last_reg, VAR_11->invalidated);

 FUNC_10(VAR_10, VAR_4);
}
