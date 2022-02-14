
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seama_entity_header {scalar_t__ magic; int size; int metasize; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int,size_t) ;
 size_t VAR_3 ;
 size_t FUNC_7 (int ) ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,char*,int,size_t) ;
 int FUNC_11 (int,char*,int,size_t) ;
 int VAR_4 ;
 scalar_t__ FUNC_12 (struct seama_entity_header*,int,size_t,size_t) ;
 int VAR_5 ;
 char* FUNC_13 (int ) ;
 int FUNC_14 () ;

int
FUNC_15(const char *VAR_6, size_t VAR_7, size_t VAR_8)
{
 int VAR_9;
 char *VAR_10;
 ssize_t VAR_11;
 size_t VAR_12;
 size_t VAR_13;
 struct seama_entity_header *VAR_14;

 if (VAR_4 < 2)
  FUNC_2(VAR_5, "Trying to fix SEAMA header in %s at 0x%zx...\n",
   VAR_6, VAR_7);

 VAR_12 = VAR_7 & ~(VAR_1 - 1);
 VAR_7 -= VAR_12;

 VAR_9 = FUNC_5(VAR_6);
 if(VAR_9 < 0) {
  FUNC_2(VAR_5, "Could not open mtd device: %s\n", VAR_6);
  FUNC_1(1);
 }

 if (VAR_12 + VAR_1 > VAR_3) {
  FUNC_2(VAR_5, "Offset too large, device size 0x%zx\n",
   VAR_3);
  FUNC_1(1);
 }

 VAR_10 = FUNC_4(VAR_1);
 if (!VAR_10) {
  FUNC_9("malloc");
  FUNC_1(1);
 }

 VAR_11 = FUNC_10(VAR_9, VAR_10, VAR_1, VAR_12);
 if (VAR_11 != VAR_1) {
  FUNC_9("pread");
  FUNC_1(1);
 }

 VAR_14 = (struct seama_entity_header *)(VAR_10 + VAR_7);
 if (VAR_14->magic != FUNC_3(VAR_0)) {
  FUNC_2(VAR_5, "No SEAMA header found\n");
  FUNC_1(1);
 } else if (!FUNC_7(VAR_14->size)) {
  FUNC_2(VAR_5, "Seama entity with empty image\n");
  FUNC_1(1);
 }

 VAR_13 = VAR_7 + sizeof(struct seama_entity_header) + FUNC_8(VAR_14->metasize);
 if (!VAR_8)
  VAR_8 = VAR_3 - VAR_13;
 if (VAR_8 > FUNC_7(VAR_14->size))
  VAR_8 = FUNC_7(VAR_14->size);
 if (FUNC_12(VAR_14, VAR_9, VAR_13, VAR_8))
  goto out;

 if (FUNC_6(VAR_9, VAR_12)) {
  FUNC_2(VAR_5, "Can't erease block at 0x%zx (%s)\n",
   VAR_12, FUNC_13(VAR_2));
  FUNC_1(1);
 }

 if (VAR_4 < 2)
  FUNC_2(VAR_5, "Rewriting block at 0x%zx\n", VAR_12);

 if (FUNC_11(VAR_9, VAR_10, VAR_1, VAR_12) != VAR_1) {
  FUNC_2(VAR_5, "Error writing block (%s)\n", FUNC_13(VAR_2));
  FUNC_1(1);
 }

 if (VAR_4 < 2)
  FUNC_2(VAR_5, "Done.\n");

out:
 FUNC_0 (VAR_9);
 FUNC_14();

 return 0;
}
