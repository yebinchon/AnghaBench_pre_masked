
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bulk_checkin_state {int offset; scalar_t__ f; int pack_idx_opts; int pack_tmp_name; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct bulk_checkin_state *VAR_1,
         unsigned VAR_2)
{
 if (!(VAR_2 & VAR_0) || VAR_1->f)
  return;

 VAR_1->f = FUNC_0(&VAR_1->pack_tmp_name);
 FUNC_2(&VAR_1->pack_idx_opts);


 VAR_1->offset = FUNC_3(VAR_1->f, 1);
 if (!VAR_1->offset)
  FUNC_1("unable to write pack header");
}
