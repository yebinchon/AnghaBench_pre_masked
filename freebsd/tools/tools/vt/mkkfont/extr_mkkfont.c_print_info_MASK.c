
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_header {int width; int height; scalar_t__* map_count; } ;


 int FUNC_0 (scalar_t__) ;
 char** VAR_0 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(struct file_header *VAR_1)
{
 unsigned int VAR_2;

 FUNC_1(
     "\nstruct vt_font vt_font_default = {\n"
     "\t.vf_width\t\t= %u,\n"
     "\t.vf_height\t\t= %u,\n"
     "\t.vf_bytes\t\t= font_bytes,\n",
     VAR_1->width, VAR_1->height);

 FUNC_1("\t.vf_map\t\t\t= {\n");
 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  if (VAR_1->map_count[VAR_2] > 0)
   FUNC_1("\t\t\t\t    font_mapping_%s,\n", VAR_0[VAR_2]);
  else
   FUNC_1("\t\t\t\t    NULL,\n");
 }
 FUNC_1("\t\t\t\t  },\n");
 FUNC_1("\t.vf_map_count\t\t= { %u, %u, %u, %u },\n",
     FUNC_0(VAR_1->map_count[0]),
     FUNC_0(VAR_1->map_count[1]),
     FUNC_0(VAR_1->map_count[2]),
     FUNC_0(VAR_1->map_count[3]));
 FUNC_1("\t.vf_refcount\t\t= 1,\n};\n");

 return (0);
}
