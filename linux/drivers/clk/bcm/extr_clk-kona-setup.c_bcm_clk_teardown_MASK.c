
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * data; } ;
struct kona_clk {int type; TYPE_1__ u; int init_data; } ;


 int VAR_0 ;

 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct kona_clk *VAR_1)
{
 switch (VAR_1->type) {
 case 128:
  FUNC_0(VAR_1->u.data, &VAR_1->init_data);
  break;
 default:
  break;
 }
 VAR_1->u.data = ((void*)0);
 VAR_1->type = VAR_0;
}
