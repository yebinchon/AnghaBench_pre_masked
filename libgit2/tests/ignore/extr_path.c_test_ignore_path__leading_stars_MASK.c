
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(void)
{
 FUNC_1(
  "attr/.gitignore",
  "*/onestar\n"
  "**/twostars\n"
  "*/parent1/kid1/*\n"
  "**/parent2/kid2/*\n");

 FUNC_0(1, "dir1/onestar");
 FUNC_0(1, "dir1/onestar/child");
 FUNC_0(0, "dir1/dir2/onestar");

 FUNC_0(1, "dir1/twostars");
 FUNC_0(1, "dir1/twostars/child");
 FUNC_0(1, "dir1/dir2/twostars");
 FUNC_0(1, "dir1/dir2/twostars/child");
 FUNC_0(1, "dir1/dir2/dir3/twostars");

 FUNC_0(1, "dir1/parent1/kid1/file");
 FUNC_0(1, "dir1/parent1/kid1/file/inside/parent");
 FUNC_0(0, "dir1/dir2/parent1/kid1/file");
 FUNC_0(0, "dir1/parent1/file");
 FUNC_0(0, "dir1/kid1/file");

 FUNC_0(1, "dir1/parent2/kid2/file");
 FUNC_0(1, "dir1/parent2/kid2/file/inside/parent");
 FUNC_0(1, "dir1/dir2/parent2/kid2/file");
 FUNC_0(1, "dir1/dir2/dir3/parent2/kid2/file");
 FUNC_0(0, "dir1/parent2/file");
 FUNC_0(0, "dir1/kid2/file");
}
