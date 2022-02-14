
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,struct stat*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;

int
FUNC_5(int VAR_5, char *VAR_6[])
{
 int VAR_7;
 struct stat VAR_8;

 if (VAR_5 != 2) {
  (void) FUNC_4("Error: missing binary name.\n");
  (void) FUNC_4("Usage:\n\t%s <binary name>\n",
      VAR_6[0]);
  return (1);
 }

 VAR_4 = 0;

 if ((VAR_7 = FUNC_2(VAR_6[1], VAR_2)) < 0) {
  FUNC_3("open");
  return (VAR_4);
 }
 if (FUNC_0(VAR_7, &VAR_8) < 0) {
  FUNC_3("fstat");
  return (VAR_4);
 }

 if (FUNC_1(0, VAR_8.st_size,
     VAR_3, VAR_1, VAR_7, 0) == VAR_0) {
  FUNC_3("mmap");
  return (VAR_4);
 }

 return (0);
}
