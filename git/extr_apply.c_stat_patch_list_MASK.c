
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {scalar_t__ lines_deleted; scalar_t__ lines_added; struct patch* next; } ;
struct apply_state {int dummy; } ;


 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (struct apply_state*,struct patch*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct apply_state *VAR_1, struct patch *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 for (VAR_3 = VAR_4 = VAR_5 = 0 ; VAR_2 ; VAR_2 = VAR_2->next) {
  VAR_3++;
  VAR_4 += VAR_2->lines_added;
  VAR_5 += VAR_2->lines_deleted;
  FUNC_1(VAR_1, VAR_2);
 }

 FUNC_0(VAR_0, VAR_3, VAR_4, VAR_5);
}
