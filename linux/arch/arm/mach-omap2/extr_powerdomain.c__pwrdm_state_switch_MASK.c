
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerdomain {int state; int * state_counter; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (struct powerdomain*) ;
 int FUNC_1 (struct powerdomain*,int) ;
 int FUNC_2 (struct powerdomain*) ;
 int FUNC_3 (struct powerdomain*) ;
 int FUNC_4 (struct powerdomain*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct powerdomain *VAR_4, int VAR_5)
{

 int VAR_6, VAR_7, VAR_8, VAR_9 = 0;

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_4);

 switch (VAR_5) {
 case 129:
  VAR_6 = VAR_4->state;
  break;
 case 128:
  VAR_6 = FUNC_3(VAR_4);
  if (VAR_4->state != VAR_6)
   VAR_4->state_counter[VAR_6]++;
  if (VAR_6 == VAR_2)
   FUNC_0(VAR_4);




  VAR_7 = FUNC_2(VAR_4);
  if (VAR_7 != VAR_6) {
   VAR_9 = (VAR_3 |
           ((VAR_7 & VAR_1) << 8) |
           ((VAR_6 & VAR_1) << 0));
   FUNC_6(VAR_4->name,
         VAR_9,
         FUNC_5());
  }
  break;
 default:
  return -VAR_0;
 }

 if (VAR_8 != VAR_6)
  VAR_4->state_counter[VAR_8]++;

 FUNC_1(VAR_4, VAR_6);

 VAR_4->state = VAR_8;

 return 0;
}
