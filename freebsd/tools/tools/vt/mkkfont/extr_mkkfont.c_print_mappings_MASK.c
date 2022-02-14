
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_mapping {int length; int destination; int source; } ;
struct file_header {int * map_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct file_mapping*,int,int,int ) ;
 char** VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(struct file_header *VAR_2, int VAR_3)
{
 struct file_mapping VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7 = 0;


 VAR_5 = FUNC_1(VAR_2->map_count[VAR_3]);

 if (VAR_5 == 0)
  return (0);

 FUNC_4("\nstatic struct vt_font_map font_mapping_%s[%u] = {",
     VAR_0[VAR_3], VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (FUNC_2(&VAR_4, sizeof VAR_4, 1, VAR_1) != 1) {
   FUNC_3("mapping");
   return (1);
  }

  FUNC_4(VAR_7 == 0 ? "\n\t" : " ");
  FUNC_4("{ 0x%04x, 0x%04x, 0x%02x },",
      FUNC_1(VAR_4.source), FUNC_0(VAR_4.destination),
      FUNC_0(VAR_4.length));
  VAR_7 = (VAR_7 + 1) % 2;
 }

 FUNC_4("\n};\n");

 return (0);
}
