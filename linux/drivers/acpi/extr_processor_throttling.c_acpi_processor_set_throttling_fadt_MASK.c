
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int state_count; int state; int duty_offset; TYPE_2__* states; int address; } ;
struct TYPE_5__ {int throttling; } ;
struct acpi_processor {int throttling_platform_limit; TYPE_3__ throttling; TYPE_1__ flags; } ;
struct TYPE_8__ {int duty_offset; } ;
struct TYPE_6__ {int performance; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct acpi_processor *VAR_5,
           int VAR_6, bool VAR_7)
{
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;

 if (!VAR_5)
  return -VAR_1;

 if ((VAR_6 < 0) || (VAR_6 > (VAR_5->throttling.state_count - 1)))
  return -VAR_1;

 if (!VAR_5->flags.throttling)
  return -VAR_2;

 if (!VAR_7 && (VAR_6 == VAR_5->throttling.state))
  return 0;

 if (VAR_6 < VAR_5->throttling_platform_limit)
  return -VAR_3;



 if (VAR_6) {
  VAR_10 = VAR_5->throttling.state_count - VAR_6;

  VAR_10 <<= VAR_5->throttling.duty_offset;


  VAR_9 = VAR_5->throttling.state_count - 1;

  VAR_9 <<= VAR_4.duty_offset;
  VAR_9 = ~VAR_9;
 }

 FUNC_2();





 VAR_8 = FUNC_1(VAR_5->throttling.address);
 if (VAR_8 & 0x10) {
  VAR_8 &= 0xFFFFFFEF;
  FUNC_4(VAR_8, VAR_5->throttling.address);
 }





 if (VAR_6) {
  VAR_8 &= VAR_9;
  VAR_8 |= VAR_10;
  FUNC_4(VAR_8, VAR_5->throttling.address);

  VAR_8 |= 0x00000010;
  FUNC_4(VAR_8, VAR_5->throttling.address);
 }

 VAR_5->throttling.state = VAR_6;

 FUNC_3();

 FUNC_0((VAR_0,
     "Throttling state set to T%d (%d%%)\n", VAR_6,
     (VAR_5->throttling.states[VAR_6].performance ? VAR_5->
      throttling.states[VAR_6].performance / 10 : 0)));

 return 0;
}
