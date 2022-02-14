
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uintmax_t ;
struct strbuf {unsigned long len; unsigned char* buf; } ;
struct object_id {int hash; } ;
struct TYPE_8__ {int offset; int crc32; } ;
struct object_entry {int type; scalar_t__ depth; TYPE_1__ idx; void* pack_id; } ;
struct last_object {scalar_t__ depth; int offset; struct strbuf data; scalar_t__ no_swap; } ;
typedef int off_t ;
typedef int hdr ;
struct TYPE_9__ {unsigned long avail_in; scalar_t__ total_out; void* avail_out; void* next_out; void* next_in; } ;
typedef TYPE_2__ git_zstream ;
typedef int git_hash_ctx ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_10__ {unsigned long rawsz; int (* final_fn ) (int ,int *) ;int (* update_fn ) (int *,unsigned char*,unsigned long) ;int (* init_fn ) (int *) ;} ;


 int FUNC_0 (void*) ;
 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int * VAR_5 ;
 int * VAR_6 ;
 void* FUNC_4 (unsigned char*,unsigned long,unsigned char*,unsigned long,unsigned long*,unsigned long) ;
 int * VAR_7 ;
 unsigned long FUNC_5 (unsigned char*,int,int,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int ) ;
 void* FUNC_10 (TYPE_2__*,unsigned long) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (int ,void*,scalar_t__) ;
 int FUNC_14 (scalar_t__,struct object_entry*) ;
 struct object_entry* FUNC_15 (struct object_id*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_16 (struct object_id*,struct object_id*) ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_17 (struct strbuf*,struct strbuf*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,unsigned char*,unsigned long) ;
 int FUNC_20 (int *,unsigned char*,unsigned long) ;
 int FUNC_21 (int ,int *) ;
 TYPE_3__* VAR_16 ;
 int VAR_17 ;
 int FUNC_22 (int) ;
 void* FUNC_23 (void*) ;
 void* FUNC_24 (void*,void*) ;
 int FUNC_25 (char*,int,char*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_26(
 enum object_type VAR_18,
 struct strbuf *VAR_19,
 struct last_object *VAR_20,
 struct object_id *VAR_21,
 uintmax_t VAR_22)
{
 void *VAR_23, *VAR_24;
 struct object_entry *VAR_25;
 unsigned char VAR_26[96];
 struct object_id VAR_27;
 unsigned long VAR_28, VAR_29;
 git_hash_ctx VAR_30;
 git_zstream VAR_31;

 VAR_28 = FUNC_25((char *)VAR_26, sizeof(VAR_26), "%s %lu",
      FUNC_22(VAR_18), (unsigned long)VAR_19->len) + 1;
 VAR_16->init_fn(&VAR_30);
 VAR_16->update_fn(&VAR_30, VAR_26, VAR_28);
 VAR_16->update_fn(&VAR_30, VAR_19->buf, VAR_19->len);
 VAR_16->final_fn(VAR_27.hash, &VAR_30);
 if (VAR_21)
  FUNC_16(VAR_21, &VAR_27);

 VAR_25 = FUNC_15(&VAR_27);
 if (VAR_22)
  FUNC_14(VAR_22, VAR_25);
 if (VAR_25->idx.offset) {
  VAR_7[VAR_18]++;
  return 1;
 } else if (FUNC_6(VAR_27.hash,
      FUNC_8(VAR_17))) {
  VAR_25->type = VAR_18;
  VAR_25->pack_id = VAR_0;
  VAR_25->idx.offset = 1;
  VAR_7[VAR_18]++;
  return 1;
 }

 if (VAR_20 && VAR_20->data.len && VAR_20->data.buf && VAR_20->depth < VAR_8
  && VAR_19->len > VAR_16->rawsz) {

  VAR_5[VAR_18]++;
  VAR_24 = FUNC_4(VAR_20->data.buf, VAR_20->data.len,
   VAR_19->buf, VAR_19->len,
   &VAR_29, VAR_19->len - VAR_16->rawsz);
 } else
  VAR_24 = ((void*)0);

 FUNC_12(&VAR_31, VAR_12);
 if (VAR_24) {
  VAR_31.next_in = VAR_24;
  VAR_31.avail_in = VAR_29;
 } else {
  VAR_31.next_in = (void *)VAR_19->buf;
  VAR_31.avail_in = VAR_19->len;
 }
 VAR_31.avail_out = FUNC_10(&VAR_31, VAR_31.avail_in);
 VAR_31.next_out = VAR_23 = FUNC_23(VAR_31.avail_out);
 while (FUNC_9(&VAR_31, VAR_3) == VAR_4)
  ;
 FUNC_11(&VAR_31);


 if ((VAR_9
  && (VAR_15 + VAR_2 + VAR_31.total_out) > VAR_9)
  || (VAR_15 + VAR_2 + VAR_31.total_out) < VAR_15) {


  VAR_25->pack_id = VAR_14 + 1;
  FUNC_3();


  if (VAR_24) {
   FUNC_0(VAR_24);

   FUNC_12(&VAR_31, VAR_12);
   VAR_31.next_in = (void *)VAR_19->buf;
   VAR_31.avail_in = VAR_19->len;
   VAR_31.avail_out = FUNC_10(&VAR_31, VAR_31.avail_in);
   VAR_31.next_out = VAR_23 = FUNC_24(VAR_23, VAR_31.avail_out);
   while (FUNC_9(&VAR_31, VAR_3) == VAR_4)
    ;
   FUNC_11(&VAR_31);
  }
 }

 VAR_25->type = VAR_18;
 VAR_25->pack_id = VAR_14;
 VAR_25->idx.offset = VAR_15;
 VAR_10++;
 VAR_11[VAR_18]++;

 FUNC_1(VAR_13);

 if (VAR_24) {
  off_t VAR_32 = VAR_25->idx.offset - VAR_20->offset;
  unsigned VAR_33 = sizeof(VAR_26) - 1;

  VAR_6[VAR_18]++;
  VAR_25->depth = VAR_20->depth + 1;

  VAR_28 = FUNC_5(VAR_26, sizeof(VAR_26),
            VAR_1, VAR_29);
  FUNC_13(VAR_13, VAR_26, VAR_28);
  VAR_15 += VAR_28;

  VAR_26[VAR_33] = VAR_32 & 127;
  while (VAR_32 >>= 7)
   VAR_26[--VAR_33] = 128 | (--VAR_32 & 127);
  FUNC_13(VAR_13, VAR_26 + VAR_33, sizeof(VAR_26) - VAR_33);
  VAR_15 += sizeof(VAR_26) - VAR_33;
 } else {
  VAR_25->depth = 0;
  VAR_28 = FUNC_5(VAR_26, sizeof(VAR_26),
            VAR_18, VAR_19->len);
  FUNC_13(VAR_13, VAR_26, VAR_28);
  VAR_15 += VAR_28;
 }

 FUNC_13(VAR_13, VAR_23, VAR_31.total_out);
 VAR_15 += VAR_31.total_out;

 VAR_25->idx.crc32 = FUNC_2(VAR_13);

 FUNC_7(VAR_23);
 FUNC_7(VAR_24);
 if (VAR_20) {
  if (VAR_20->no_swap) {
   VAR_20->data = *VAR_19;
  } else {
   FUNC_17(&VAR_20->data, VAR_19);
  }
  VAR_20->offset = VAR_25->idx.offset;
  VAR_20->depth = VAR_25->depth;
 }
 return 0;
}
