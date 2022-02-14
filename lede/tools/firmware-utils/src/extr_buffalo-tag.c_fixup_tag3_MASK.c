
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffalo_tag3 {char* brand; char* product; char* platform; char* ver_major; char* ver_minor; char* language; char* region_code; char* hwv; char* hwv_val; void* base2; void* len1; void* total_len; void* region_mask; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int * VAR_2 ;
 void* FUNC_0 (int ) ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct buffalo_tag3*,char,int) ;
 char* VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(unsigned char *VAR_12, ssize_t VAR_13)
{
 struct buffalo_tag3 *VAR_14 = (struct buffalo_tag3 *) VAR_12;

 FUNC_2(VAR_14, '\0', sizeof(*VAR_14));

 FUNC_1(VAR_14->brand, VAR_1, FUNC_3(VAR_1));
 FUNC_1(VAR_14->product, VAR_9, FUNC_3(VAR_9));
 FUNC_1(VAR_14->platform, VAR_8, FUNC_3(VAR_8));
 FUNC_1(VAR_14->ver_major, VAR_5, FUNC_3(VAR_5));
 FUNC_1(VAR_14->ver_minor, VAR_6, FUNC_3(VAR_6));
 FUNC_1(VAR_14->language, VAR_4, FUNC_3(VAR_4));

 if (VAR_7 > 1) {
  VAR_14->region_code[0] = 'M';
  VAR_14->region_code[1] = '_';
  VAR_14->region_mask = FUNC_0(VAR_11);
 } else {
  FUNC_1(VAR_14->region_code, VAR_10, 2);
 }

 VAR_14->total_len = FUNC_0(VAR_13);
 VAR_14->len1 = FUNC_0(VAR_2[0]);
 VAR_14->base2 = FUNC_0(VAR_0);

 if (VAR_3) {
  FUNC_1(VAR_14->hwv, "hwv", 3);
  FUNC_1(VAR_14->hwv_val, VAR_3, FUNC_3(VAR_3));
 }
}
