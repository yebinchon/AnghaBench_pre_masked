
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

int FUNC_2(char *VAR_2)
{
 if (!FUNC_0(&VAR_1)) {
  FUNC_1("IOMMU required but not present or enabled.  USNIC QPs will not function w/o enabling IOMMU\n");
  return -VAR_0;
 }

 return 0;
}
