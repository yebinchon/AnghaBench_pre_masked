
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
 int FUNC_2 (int ,char*,size_t,...) ;
 size_t FUNC_3 (struct seama_entity_header*,int,size_t,int *) ;
 int FUNC_4 (int *,size_t,int ) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(FILE *VAR_6) {
 struct seama_entity_header VAR_7;
 size_t VAR_8, VAR_9, VAR_10;
 uint8_t VAR_11[1024];
 char *VAR_12, *VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;

 while ((VAR_8 = FUNC_3(&VAR_7, 1, sizeof(VAR_7), VAR_6)) == sizeof(VAR_7)) {
  if (FUNC_1(VAR_7.magic) != VAR_2) {
   FUNC_2(VAR_5, "Invalid Seama magic: 0x%08x\n", FUNC_1(VAR_7.magic));
   VAR_15 = -VAR_0;
   goto err_out;
  }
  VAR_9 = FUNC_0(VAR_7.metasize);
  VAR_10 = FUNC_1(VAR_7.imagesize);

  if (VAR_4 >= 0 && VAR_14 != VAR_4) {
   FUNC_4(VAR_6, VAR_9 + VAR_10, VAR_3);
   VAR_14++;
   continue;
  }

  if (VAR_9 >= sizeof(VAR_11)) {
   FUNC_2(VAR_5, "Too small buffer (%zu B) to read all meta info (%zd B)\n", sizeof(VAR_11), VAR_9);
   VAR_15 = -VAR_0;
   goto err_out;
  }

  if (VAR_4 < 0)
   FUNC_6("\n");
  FUNC_6("Entity offset:\t%ld\n", FUNC_5(VAR_6) - sizeof(VAR_7));
  FUNC_6("Entity size:\t%zd\n", sizeof(VAR_7) + VAR_9 + VAR_10);
  FUNC_6("Meta size:\t%zd\n", VAR_9);
  FUNC_6("Image size:\t%zd\n", VAR_10);

  VAR_8 = FUNC_3(VAR_11, 1, VAR_9, VAR_6);
  if (VAR_8 != VAR_9) {
   FUNC_2(VAR_5, "Couldn't read %zd B of meta\n", VAR_9);
   VAR_15 = -VAR_1;
   goto err_out;
  }

  VAR_12 = (char *)&VAR_11[VAR_9 - 1];
  *VAR_12 = '\0';
  for (VAR_13 = (char *)VAR_11; VAR_13 < VAR_12 && FUNC_7(VAR_13); VAR_13 += FUNC_7(VAR_13) + 1) {
   FUNC_6("Meta entry:\t%s\n", VAR_13);
  }

  FUNC_4(VAR_6, VAR_10, VAR_3);
  VAR_14++;
 }

err_out:
 return VAR_15;
}
