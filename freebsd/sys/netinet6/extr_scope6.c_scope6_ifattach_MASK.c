
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scope6_id {int * s6id_list; } ;
struct ifnet {int if_index; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct scope6_id* FUNC_0 (int,int ,int) ;

struct scope6_id *
FUNC_1(struct ifnet *VAR_5)
{
 struct scope6_id *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_2, VAR_3 | VAR_4);




 VAR_6->s6id_list[VAR_0] = VAR_5->if_index;
 VAR_6->s6id_list[VAR_1] = VAR_5->if_index;
 return (VAR_6);
}
