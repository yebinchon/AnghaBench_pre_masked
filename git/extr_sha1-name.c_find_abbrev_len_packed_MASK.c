
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {struct packed_git* next; } ;
struct multi_pack_index {struct multi_pack_index* next; } ;
struct min_abbrev_data {int repo; } ;


 int FUNC_0 (struct multi_pack_index*,struct min_abbrev_data*) ;
 int FUNC_1 (struct packed_git*,struct min_abbrev_data*) ;
 struct multi_pack_index* FUNC_2 (int ) ;
 struct packed_git* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct min_abbrev_data *VAR_0)
{
 struct multi_pack_index *VAR_1;
 struct packed_git *VAR_2;

 for (VAR_1 = FUNC_2(VAR_0->repo); VAR_1; VAR_1 = VAR_1->next)
  FUNC_0(VAR_1, VAR_0);
 for (VAR_2 = FUNC_3(VAR_0->repo); VAR_2; VAR_2 = VAR_2->next)
  FUNC_1(VAR_2, VAR_0);
}
