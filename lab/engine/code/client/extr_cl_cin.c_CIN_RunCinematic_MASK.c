
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ e_status ;
struct TYPE_6__ {int currentHandle; } ;
struct TYPE_5__ {scalar_t__ status; int playonwalls; int lastTime; int startTime; int tfps; int numQuads; scalar_t__ looping; scalar_t__ shader; scalar_t__ alterGameState; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 TYPE_3__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__ VAR_8 ;
 size_t VAR_9 ;

e_status FUNC_5 (int VAR_10)
{
 int VAR_11 = 0;
 int VAR_12 = 0;

 if (VAR_10 < 0 || VAR_10>= VAR_5 || VAR_7[VAR_10].status == VAR_1) return VAR_1;

 if (VAR_6.currentHandle != VAR_10) {
  VAR_9 = VAR_10;
  VAR_6.currentHandle = VAR_9;
  VAR_7[VAR_9].status = VAR_1;
  FUNC_2();
 }

 if (VAR_7[VAR_10].playonwalls < -1)
 {
  return VAR_7[VAR_10].status;
 }

 VAR_9 = VAR_10;

 if (VAR_7[VAR_9].alterGameState) {
  if ( VAR_8.state != VAR_0 ) {
   return VAR_7[VAR_9].status;
  }
 }

 if (VAR_7[VAR_9].status == VAR_2) {
  return VAR_7[VAR_9].status;
 }

 VAR_12 = FUNC_0();
 if (VAR_7[VAR_9].shader && (FUNC_4(VAR_12 - VAR_7[VAR_9].lastTime))>100) {
  VAR_7[VAR_9].startTime += VAR_12 - VAR_7[VAR_9].lastTime;
 }
 VAR_7[VAR_9].tfps = (((FUNC_0() - VAR_7[VAR_9].startTime)*3)/100);

 VAR_11 = VAR_7[VAR_9].startTime;
 while( (VAR_7[VAR_9].tfps != VAR_7[VAR_9].numQuads)
  && (VAR_7[VAR_9].status == VAR_4) )
 {
  FUNC_1();
  if (VAR_11 != VAR_7[VAR_9].startTime) {
   VAR_7[VAR_9].tfps = (((FUNC_0() - VAR_7[VAR_9].startTime)*3)/100);
   VAR_11 = VAR_7[VAR_9].startTime;
  }
 }

 VAR_7[VAR_9].lastTime = VAR_12;

 if (VAR_7[VAR_9].status == VAR_3) {
  VAR_7[VAR_9].status = VAR_4;
 }

 if (VAR_7[VAR_9].status == VAR_1) {
   if (VAR_7[VAR_9].looping) {
  FUNC_2();
   } else {
  FUNC_3();
  return VAR_1;
   }
 }

 return VAR_7[VAR_9].status;
}
