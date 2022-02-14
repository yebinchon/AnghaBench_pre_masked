
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_4__ {int (* event_handler ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int*) ;
 int VAR_9 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_10 ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_11, void *VAR_12)
{
 u32 VAR_13;

 FUNC_3(VAR_9, VAR_3, &VAR_13);
 VAR_13 &= VAR_7;





 FUNC_0(!FUNC_1());


 if (VAR_13 & VAR_0) {
  VAR_6.event_handler(&VAR_6);
  return VAR_4;
 }


 if (VAR_13 & VAR_2) {
  u32 VAR_14 = FUNC_2();

  while (((VAR_14 - VAR_8) & VAR_1) >= VAR_10) {
   VAR_8 += VAR_10;
   VAR_6.event_handler(&VAR_6);
  }
  return VAR_4;
 }


 return VAR_5;
}
