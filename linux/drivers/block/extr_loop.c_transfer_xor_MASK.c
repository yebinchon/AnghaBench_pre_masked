
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct loop_device {char* lo_encrypt_key; int lo_encrypt_key_size; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (struct page*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct loop_device *VAR_1, int VAR_2,
   struct page *VAR_3, unsigned VAR_4,
   struct page *VAR_5, unsigned VAR_6,
   int VAR_7, sector_t VAR_8)
{
 char *VAR_9 = FUNC_1(VAR_3) + VAR_4;
 char *VAR_10 = FUNC_1(VAR_5) + VAR_6;
 char *VAR_11, *VAR_12, *VAR_13;
 int VAR_14, VAR_15;

 if (VAR_2 == VAR_0) {
  VAR_11 = VAR_9;
  VAR_12 = VAR_10;
 } else {
  VAR_11 = VAR_10;
  VAR_12 = VAR_9;
 }

 VAR_13 = VAR_1->lo_encrypt_key;
 VAR_15 = VAR_1->lo_encrypt_key_size;
 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
  *VAR_12++ = *VAR_11++ ^ VAR_13[(VAR_14 & 511) % VAR_15];

 FUNC_2(VAR_10);
 FUNC_2(VAR_9);
 FUNC_0();
 return 0;
}
