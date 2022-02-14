
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_pack_file {int pack_name; int refcount; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct git_pack_file*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7(struct git_pack_file *VAR_2)
{
 int VAR_3;

 if (FUNC_2(&VAR_0) < 0)
  return;


 FUNC_0(VAR_1);


 FUNC_0(FUNC_6(VAR_1, VAR_2->pack_name));

 VAR_3 = FUNC_1(&VAR_2->refcount);
 if (VAR_3 == 0) {
  FUNC_5(VAR_1, VAR_2->pack_name);
  FUNC_4(VAR_2);
 }

 FUNC_3(&VAR_0);
 return;
}
