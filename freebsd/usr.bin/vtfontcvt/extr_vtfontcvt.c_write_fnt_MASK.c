
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_header {char* magic; void** map_count; void* glyph_count; int height; int width; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (struct file_header*,int,int,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_3 (int ) ;
 int * VAR_6 ;
 int FUNC_4 (char const*) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_8)
{
 FILE *VAR_9;
 struct file_header VAR_10 = {
  .magic = "VFNT0002",
 };

 VAR_9 = FUNC_1(VAR_8, "wb");
 if (VAR_9 == ((void*)0)) {
  FUNC_4(VAR_8);
  return (1);
 }

 VAR_10.width = VAR_7;
 VAR_10.height = VAR_5;
 VAR_10.glyph_count = FUNC_3(VAR_4);
 VAR_10.map_count[0] = FUNC_3(VAR_6[0]);
 VAR_10.map_count[1] = FUNC_3(VAR_6[1]);
 VAR_10.map_count[2] = FUNC_3(VAR_6[2]);
 VAR_10.map_count[3] = FUNC_3(VAR_6[3]);
 if (FUNC_2(&VAR_10, sizeof VAR_10, 1, VAR_9) != 1) {
  FUNC_4(VAR_8);
  FUNC_0(VAR_9);
  return (1);
 }

 if (FUNC_5(VAR_9) != 0 ||
     FUNC_6(VAR_9, VAR_2) != 0 ||
     FUNC_6(VAR_9, VAR_3) != 0 ||
     FUNC_6(VAR_9, VAR_0) != 0 ||
     FUNC_6(VAR_9, VAR_1) != 0) {
  FUNC_4(VAR_8);
  FUNC_0(VAR_9);
  return (1);
 }

 FUNC_0(VAR_9);
 return (0);
}
