
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int second; int minute; int hour; int year; int day; int month; } ;
union el_timestamp {TYPE_1__ b; scalar_t__ as_int; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ) ;

void
FUNC_1(union el_timestamp *VAR_1)
{
 if (VAR_1->as_int)
  FUNC_0("%s  TIMESTAMP: %d/%d/%02d %d:%02d:%0d\n",
         VAR_0,
         VAR_1->b.month, VAR_1->b.day,
         VAR_1->b.year, VAR_1->b.hour,
         VAR_1->b.minute, VAR_1->b.second);
}
