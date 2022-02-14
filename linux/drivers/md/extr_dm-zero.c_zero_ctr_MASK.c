
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {char* error; int num_discard_bios; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dm_target *VAR_1, unsigned int VAR_2, char **VAR_3)
{
 if (VAR_2 != 0) {
  VAR_1->error = "No arguments required";
  return -VAR_0;
 }




 VAR_1->num_discard_bios = 1;

 return 0;
}
