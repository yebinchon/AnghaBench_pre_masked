
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seama_entity_header {int imagesize; int metasize; int magic; } ;
typedef struct seama_entity_header uint8_t ;
typedef int hdr ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int,...) ;
 size_t FUNC_3 (struct seama_entity_header*,int,int,int *) ;
 int FUNC_4 (int *,int,int ) ;
 size_t FUNC_5 (struct seama_entity_header*,int,size_t,int *) ;
 int FUNC_6 (int,size_t) ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(FILE *VAR_8, FILE *VAR_9) {
 struct seama_entity_header VAR_10;
 size_t VAR_11, VAR_12, VAR_13, VAR_14;
 uint8_t VAR_15[1024];
 int VAR_16 = 0;
 int VAR_17 = 0;

 while ((VAR_11 = FUNC_3(&VAR_10, 1, sizeof(VAR_10), VAR_8)) == sizeof(VAR_10)) {
  if (FUNC_1(VAR_10.magic) != VAR_2) {
   FUNC_2(VAR_7, "Invalid Seama magic: 0x%08x\n", FUNC_1(VAR_10.magic));
   VAR_17 = -VAR_0;
   break;
  }
  VAR_12 = FUNC_0(VAR_10.metasize);
  VAR_13 = FUNC_1(VAR_10.imagesize);

  if (VAR_16 != VAR_4) {
   FUNC_4(VAR_8, VAR_12 + VAR_13, VAR_3);
   VAR_16++;
   continue;
  }

  FUNC_4(VAR_8, -sizeof(VAR_10), VAR_3);

  VAR_14 = sizeof(VAR_10) + VAR_12 + VAR_13;
  while ((VAR_11 = FUNC_3(VAR_15, 1, FUNC_6(sizeof(VAR_15), VAR_14), VAR_8)) > 0) {
   if (FUNC_5(VAR_15, 1, VAR_11, VAR_9) != VAR_11) {
    FUNC_2(VAR_7, "Couldn't write %zu B to %s\n", VAR_11, VAR_5);
    VAR_17 = -VAR_1;
    break;
   }
   VAR_14 -= VAR_11;
  }

  if (VAR_14) {
   FUNC_2(VAR_7, "Couldn't extract whole entity %d from %s (%zu B left)\n", VAR_4, VAR_6, VAR_14);
   VAR_17 = -VAR_1;
   break;
  }

  break;
 }

 return VAR_17;
}
