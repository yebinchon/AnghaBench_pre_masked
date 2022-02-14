
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {int pack_promisor; int pack_local; struct packed_git* next; } ;
typedef enum for_each_object_flags { ____Placeholder_for_each_object_flags } for_each_object_flags ;
typedef int each_packed_object_fn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct packed_git*,int ,void*,int) ;
 struct packed_git* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct packed_git*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

int FUNC_4(each_packed_object_fn VAR_3, void *VAR_4,
      enum for_each_object_flags VAR_5)
{
 struct packed_git *VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_3(VAR_2);
 for (VAR_6 = FUNC_1(VAR_2); VAR_6; VAR_6 = VAR_6->next) {
  if ((VAR_5 & VAR_0) && !VAR_6->pack_local)
   continue;
  if ((VAR_5 & VAR_1) &&
      !VAR_6->pack_promisor)
   continue;
  if (FUNC_2(VAR_6)) {
   VAR_8 = 1;
   continue;
  }
  VAR_7 = FUNC_0(VAR_6, VAR_3, VAR_4, VAR_5);
  if (VAR_7)
   break;
 }
 return VAR_7 ? VAR_7 : VAR_8;
}
