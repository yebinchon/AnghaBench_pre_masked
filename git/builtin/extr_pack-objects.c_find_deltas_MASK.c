
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct unpacked {int depth; struct unpacked* data; int index; struct object_entry* entry; } ;
struct object_entry {unsigned long z_delta_size; scalar_t__ delta_data; scalar_t__ preferred_base; } ;


 scalar_t__ FUNC_0 (struct object_entry*) ;
 scalar_t__ FUNC_1 (struct object_entry*) ;
 scalar_t__ FUNC_2 (struct object_entry*) ;
 int FUNC_3 (scalar_t__) ;
 unsigned int VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct object_entry*,int ) ;
 unsigned long VAR_1 ;
 int FUNC_7 (int ,unsigned int) ;
 unsigned long FUNC_8 (scalar_t__*,scalar_t__) ;
 int FUNC_9 (struct unpacked*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct unpacked*) ;
 int VAR_2 ;
 int FUNC_12 () ;
 int VAR_3 ;
 int FUNC_13 () ;
 int FUNC_14 (struct unpacked*,struct unpacked*,int,unsigned long*) ;
 unsigned long VAR_4 ;
 struct unpacked* FUNC_15 (int,int) ;

__attribute__((used)) static void FUNC_16(struct object_entry **VAR_5, unsigned *VAR_6,
   int VAR_7, int VAR_8, unsigned *VAR_9)
{
 uint32_t VAR_10, VAR_11 = 0, VAR_12 = 0;
 struct unpacked *VAR_13;
 unsigned long VAR_14 = 0;

 VAR_13 = FUNC_15(VAR_7, sizeof(struct unpacked));

 for (;;) {
  struct object_entry *VAR_15;
  struct unpacked *VAR_16 = VAR_13 + VAR_11;
  int VAR_17, VAR_18, VAR_19 = -1;

  FUNC_12();
  if (!*VAR_6) {
   FUNC_13();
   break;
  }
  VAR_15 = *VAR_5++;
  (*VAR_6)--;
  if (!VAR_15->preferred_base) {
   (*VAR_9)++;
   FUNC_7(VAR_3, *VAR_9);
  }
  FUNC_13();

  VAR_14 -= FUNC_11(VAR_16);
  VAR_16->entry = VAR_15;

  while (VAR_4 &&
         VAR_14 > VAR_4 &&
         VAR_12 > 1) {
   const uint32_t VAR_20 = (VAR_11 + VAR_7 - VAR_12) % VAR_7;
   VAR_14 -= FUNC_11(VAR_13 + VAR_20);
   VAR_12--;
  }




  if (VAR_15->preferred_base)
   goto next;






  VAR_18 = VAR_8;
  if (FUNC_1(VAR_15)) {
   VAR_18 -= FUNC_6(VAR_15, 0);
   if (VAR_18 <= 0)
    goto next;
  }

  VAR_17 = VAR_7;
  while (--VAR_17 > 0) {
   int VAR_21;
   uint32_t VAR_22 = VAR_11 + VAR_17;
   struct unpacked *VAR_23;
   if (VAR_22 >= VAR_7)
    VAR_22 -= VAR_7;
   VAR_23 = VAR_13 + VAR_22;
   if (!VAR_23->entry)
    break;
   VAR_21 = FUNC_14(VAR_16, VAR_23, VAR_18, &VAR_14);
   if (VAR_21 < 0)
    break;
   else if (VAR_21 > 0)
    VAR_19 = VAR_22;
  }
  if (VAR_15->delta_data && !VAR_2) {
   unsigned long VAR_24;

   VAR_24 = FUNC_8(&VAR_15->delta_data, FUNC_2(VAR_15));
   if (VAR_24 < (1U << VAR_0)) {
    VAR_15->z_delta_size = VAR_24;
    FUNC_4();
    VAR_1 -= FUNC_2(VAR_15);
    VAR_1 += VAR_15->z_delta_size;
    FUNC_5();
   } else {
    FUNC_3(VAR_15->delta_data);
    VAR_15->z_delta_size = 0;
   }
  }





  if (FUNC_0(VAR_15) && VAR_18 <= VAR_16->depth)
   continue;






  if (FUNC_0(VAR_15)) {
   struct unpacked VAR_25 = VAR_13[VAR_19];
   int VAR_26 = (VAR_7 + VAR_11 - VAR_19) % VAR_7;
   int VAR_27 = VAR_19;
   while (VAR_26--) {
    int VAR_28 = (VAR_27 + 1) % VAR_7;
    VAR_13[VAR_27] = VAR_13[VAR_28];
    VAR_27 = VAR_28;
   }
   VAR_13[VAR_27] = VAR_25;
  }

  next:
  VAR_11++;
  if (VAR_12 + 1 < VAR_7)
   VAR_12++;
  if (VAR_11 >= VAR_7)
   VAR_11 = 0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10) {
  FUNC_10(VAR_13[VAR_10].index);
  FUNC_9(VAR_13[VAR_10].data);
 }
 FUNC_9(VAR_13);
}
