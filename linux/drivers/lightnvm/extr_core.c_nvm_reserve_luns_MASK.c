
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvm_dev {int lun_map; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct nvm_dev *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_2; VAR_4 <= VAR_3; VAR_4++) {
  if (FUNC_2(VAR_4, VAR_1->lun_map)) {
   FUNC_1("lun %d already allocated\n", VAR_4);
   goto err;
  }
 }

 return 0;
err:
 while (--VAR_4 >= VAR_2)
  FUNC_0(VAR_4, VAR_1->lun_map);

 return -VAR_0;
}
