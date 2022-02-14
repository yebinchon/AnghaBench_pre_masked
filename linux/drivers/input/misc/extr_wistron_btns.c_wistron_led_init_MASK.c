
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct device {int dummy; } ;
struct TYPE_4__ {void* brightness; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*) ;
 scalar_t__ FUNC_2 (struct device*,TYPE_1__*) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static void FUNC_3(struct device *VAR_9)
{
 if (VAR_6 & VAR_1) {
  u16 VAR_10 = FUNC_0(VAR_5);
  if (VAR_10 & 1) {
   VAR_8.brightness = (VAR_10 & 2) ? VAR_2 : VAR_3;
   if (FUNC_2(VAR_9, &VAR_8))
    VAR_6 &= ~VAR_1;
   else
    FUNC_1(VAR_5, VAR_8.brightness);

  } else
   VAR_6 &= ~VAR_1;
 }

 if (VAR_6 & VAR_0) {

  VAR_7.brightness = VAR_3;
  if (FUNC_2(VAR_9, &VAR_7))
   VAR_6 &= ~VAR_0;
  else
   FUNC_1(VAR_4, VAR_7.brightness);
 }
}
