
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n2_mau {int mau_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct n2_mau* FUNC_1 (int,int ) ;

__attribute__((used)) static struct n2_mau *FUNC_2(void)
{
 struct n2_mau *VAR_1 = FUNC_1(sizeof(struct n2_mau), VAR_0);

 if (VAR_1)
  FUNC_0(&VAR_1->mau_list);

 return VAR_1;
}
