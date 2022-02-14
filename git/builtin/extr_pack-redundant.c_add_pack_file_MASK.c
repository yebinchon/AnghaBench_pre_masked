
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {struct packed_git* next; int pack_name; } ;
struct pack_list {int dummy; } ;


 struct pack_list* FUNC_0 (struct packed_git*) ;
 int FUNC_1 (char*,char const*) ;
 struct packed_git* FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int ,char const*) ;
 int VAR_0 ;

__attribute__((used)) static struct pack_list * FUNC_5(const char *VAR_1)
{
 struct packed_git *VAR_2 = FUNC_2(VAR_0);

 if (FUNC_3(VAR_1) < 40)
  FUNC_1("Bad pack filename: %s", VAR_1);

 while (VAR_2) {
  if (FUNC_4(VAR_2->pack_name, VAR_1))
   return FUNC_0(VAR_2);
  VAR_2 = VAR_2->next;
 }
 FUNC_1("Filename %s not found in packed_git", VAR_1);
}
