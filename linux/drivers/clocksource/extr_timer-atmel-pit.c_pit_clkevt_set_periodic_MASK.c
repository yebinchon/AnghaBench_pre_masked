
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pit_data {int cnt; int cycle; int base; } ;
struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct pit_data* FUNC_1 (struct clock_event_device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct clock_event_device *VAR_4)
{
 struct pit_data *VAR_5 = FUNC_1(VAR_4);


 VAR_5->cnt += VAR_5->cycle * FUNC_0(FUNC_2(VAR_5->base, VAR_3));
 FUNC_3(VAR_5->base, VAR_0,
    (VAR_5->cycle - 1) | VAR_1 | VAR_2);
 return 0;
}
