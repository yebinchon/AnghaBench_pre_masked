
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct revindex_entry {int offset; int nr; } ;
struct packed_git {int index_version; } ;
struct pack_window {int dummy; } ;
struct TYPE_6__ {int offset; int oid; } ;
struct object_entry {int in_pack_offset; int in_pack_header_size; TYPE_1__ idx; } ;
struct hashfile {int dummy; } ;
typedef int off_t ;
typedef int header ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
typedef int dheader ;
struct TYPE_7__ {unsigned char* hash; } ;
struct TYPE_8__ {int offset; TYPE_2__ oid; } ;
struct TYPE_10__ {TYPE_3__ idx; } ;
struct TYPE_9__ {unsigned int rawsz; } ;


 TYPE_5__* FUNC_0 (struct object_entry*) ;
 struct packed_git* FUNC_1 (struct object_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_2 (struct object_entry*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (struct packed_git*,struct pack_window**,int,int,int ) ;
 scalar_t__ FUNC_5 (struct packed_git*,struct pack_window**,int,int,unsigned long) ;
 int FUNC_6 (struct hashfile*,struct packed_git*,struct pack_window**,int,int) ;
 unsigned int FUNC_7 (unsigned char*,int,int,unsigned long) ;
 int FUNC_8 (int ,int ) ;
 struct revindex_entry* FUNC_9 (struct packed_git*,int) ;
 int FUNC_10 (struct hashfile*,unsigned char*,unsigned int const) ;
 int FUNC_11 (struct object_entry*) ;
 int FUNC_12 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* VAR_7 ;
 int FUNC_13 (struct pack_window**) ;
 int FUNC_14 (struct hashfile*,struct object_entry*,unsigned long,int) ;

__attribute__((used)) static off_t FUNC_15(struct hashfile *VAR_8, struct object_entry *VAR_9,
    unsigned long VAR_10, int VAR_11)
{
 struct packed_git *VAR_12 = FUNC_1(VAR_9);
 struct pack_window *VAR_13 = ((void*)0);
 struct revindex_entry *VAR_14;
 off_t VAR_15;
 enum object_type VAR_16 = FUNC_11(VAR_9);
 off_t VAR_17;
 unsigned char VAR_18[VAR_0],
        VAR_19[VAR_0];
 unsigned VAR_20;
 const unsigned VAR_21 = VAR_7->rawsz;
 unsigned long VAR_22 = FUNC_2(VAR_9);

 if (FUNC_0(VAR_9))
  VAR_16 = (VAR_3 && FUNC_0(VAR_9)->idx.offset) ?
   VAR_1 : VAR_2;
 VAR_20 = FUNC_7(VAR_18, sizeof(VAR_18),
           VAR_16, VAR_22);

 VAR_15 = VAR_9->in_pack_offset;
 VAR_14 = FUNC_9(VAR_12, VAR_15);
 VAR_17 = VAR_14[1].offset - VAR_15;
 if (!VAR_4 && VAR_12->index_version > 1 &&
     FUNC_4(VAR_12, &VAR_13, VAR_15, VAR_17, VAR_14->nr)) {
  FUNC_8(FUNC_3("bad packed object CRC for %s"),
        FUNC_12(&VAR_9->idx.oid));
  FUNC_13(&VAR_13);
  return FUNC_14(VAR_8, VAR_9, VAR_10, VAR_11);
 }

 VAR_15 += VAR_9->in_pack_header_size;
 VAR_17 -= VAR_9->in_pack_header_size;

 if (!VAR_4 && VAR_12->index_version == 1 &&
     FUNC_5(VAR_12, &VAR_13, VAR_15, VAR_17, VAR_22)) {
  FUNC_8(FUNC_3("corrupt packed object for %s"),
        FUNC_12(&VAR_9->idx.oid));
  FUNC_13(&VAR_13);
  return FUNC_14(VAR_8, VAR_9, VAR_10, VAR_11);
 }

 if (VAR_16 == VAR_1) {
  off_t VAR_23 = VAR_9->idx.offset - FUNC_0(VAR_9)->idx.offset;
  unsigned VAR_24 = sizeof(VAR_19) - 1;
  VAR_19[VAR_24] = VAR_23 & 127;
  while (VAR_23 >>= 7)
   VAR_19[--VAR_24] = 128 | (--VAR_23 & 127);
  if (VAR_10 && VAR_20 + sizeof(VAR_19) - VAR_24 + VAR_17 + VAR_21 >= VAR_10) {
   FUNC_13(&VAR_13);
   return 0;
  }
  FUNC_10(VAR_8, VAR_18, VAR_20);
  FUNC_10(VAR_8, VAR_19 + VAR_24, sizeof(VAR_19) - VAR_24);
  VAR_20 += sizeof(VAR_19) - VAR_24;
  VAR_6++;
 } else if (VAR_16 == VAR_2) {
  if (VAR_10 && VAR_20 + VAR_21 + VAR_17 + VAR_21 >= VAR_10) {
   FUNC_13(&VAR_13);
   return 0;
  }
  FUNC_10(VAR_8, VAR_18, VAR_20);
  FUNC_10(VAR_8, FUNC_0(VAR_9)->idx.oid.hash, VAR_21);
  VAR_20 += VAR_21;
  VAR_6++;
 } else {
  if (VAR_10 && VAR_20 + VAR_17 + VAR_21 >= VAR_10) {
   FUNC_13(&VAR_13);
   return 0;
  }
  FUNC_10(VAR_8, VAR_18, VAR_20);
 }
 FUNC_6(VAR_8, VAR_12, &VAR_13, VAR_15, VAR_17);
 FUNC_13(&VAR_13);
 VAR_5++;
 return VAR_20 + VAR_17;
}
