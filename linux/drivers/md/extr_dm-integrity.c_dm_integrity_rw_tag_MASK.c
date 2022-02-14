
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_integrity_c {unsigned int log2_buffer_sectors; int bufio; } ;
struct dm_buffer {int dummy; } ;
typedef int sector_t ;


 scalar_t__ FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dm_buffer*,unsigned int,unsigned int) ;
 unsigned char* FUNC_3 (int ,int ,struct dm_buffer**) ;
 int FUNC_4 (struct dm_buffer*) ;
 int FUNC_5 (struct dm_integrity_c*) ;
 int FUNC_6 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_7 (unsigned char*,unsigned char*,unsigned int) ;
 unsigned int FUNC_8 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct dm_integrity_c *VAR_3, unsigned char *VAR_4, sector_t *VAR_5,
          unsigned *VAR_6, unsigned VAR_7, int VAR_8)
{
 do {
  unsigned char *VAR_9, *VAR_10;
  struct dm_buffer *VAR_11;
  unsigned VAR_12;
  int VAR_13;

  VAR_13 = FUNC_5(VAR_3);
  if (FUNC_9(VAR_13))
   return VAR_13;

  VAR_9 = FUNC_3(VAR_3->bufio, *VAR_5, &VAR_11);
  if (FUNC_0(VAR_9))
   return FUNC_1(VAR_9);

  VAR_12 = FUNC_8((1U << VAR_0 << VAR_3->log2_buffer_sectors) - *VAR_6, VAR_7);
  VAR_10 = VAR_9 + *VAR_6;
  if (VAR_8 == VAR_1) {
   FUNC_7(VAR_4, VAR_10, VAR_12);
  } else if (VAR_8 == VAR_2) {
   FUNC_7(VAR_10, VAR_4, VAR_12);
   FUNC_2(VAR_11, *VAR_6, *VAR_6 + VAR_12);
  } else {

   if (FUNC_9(FUNC_6(VAR_10, VAR_4, VAR_12))) {
    unsigned VAR_14;

    for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
     if (VAR_10[VAR_14] != VAR_4[VAR_14])
      break;
     VAR_7--;
    }
    FUNC_4(VAR_11);
    return VAR_7;
   }
  }
  FUNC_4(VAR_11);

  VAR_4 += VAR_12;
  *VAR_6 += VAR_12;
  if (FUNC_9(*VAR_6 == 1U << VAR_0 << VAR_3->log2_buffer_sectors)) {
   (*VAR_5)++;
   *VAR_6 = 0;
  }
  VAR_7 -= VAR_12;
 } while (FUNC_9(VAR_7));

 return 0;
}
