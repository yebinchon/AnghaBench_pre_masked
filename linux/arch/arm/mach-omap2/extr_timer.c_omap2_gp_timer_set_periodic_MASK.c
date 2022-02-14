
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct clock_event_device {int dummy; } ;
struct TYPE_5__ {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int,int ) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int FUNC_3(struct clock_event_device *VAR_6)
{
 u32 VAR_7;

 FUNC_1(&VAR_5, VAR_4, VAR_5.rate);

 VAR_7 = VAR_5.rate / VAR_0;
 VAR_7 -= 1;

 FUNC_2(&VAR_5, VAR_3, 0xffffffff - VAR_7,
         VAR_4);
 FUNC_0(&VAR_5,
       VAR_1 | VAR_2,
       0xffffffff - VAR_7, VAR_4);
 return 0;
}
