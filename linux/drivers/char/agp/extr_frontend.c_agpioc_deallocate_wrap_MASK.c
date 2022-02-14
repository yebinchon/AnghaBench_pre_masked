
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_memory {int dummy; } ;
struct agp_file_private {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct agp_memory* FUNC_1 (int) ;
 int FUNC_2 (struct agp_memory*) ;

int FUNC_3(struct agp_file_private *VAR_1, int VAR_2)
{
 struct agp_memory *VAR_3;

 FUNC_0("");
 VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 FUNC_2(VAR_3);
 return 0;
}
