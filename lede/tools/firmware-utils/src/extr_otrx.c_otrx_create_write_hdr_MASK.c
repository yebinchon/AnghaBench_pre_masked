
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct trx_header {int version; void* crc32; int length; void* magic; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 size_t FUNC_2 (int *,int,int ,int *) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 size_t FUNC_4 (struct trx_header*,int,int,int *) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int,int *,size_t) ;
 int FUNC_7 (int,size_t) ;
 int VAR_4 ;
 char* VAR_5 ;

__attribute__((used)) static int FUNC_8(FILE *VAR_6, struct trx_header *VAR_7) {
 size_t VAR_8, VAR_9;
 uint8_t VAR_10[1024];
 uint32_t VAR_11;

 VAR_7->magic = FUNC_0(VAR_3);
 VAR_7->version = 1;

 FUNC_3(VAR_6, 0, VAR_1);
 VAR_8 = FUNC_4(VAR_7, 1, sizeof(struct trx_header), VAR_6);
 if (VAR_8 != sizeof(struct trx_header)) {
  FUNC_1(VAR_4, "Couldn't write TRX header to %s\n", VAR_5);
  return -VAR_0;
 }

 VAR_9 = FUNC_5(VAR_7->length);

 VAR_11 = 0xffffffff;
 FUNC_3(VAR_6, VAR_2, VAR_1);
 VAR_9 -= VAR_2;
 while ((VAR_8 = FUNC_2(VAR_10, 1, FUNC_7(sizeof(VAR_10), VAR_9), VAR_6)) > 0) {
  VAR_11 = FUNC_6(VAR_11, VAR_10, VAR_8);
  VAR_9 -= VAR_8;
 }
 VAR_7->crc32 = FUNC_0(VAR_11);

 FUNC_3(VAR_6, 0, VAR_1);
 VAR_8 = FUNC_4(VAR_7, 1, sizeof(struct trx_header), VAR_6);
 if (VAR_8 != sizeof(struct trx_header)) {
  FUNC_1(VAR_4, "Couldn't write TRX header to %s\n", VAR_5);
  return -VAR_0;
 }

 return 0;
}
