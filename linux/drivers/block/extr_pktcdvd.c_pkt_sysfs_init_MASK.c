
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int class_groups; int class_release; int owner; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_7 = 0;





 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return -VAR_1;
 VAR_4->name = VAR_0;
 VAR_4->owner = VAR_3;
 VAR_4->class_release = VAR_6;
 VAR_4->class_groups = VAR_5;
 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7) {
  FUNC_1(VAR_4);
  VAR_4 = ((void*)0);
  FUNC_3("failed to create class pktcdvd\n");
  return VAR_7;
 }
 return 0;
}
