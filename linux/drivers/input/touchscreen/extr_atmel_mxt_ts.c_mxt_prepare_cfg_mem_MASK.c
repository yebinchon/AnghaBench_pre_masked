
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mxt_object {int start_address; int type; } ;
struct mxt_data {TYPE_1__* client; } ;
struct mxt_cfg {scalar_t__ raw_pos; scalar_t__ raw_size; scalar_t__ raw; int start_ofs; unsigned int mem_size; int * mem; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,unsigned int,unsigned int) ;
 struct mxt_object* FUNC_2 (struct mxt_data*,unsigned int) ;
 unsigned int FUNC_3 (struct mxt_object*) ;
 int FUNC_4 (struct mxt_object*) ;
 int FUNC_5 (scalar_t__,char*,unsigned int*,...) ;

__attribute__((used)) static int FUNC_6(struct mxt_data *VAR_1, struct mxt_cfg *VAR_2)
{
 struct device *VAR_3 = &VAR_1->client->dev;
 struct mxt_object *VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 u16 VAR_12;
 u8 VAR_13;

 while (VAR_2->raw_pos < VAR_2->raw_size) {

  VAR_10 = FUNC_5(VAR_2->raw + VAR_2->raw_pos, "%x %x %x%n",
        &VAR_5, &VAR_6, &VAR_7, &VAR_9);
  if (VAR_10 == 0) {

   break;
  } else if (VAR_10 != 3) {
   FUNC_0(VAR_3, "Bad format: failed to parse object\n");
   return -VAR_0;
  }
  VAR_2->raw_pos += VAR_9;

  VAR_4 = FUNC_2(VAR_1, VAR_5);
  if (!VAR_4) {

   for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
    VAR_10 = FUNC_5(VAR_2->raw + VAR_2->raw_pos, "%hhx%n",
          &VAR_13, &VAR_9);
    if (VAR_10 != 1) {
     FUNC_0(VAR_3, "Bad format in T%d at %d\n",
      VAR_5, VAR_11);
     return -VAR_0;
    }
    VAR_2->raw_pos += VAR_9;
   }
   continue;
  }

  if (VAR_7 > FUNC_4(VAR_4)) {





   FUNC_1(VAR_3, "Discarding %zu byte(s) in T%u\n",
     VAR_7 - FUNC_4(VAR_4), VAR_5);
  } else if (FUNC_4(VAR_4) > VAR_7) {
   FUNC_1(VAR_3, "Zeroing %zu byte(s) in T%d\n",
     FUNC_4(VAR_4) - VAR_7, VAR_5);
  }

  if (VAR_6 >= FUNC_3(VAR_4)) {
   FUNC_0(VAR_3, "Object instances exceeded!\n");
   return -VAR_0;
  }

  VAR_12 = VAR_4->start_address + FUNC_4(VAR_4) * VAR_6;

  for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
   VAR_10 = FUNC_5(VAR_2->raw + VAR_2->raw_pos, "%hhx%n",
         &VAR_13,
         &VAR_9);
   if (VAR_10 != 1) {
    FUNC_0(VAR_3, "Bad format in T%d at %d\n",
     VAR_5, VAR_11);
    return -VAR_0;
   }
   VAR_2->raw_pos += VAR_9;

   if (VAR_11 > FUNC_4(VAR_4))
    continue;

   VAR_8 = VAR_12 + VAR_11 - VAR_2->start_ofs;

   if (VAR_8 >= 0 && VAR_8 < VAR_2->mem_size) {
    *(VAR_2->mem + VAR_8) = VAR_13;
   } else {
    FUNC_0(VAR_3, "Bad object: reg:%d, T%d, ofs=%d\n",
     VAR_12, VAR_4->type, VAR_8);
    return -VAR_0;
   }
  }
 }

 return 0;
}
