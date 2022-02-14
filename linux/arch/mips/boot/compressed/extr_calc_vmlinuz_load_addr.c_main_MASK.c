
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct stat {scalar_t__ st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,unsigned long long) ;
 int FUNC_3 (char*,char*,unsigned long long*) ;
 int FUNC_4 (char*,struct stat*) ;
 int VAR_4 ;

int FUNC_5(int VAR_5, char *VAR_6[])
{
 unsigned long long VAR_7, VAR_8, VAR_9;
 struct stat VAR_10;

 if (VAR_5 != 3) {
  FUNC_0(VAR_4, "Usage: %s <pathname> <vmlinux_load_addr>\n",
    VAR_6[0]);
  return VAR_0;
 }

 if (FUNC_4(VAR_6[1], &VAR_10) == -1) {
  FUNC_1("stat");
  return VAR_0;
 }


 VAR_3 = 0;
 if (FUNC_3(VAR_6[2], "%llx", &VAR_8) != 1) {
  if (VAR_3 != 0)
   FUNC_1("sscanf");
  else
   FUNC_0(VAR_4, "No matching characters\n");

  return VAR_0;
 }

 VAR_7 = (uint64_t)VAR_10.st_size;
 VAR_9 = VAR_8 + VAR_7;






 VAR_9 += (VAR_2 - VAR_7 % VAR_2);

 FUNC_2("0x%llx\n", VAR_9);

 return VAR_1;
}
