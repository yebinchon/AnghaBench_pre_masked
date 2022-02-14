
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {char* new_name; char* old_name; int lines_added; int lines_deleted; scalar_t__ is_binary; struct patch* next; } ;
struct apply_state {int line_termination; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct apply_state *VAR_1,
          struct patch *VAR_2)
{
 for ( ; VAR_2; VAR_2 = VAR_2->next) {
  const char *VAR_3;
  VAR_3 = VAR_2->new_name ? VAR_2->new_name : VAR_2->old_name;
  if (VAR_2->is_binary)
   FUNC_0("-\t-\t");
  else
   FUNC_0("%d\t%d\t", VAR_2->lines_added, VAR_2->lines_deleted);
  FUNC_1(VAR_3, VAR_0, VAR_1->line_termination);
 }
}
