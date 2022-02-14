
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int hint_events_per_packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int,int ) ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct input_dev *VAR_2)
{
 unsigned int VAR_3 =
  FUNC_0(VAR_2->hint_events_per_packet * VAR_0,
      VAR_1);

 return FUNC_1(VAR_3);
}
