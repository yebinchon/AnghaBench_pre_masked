
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {struct packed_git* next; } ;
struct multi_pack_index {struct multi_pack_index* next; } ;
struct disambiguate_state {int ambiguous; int repo; } ;


 struct multi_pack_index* FUNC_0 (int ) ;
 struct packed_git* FUNC_1 (int ) ;
 int FUNC_2 (struct multi_pack_index*,struct disambiguate_state*) ;
 int FUNC_3 (struct packed_git*,struct disambiguate_state*) ;

__attribute__((used)) static void FUNC_4(struct disambiguate_state *VAR_0)
{
 struct multi_pack_index *VAR_1;
 struct packed_git *VAR_2;

 for (VAR_1 = FUNC_0(VAR_0->repo); VAR_1 && !VAR_0->ambiguous;
      VAR_1 = VAR_1->next)
  FUNC_2(VAR_1, VAR_0);
 for (VAR_2 = FUNC_1(VAR_0->repo); VAR_2 && !VAR_0->ambiguous;
      VAR_2 = VAR_2->next)
  FUNC_3(VAR_2, VAR_0);
}
