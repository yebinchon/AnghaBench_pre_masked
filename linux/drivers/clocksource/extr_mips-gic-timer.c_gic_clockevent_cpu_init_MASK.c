
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {char* name; int features; int rating; int set_next_event; int cpumask; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clock_event_device*,int ,int,int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_6,
        struct clock_event_device *VAR_7)
{
 VAR_7->name = "MIPS GIC";
 VAR_7->features = VAR_1 |
      VAR_0;

 VAR_7->rating = 350;
 VAR_7->irq = VAR_5;
 VAR_7->cpumask = FUNC_1(VAR_6);
 VAR_7->set_next_event = VAR_4;

 FUNC_0(VAR_7, VAR_3, 0x300, 0x7fffffff);

 FUNC_2(VAR_5, VAR_2);
}
