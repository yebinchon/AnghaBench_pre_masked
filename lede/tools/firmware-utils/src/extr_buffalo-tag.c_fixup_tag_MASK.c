
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffalo_tag {char* brand; char* product; char* platform; char* ver_major; char* ver_minor; char* language; char* region_code; char* hwv; char* hwv_val; void* crc; int flag; void* base2; void* base1; void* data_len; void* len; void* region_mask; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (unsigned char*,int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 void* FUNC_1 (int ) ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct buffalo_tag*,char,int) ;
 char* VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(unsigned char *VAR_15, ssize_t VAR_16)
{
 struct buffalo_tag *VAR_17 = (struct buffalo_tag *) VAR_15;

 FUNC_3(VAR_17, '\0', sizeof(*VAR_17));

 FUNC_2(VAR_17->brand, VAR_2, FUNC_4(VAR_2));
 FUNC_2(VAR_17->product, VAR_11, FUNC_4(VAR_11));
 FUNC_2(VAR_17->platform, VAR_10, FUNC_4(VAR_10));
 FUNC_2(VAR_17->ver_major, VAR_7, FUNC_4(VAR_7));
 FUNC_2(VAR_17->ver_minor, VAR_8, FUNC_4(VAR_8));
 FUNC_2(VAR_17->language, VAR_6, FUNC_4(VAR_6));

 if (VAR_9 > 1) {
  VAR_17->region_code[0] = 'M';
  VAR_17->region_code[1] = '_';
  VAR_17->region_mask = FUNC_1(VAR_13);
 } else {
  FUNC_2(VAR_17->region_code, VAR_12, 2);
 }

 VAR_17->len = FUNC_1(VAR_16);
 VAR_17->data_len = FUNC_1(VAR_4[0]);
 VAR_17->base1 = FUNC_1(VAR_0);
 VAR_17->base2 = FUNC_1(VAR_1);
 VAR_17->flag = VAR_3;

 if (VAR_5) {
  FUNC_2(VAR_17->hwv, "hwv", 3);
  FUNC_2(VAR_17->hwv_val, VAR_5, FUNC_4(VAR_5));
 }

 if (!VAR_14)
  VAR_17->crc = FUNC_1(FUNC_0(VAR_15, VAR_16));
}
