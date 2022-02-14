
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct agp_file_private {struct agp_file_private* next; struct agp_file_private* prev; } ;
struct TYPE_2__ {struct agp_file_private* file_priv_list; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct agp_file_private * VAR_1)
{
 struct agp_file_private *VAR_2;

 VAR_2 = VAR_0.file_priv_list;

 if (VAR_2 != ((void*)0))
  VAR_2->prev = VAR_1;
 VAR_1->next = VAR_2;
 VAR_0.file_priv_list = VAR_1;
}
