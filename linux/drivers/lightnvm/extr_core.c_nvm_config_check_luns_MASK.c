
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvm_geo {int all_luns; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct nvm_geo *VAR_1, int VAR_2,
     int VAR_3)
{
 if (VAR_2 > VAR_3 || VAR_3 >= VAR_1->all_luns) {
  FUNC_0("lun out of bound (%u:%u > %u)\n",
   VAR_2, VAR_3, VAR_1->all_luns - 1);
  return -VAR_0;
 }

 return 0;
}
