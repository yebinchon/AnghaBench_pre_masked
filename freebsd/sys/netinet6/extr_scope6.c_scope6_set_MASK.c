
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scope6_id {scalar_t__* s6id_list; } ;
struct ifnet {scalar_t__ if_index; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct scope6_id* FUNC_2 (struct ifnet*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_4, struct scope6_id *VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 struct scope6_id *VAR_8 = ((void*)0);

 FUNC_0(VAR_4);
 VAR_8 = FUNC_2(VAR_4);

 if (!VAR_8) {
  FUNC_1(VAR_4);
  return (VAR_0);
 }
 for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  if (VAR_5->s6id_list[VAR_6] &&
      VAR_5->s6id_list[VAR_6] != VAR_8->s6id_list[VAR_6]) {




   if (VAR_6 == VAR_1 &&
       VAR_5->s6id_list[VAR_6] != VAR_4->if_index) {
    FUNC_1(VAR_4);
    return (VAR_0);
   }

   if (VAR_6 == VAR_2 &&
       VAR_5->s6id_list[VAR_6] > VAR_3) {






    FUNC_1(VAR_4);
    return (VAR_0);
   }






   VAR_8->s6id_list[VAR_6] = VAR_5->s6id_list[VAR_6];
  }
 }
 FUNC_1(VAR_4);

 return (VAR_7);
}
