
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct el_subpacket {int class; int type; } ;




 struct el_subpacket* FUNC_0 (struct el_subpacket*) ;
 struct el_subpacket* FUNC_1 (struct el_subpacket*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int,int ) ;

struct el_subpacket *
FUNC_3(struct el_subpacket *VAR_1)
{
 struct el_subpacket *VAR_2 = ((void*)0);

 switch(VAR_1->class) {
 case 128:

  break;
 case 129:
  VAR_2 = FUNC_0(VAR_1);
  break;
 default:
  if (((void*)0) == (VAR_2 = FUNC_1(VAR_1))) {
   FUNC_2("%s** Unexpected header CLASS %d TYPE %d"
          " -- aborting.\n",
          VAR_0,
          VAR_1->class, VAR_1->type);
  }
  break;
 }

 return VAR_2;
}
