
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char const*,void*) ;
 void* FUNC_3 (char const*,size_t*) ;
 scalar_t__ FUNC_4 (void*,size_t,int ) ;
 int VAR_4 ;
 int FUNC_5 (char const*,void*) ;
 char* VAR_5 ;
 int VAR_6 ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char const*) ;
 char* VAR_7 ;

int FUNC_8(int VAR_8, char **VAR_9)
{
 const char *VAR_10, *VAR_11, *VAR_12;
 void *VAR_13, *VAR_14;
 size_t VAR_15, VAR_16, VAR_17;

 VAR_5 = VAR_9[0];

 if (VAR_8 < 4 || VAR_8 > 5) {
  FUNC_1(VAR_6,
   "Usage: %s <debug VDSO> <stripped VDSO> <output file> [<name>]\n",
   VAR_5);
  return VAR_0;
 }

 VAR_10 = VAR_9[1];
 VAR_11 = VAR_9[2];
 VAR_12 = VAR_9[3];
 VAR_7 = (VAR_8 > 4) ? VAR_9[4] : "";

 VAR_13 = FUNC_3(VAR_10, &VAR_15);
 if (!VAR_13)
  return VAR_0;

 VAR_14 = FUNC_3(VAR_11, &VAR_16);
 if (!VAR_14)
  return VAR_0;


 if (!FUNC_5(VAR_10, VAR_13))
  return VAR_0;
 if (!FUNC_5(VAR_11, VAR_14))
  return VAR_0;

 if (FUNC_4(VAR_13, VAR_15, VAR_2) != 0) {
  FUNC_1(VAR_6, "%s: Failed to sync '%s': %s\n", VAR_5,
   VAR_10, FUNC_6(VAR_3));
  return VAR_0;
 } else if (FUNC_4(VAR_14, VAR_16, VAR_2) != 0) {
  FUNC_1(VAR_6, "%s: Failed to sync '%s': %s\n", VAR_5,
   VAR_11, FUNC_6(VAR_3));
  return VAR_0;
 }

 VAR_4 = FUNC_0(VAR_12, "w");
 if (!VAR_4) {
  FUNC_1(VAR_6, "%s: Failed to open '%s': %s\n", VAR_5,
   VAR_12, FUNC_6(VAR_3));
  return VAR_0;
 }

 FUNC_1(VAR_4, "/* Automatically generated - do not edit */\n");
 FUNC_1(VAR_4, "#include <linux/linkage.h>\n");
 FUNC_1(VAR_4, "#include <linux/mm.h>\n");
 FUNC_1(VAR_4, "#include <asm/vdso.h>\n");


 FUNC_1(VAR_4,
  "static unsigned char vdso_data[PAGE_ALIGN(%zu)] __page_aligned_data = {\n\t",
  VAR_16);
 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  if (!(VAR_17 % 10))
   FUNC_1(VAR_4, "\n\t");
  FUNC_1(VAR_4, "0x%02x, ", ((unsigned char *)VAR_14)[VAR_17]);
 }
 FUNC_1(VAR_4, "\n};\n");


 FUNC_1(VAR_4,
  "static struct page *vdso_pages[PAGE_ALIGN(%zu) / PAGE_SIZE];\n",
  VAR_16);

 FUNC_1(VAR_4, "struct mips_vdso_image vdso_image%s%s = {\n",
  (VAR_7[0]) ? "_" : "", VAR_7);
 FUNC_1(VAR_4, "\t.data = vdso_data,\n");
 FUNC_1(VAR_4, "\t.size = PAGE_ALIGN(%zu),\n", VAR_16);
 FUNC_1(VAR_4, "\t.mapping = {\n");
 FUNC_1(VAR_4, "\t\t.name = \"[vdso]\",\n");
 FUNC_1(VAR_4, "\t\t.pages = vdso_pages,\n");
 FUNC_1(VAR_4, "\t},\n");


 if (!FUNC_2(VAR_10, VAR_13)) {
  FUNC_7(VAR_12);
  return VAR_0;
 }

 FUNC_1(VAR_4, "};\n");

 return VAR_1;
}
