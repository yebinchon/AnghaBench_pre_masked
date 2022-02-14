
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int offset; int oid; } ;
struct object_entry {long z_delta_size; TYPE_3__ idx; int * delta_data; } ;
struct hashfile {int dummy; } ;
struct git_istream {int dummy; } ;
typedef int off_t ;
typedef int header ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
typedef int dheader ;
struct TYPE_6__ {void* hash; } ;
struct TYPE_7__ {int offset; TYPE_1__ oid; } ;
struct TYPE_10__ {TYPE_2__ idx; } ;
struct TYPE_9__ {unsigned int rawsz; } ;


 TYPE_5__* FUNC_0 (struct object_entry*) ;
 unsigned long FUNC_1 (struct object_entry*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct git_istream*) ;
 int FUNC_5 (int ,int ) ;
 unsigned long FUNC_6 (void**,unsigned long) ;
 unsigned int FUNC_7 (unsigned char*,int,int,unsigned long) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (struct object_entry*) ;
 int FUNC_10 (struct hashfile*,void*,unsigned int const) ;
 scalar_t__ FUNC_11 (int *,struct object_entry*,int ) ;
 scalar_t__ FUNC_12 (struct object_entry*) ;
 int FUNC_13 (int *) ;
 struct git_istream* FUNC_14 (int *,int*,unsigned long*,int *) ;
 void* FUNC_15 (int *,int*,unsigned long*) ;
 TYPE_4__* VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_16 (struct git_istream*,struct hashfile*,int *) ;

__attribute__((used)) static unsigned long FUNC_17(struct hashfile *VAR_8, struct object_entry *VAR_9,
        unsigned long VAR_10, int VAR_11)
{
 unsigned long VAR_12, VAR_13;
 unsigned char VAR_14[VAR_0],
        VAR_15[VAR_0];
 unsigned VAR_16;
 enum object_type VAR_17;
 void *VAR_18;
 struct git_istream *VAR_19 = ((void*)0);
 const unsigned VAR_20 = VAR_6->rawsz;

 if (!VAR_11) {
  if (FUNC_12(VAR_9) == VAR_1 &&
      FUNC_11(&VAR_7, VAR_9, VAR_5) &&
      (VAR_19 = FUNC_14(&VAR_9->idx.oid, &VAR_17, &VAR_12, ((void*)0))) != ((void*)0))
   VAR_18 = ((void*)0);
  else {
   VAR_18 = FUNC_15(&VAR_9->idx.oid, &VAR_17, &VAR_12);
   if (!VAR_18)
    FUNC_5(FUNC_3("unable to read %s"),
        FUNC_13(&VAR_9->idx.oid));
  }




  FUNC_2(VAR_9->delta_data);
  VAR_9->z_delta_size = 0;
 } else if (VAR_9->delta_data) {
  VAR_12 = FUNC_1(VAR_9);
  VAR_18 = VAR_9->delta_data;
  VAR_9->delta_data = ((void*)0);
  VAR_17 = (VAR_4 && FUNC_0(VAR_9)->idx.offset) ?
   VAR_2 : VAR_3;
 } else {
  VAR_18 = FUNC_9(VAR_9);
  VAR_12 = FUNC_1(VAR_9);
  VAR_17 = (VAR_4 && FUNC_0(VAR_9)->idx.offset) ?
   VAR_2 : VAR_3;
 }

 if (VAR_19)
  VAR_13 = VAR_12;
 else if (VAR_9->z_delta_size)
  VAR_13 = VAR_9->z_delta_size;
 else
  VAR_13 = FUNC_6(&VAR_18, VAR_12);





 VAR_16 = FUNC_7(VAR_14, sizeof(VAR_14),
           VAR_17, VAR_12);

 if (VAR_17 == VAR_2) {





  off_t VAR_21 = VAR_9->idx.offset - FUNC_0(VAR_9)->idx.offset;
  unsigned VAR_22 = sizeof(VAR_15) - 1;
  VAR_15[VAR_22] = VAR_21 & 127;
  while (VAR_21 >>= 7)
   VAR_15[--VAR_22] = 128 | (--VAR_21 & 127);
  if (VAR_10 && VAR_16 + sizeof(VAR_15) - VAR_22 + VAR_13 + VAR_20 >= VAR_10) {
   if (VAR_19)
    FUNC_4(VAR_19);
   FUNC_8(VAR_18);
   return 0;
  }
  FUNC_10(VAR_8, VAR_14, VAR_16);
  FUNC_10(VAR_8, VAR_15 + VAR_22, sizeof(VAR_15) - VAR_22);
  VAR_16 += sizeof(VAR_15) - VAR_22;
 } else if (VAR_17 == VAR_3) {




  if (VAR_10 && VAR_16 + VAR_20 + VAR_13 + VAR_20 >= VAR_10) {
   if (VAR_19)
    FUNC_4(VAR_19);
   FUNC_8(VAR_18);
   return 0;
  }
  FUNC_10(VAR_8, VAR_14, VAR_16);
  FUNC_10(VAR_8, FUNC_0(VAR_9)->idx.oid.hash, VAR_20);
  VAR_16 += VAR_20;
 } else {
  if (VAR_10 && VAR_16 + VAR_13 + VAR_20 >= VAR_10) {
   if (VAR_19)
    FUNC_4(VAR_19);
   FUNC_8(VAR_18);
   return 0;
  }
  FUNC_10(VAR_8, VAR_14, VAR_16);
 }
 if (VAR_19) {
  VAR_13 = FUNC_16(VAR_19, VAR_8, &VAR_9->idx.oid);
  FUNC_4(VAR_19);
 } else {
  FUNC_10(VAR_8, VAR_18, VAR_13);
  FUNC_8(VAR_18);
 }

 return VAR_16 + VAR_13;
}
