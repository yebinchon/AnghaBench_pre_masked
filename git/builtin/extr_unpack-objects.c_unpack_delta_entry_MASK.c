
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int hash; } ;
typedef int off_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_4__ {int offset; int oid; } ;
struct TYPE_3__ {int rawsz; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,struct object_id*,int,void*,unsigned long) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int) ;
 unsigned char* FUNC_5 (int) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (unsigned long) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (struct object_id*) ;
 int FUNC_9 (int ,unsigned char*) ;
 int FUNC_10 (struct object_id*) ;
 struct object_id VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_11 (struct object_id*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct object_id*,int *) ;
 void* FUNC_14 (struct object_id*,int*,unsigned long*) ;
 int VAR_5 ;
 scalar_t__ FUNC_15 (unsigned int,struct object_id*,void*,unsigned long) ;
 int FUNC_16 (unsigned int,int,void*,unsigned long,void*,unsigned long) ;
 TYPE_1__* VAR_6 ;
 int FUNC_17 (int) ;

__attribute__((used)) static void FUNC_18(enum object_type VAR_7, unsigned long VAR_8,
          unsigned VAR_9)
{
 void *VAR_10, *VAR_11;
 unsigned long VAR_12;
 struct object_id VAR_13;

 if (VAR_7 == VAR_0) {
  FUNC_9(VAR_13.hash, FUNC_5(VAR_6->rawsz));
  FUNC_17(VAR_6->rawsz);
  VAR_10 = FUNC_7(VAR_8);
  if (VAR_1 || !VAR_10) {
   FUNC_6(VAR_10);
   return;
  }
  if (FUNC_8(&VAR_13))
   ;
  else if (FUNC_15(VAR_9, &VAR_13,
           VAR_10, VAR_8))
   return;
  else {

   FUNC_12(&VAR_4[VAR_9].oid);
   FUNC_1(VAR_9, &VAR_13, 0, VAR_10, VAR_8);
   return;
  }
 } else {
  unsigned VAR_14 = 0;
  unsigned char *VAR_15, VAR_16;
  off_t VAR_17;
  unsigned VAR_18, VAR_19, VAR_20;

  VAR_15 = FUNC_5(1);
  VAR_16 = *VAR_15;
  FUNC_17(1);
  VAR_17 = VAR_16 & 127;
  while (VAR_16 & 128) {
   VAR_17 += 1;
   if (!VAR_17 || FUNC_0(VAR_17, 7))
    FUNC_2("offset value overflow for delta base object");
   VAR_15 = FUNC_5(1);
   VAR_16 = *VAR_15;
   FUNC_17(1);
   VAR_17 = (VAR_17 << 7) + (VAR_16 & 127);
  }
  VAR_17 = VAR_4[VAR_9].offset - VAR_17;
  if (VAR_17 <= 0 || VAR_17 >= VAR_4[VAR_9].offset)
   FUNC_2("offset value out of bound for delta base object");

  VAR_10 = FUNC_7(VAR_8);
  if (VAR_1 || !VAR_10) {
   FUNC_6(VAR_10);
   return;
  }
  VAR_18 = 0;
  VAR_20 = VAR_9;
  while (VAR_18 < VAR_20) {
   VAR_19 = VAR_18 + (VAR_20 - VAR_18) / 2;
   if (VAR_17 < VAR_4[VAR_19].offset) {
    VAR_20 = VAR_19;
   } else if (VAR_17 > VAR_4[VAR_19].offset) {
    VAR_18 = VAR_19 + 1;
   } else {
    FUNC_13(&VAR_13, &VAR_4[VAR_19].oid);
    VAR_14 = !FUNC_10(&VAR_13);
    break;
   }
  }
  if (!VAR_14) {




   FUNC_12(&VAR_4[VAR_9].oid);
   FUNC_1(VAR_9, &VAR_3, VAR_17, VAR_10, VAR_8);
   return;
  }
 }

 if (FUNC_15(VAR_9, &VAR_13, VAR_10, VAR_8))
  return;

 VAR_11 = FUNC_14(&VAR_13, &VAR_7, &VAR_12);
 if (!VAR_11) {
  FUNC_3("failed to read delta-pack base object %s",
        FUNC_11(&VAR_13));
  if (!VAR_5)
   FUNC_4(1);
  VAR_2 = 1;
  return;
 }
 FUNC_16(VAR_9, VAR_7, VAR_11, VAR_12, VAR_10, VAR_8);
 FUNC_6(VAR_11);
}
