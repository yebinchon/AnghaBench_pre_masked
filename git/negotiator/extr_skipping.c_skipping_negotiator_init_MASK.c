
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fetch_negotiator {struct data* data; int release; int ack; int next; int add_tip; int known_common; } ;
struct TYPE_2__ {int compare; } ;
struct data {TYPE_1__ rev_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct data* FUNC_1 (int,int) ;

void FUNC_2(struct fetch_negotiator *VAR_8)
{
 struct data *VAR_9;
 VAR_8->known_common = VAR_4;
 VAR_8->add_tip = VAR_1;
 VAR_8->next = VAR_6;
 VAR_8->ack = VAR_0;
 VAR_8->release = VAR_7;
 VAR_8->data = VAR_9 = FUNC_1(1, sizeof(*VAR_9));
 VAR_9->rev_list.compare = VAR_3;

 if (VAR_5)
  FUNC_0(VAR_2, ((void*)0));
 VAR_5 = 1;
}
