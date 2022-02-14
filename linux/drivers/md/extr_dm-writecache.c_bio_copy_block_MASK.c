
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_writecache {unsigned int block_size; } ;
struct bio_vec {unsigned int bv_len; } ;
struct bio {int bi_status; int bi_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*,unsigned int) ;
 int FUNC_1 (struct bio*) ;
 struct bio_vec FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct bio*) ;
 void* FUNC_4 (struct bio_vec*,unsigned long*) ;
 int FUNC_5 (void*,unsigned long*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,void*,unsigned int) ;
 int FUNC_8 (void*,void*,unsigned int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct dm_writecache*,int,char*,int) ;

__attribute__((used)) static void FUNC_11(struct dm_writecache *VAR_2, struct bio *VAR_3, void *VAR_4)
{
 void *VAR_5;
 unsigned long VAR_6;
 unsigned VAR_7;
 int VAR_8 = FUNC_1(VAR_3);
 unsigned VAR_9 = VAR_2->block_size;

 do {
  struct bio_vec VAR_10 = FUNC_2(VAR_3, VAR_3->bi_iter);
  VAR_5 = FUNC_4(&VAR_10, &VAR_6);
  VAR_7 = VAR_10.bv_len;
  if (FUNC_9(VAR_7 > VAR_9))
   VAR_7 = VAR_9;

  if (VAR_8 == VAR_1) {
   int VAR_11;
   VAR_11 = FUNC_8(VAR_5, VAR_4, VAR_7);
   FUNC_6(FUNC_3(VAR_3));
   if (FUNC_9(VAR_11)) {
    FUNC_10(VAR_2, VAR_11, "hardware memory error when reading data: %d", VAR_11);
    VAR_3->bi_status = VAR_0;
   }
  } else {
   FUNC_6(FUNC_3(VAR_3));
   FUNC_7(VAR_4, VAR_5, VAR_7);
  }

  FUNC_5(VAR_5, &VAR_6);

  VAR_4 = (char *)VAR_4 + VAR_7;
  VAR_9 -= VAR_7;
  FUNC_0(VAR_3, VAR_7);
 } while (FUNC_9(VAR_9));
}
