
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_unit {int dummy; } ;


 int FUNC_0 (struct fw_unit*,int*) ;
 int FUNC_1 (char*,size_t,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct fw_unit *VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3[] = {0, 0, 0, 0};

 FUNC_0(VAR_0, VAR_3);

 return FUNC_1(VAR_1, VAR_2,
   "ieee1394:ven%08Xmo%08Xsp%08Xver%08X",
   VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3]);
}
