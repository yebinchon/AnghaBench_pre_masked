
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_resource {int id; } ;
struct vmw_cotable {int seen_entries; scalar_t__ type; } ;


 int FUNC_0 (char*,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vmw_cotable* FUNC_1 (struct vmw_resource*) ;

int FUNC_2(struct vmw_resource *VAR_2, int VAR_3)
{
 struct vmw_cotable *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3 < 0 || VAR_3 >= VAR_1) {
  FUNC_0("Illegal COTable id. Type is %u. Id is %d\n",
     (unsigned) VAR_4->type, VAR_3);
  return -VAR_0;
 }

 if (VAR_4->seen_entries < VAR_3) {

  VAR_2->id = -1;
  VAR_4->seen_entries = VAR_3;
 }

 return 0;
}
