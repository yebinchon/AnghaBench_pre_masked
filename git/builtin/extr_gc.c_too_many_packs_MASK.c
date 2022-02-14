
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {scalar_t__ pack_keep; int pack_local; struct packed_git* next; } ;


 int VAR_0 ;
 struct packed_git* FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(void)
{
 struct packed_git *VAR_2;
 int VAR_3;

 if (VAR_0 <= 0)
  return 0;

 for (VAR_3 = 0, VAR_2 = FUNC_0(VAR_1); VAR_2; VAR_2 = VAR_2->next) {
  if (!VAR_2->pack_local)
   continue;
  if (VAR_2->pack_keep)
   continue;




  VAR_3++;
 }
 return VAR_0 < VAR_3;
}
