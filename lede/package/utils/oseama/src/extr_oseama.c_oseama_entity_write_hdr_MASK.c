
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct seama_entity_header {void* imagesize; int metasize; void* magic; int md5; } ;
typedef int hdr ;
typedef int buf ;
typedef int MD5_CTX ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,size_t) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (size_t) ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (int ,char*,char*) ;
 size_t FUNC_6 (int *,int,int ,int *) ;
 int FUNC_7 (int *,int,int ) ;
 size_t FUNC_8 (struct seama_entity_header*,int,int,int *) ;
 int FUNC_9 (int,size_t) ;
 char* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_10(FILE *VAR_5, size_t VAR_6, size_t VAR_7) {
 struct seama_entity_header VAR_8 = {};
 uint8_t VAR_9[128];
 size_t VAR_10 = VAR_7;
 size_t VAR_11;
 MD5_CTX VAR_12;

 FUNC_7(VAR_5, sizeof(VAR_8) + VAR_6, VAR_2);
 FUNC_1(&VAR_12);
 while ((VAR_11 = FUNC_6(VAR_9, 1, FUNC_9(sizeof(VAR_9), VAR_10), VAR_5)) > 0) {
  FUNC_2(&VAR_12, VAR_9, VAR_11);
  VAR_10 -= VAR_11;
 }
 FUNC_0(VAR_8.md5, &VAR_12);

 VAR_8.magic = FUNC_4(VAR_1);
 VAR_8.metasize = FUNC_3(VAR_6);
 VAR_8.imagesize = FUNC_4(VAR_7);

 FUNC_7(VAR_5, 0, VAR_2);
 VAR_11 = FUNC_8(&VAR_8, 1, sizeof(VAR_8), VAR_5);
 if (VAR_11 != sizeof(VAR_8)) {
  FUNC_5(VAR_4, "Couldn't write Seama entity header to %s\n", VAR_3);
  return -VAR_0;
 }

 return 0;
}
