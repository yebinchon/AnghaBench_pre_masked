
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info_user {int size; int writesize; int length; scalar_t__ start; } ;
struct erase_info_user {int size; int writesize; int length; scalar_t__ start; } ;
struct bootcounter {void* magic; int count; void* checksum; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int,int ,struct mtd_info_user*) ;
 int FUNC_3 (struct bootcounter*,int,unsigned int) ;
 int FUNC_4 (char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int,struct bootcounter*,int,unsigned int) ;
 int FUNC_6 (int,struct bootcounter*,unsigned int,unsigned int) ;
 int VAR_4 ;
 int FUNC_7 () ;

int FUNC_8(const char *VAR_5)
{
 struct mtd_info_user VAR_6;
 struct bootcounter *VAR_7 = (struct bootcounter *)VAR_3;
 unsigned int VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(VAR_5);

 if (FUNC_2(VAR_11, VAR_2, &VAR_6) < 0) {
  FUNC_1(VAR_4, "failed to get mtd info!\n");
  return -1;
 }

 VAR_10 = VAR_6.size / VAR_6.writesize;

 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  FUNC_5(VAR_11, VAR_7, sizeof(*VAR_7), VAR_8 * VAR_6.writesize);

  if (VAR_7->magic != VAR_0 && VAR_7->magic != 0xffffffff) {
   FUNC_1(VAR_4, "unexpected magic %08x, bailing out\n", VAR_7->magic);
   goto out;
  }

  if (VAR_7->magic == 0xffffffff)
   break;

  VAR_9 = VAR_7->count;
 }


 if (VAR_9 == 0)
  goto out;


 if (VAR_8 == VAR_10) {
  struct erase_info_user VAR_13;
  VAR_13.start = 0;
  VAR_13.length = VAR_6.size;


  VAR_12 = FUNC_2(VAR_11, VAR_1, &VAR_13);
  if (VAR_12 < 0) {
   FUNC_1(VAR_4, "failed to erase block: %i\n", VAR_12);
   return -1;
  }

  VAR_8 = 0;
 }

 FUNC_3(VAR_7, 0xff, VAR_6.writesize);

 VAR_7->magic = VAR_0;
 VAR_7->count = 0;
 VAR_7->checksum = VAR_0;

 VAR_12 = FUNC_6(VAR_11, VAR_7, VAR_6.writesize, VAR_8 * VAR_6.writesize);
 if (VAR_12 < 0)
  FUNC_1(VAR_4, "failed to write: %i\n", VAR_12);
 FUNC_7();
out:
 FUNC_0(VAR_11);

 return 0;
}
