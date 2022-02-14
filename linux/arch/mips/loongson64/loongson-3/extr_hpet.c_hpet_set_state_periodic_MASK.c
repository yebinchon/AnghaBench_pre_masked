
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct clock_event_device *VAR_9)
{
 int VAR_10;

 FUNC_5(&VAR_8);

 FUNC_4("set clock event to periodic mode!\n");

 FUNC_2();


 VAR_10 = FUNC_0(VAR_1);
 VAR_10 &= ~VAR_5;
 VAR_10 |= VAR_4 | VAR_6 | VAR_7 |
  VAR_3;
 FUNC_3(VAR_1, VAR_10);


 FUNC_3(VAR_2, VAR_0);
 FUNC_7(1);
 FUNC_3(VAR_2, VAR_0);


 FUNC_1();

 FUNC_6(&VAR_8);
 return 0;
}
