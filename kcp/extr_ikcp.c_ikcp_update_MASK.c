
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int updated; scalar_t__ interval; scalar_t__ current; scalar_t__ ts_flush; } ;
typedef TYPE_1__ ikcpcb ;
typedef scalar_t__ IUINT32 ;
typedef int IINT32 ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(ikcpcb *VAR_0, IUINT32 VAR_1)
{
 IINT32 VAR_2;

 VAR_0->current = VAR_1;

 if (VAR_0->updated == 0) {
  VAR_0->updated = 1;
  VAR_0->ts_flush = VAR_0->current;
 }

 VAR_2 = FUNC_0(VAR_0->current, VAR_0->ts_flush);

 if (VAR_2 >= 10000 || VAR_2 < -10000) {
  VAR_0->ts_flush = VAR_0->current;
  VAR_2 = 0;
 }

 if (VAR_2 >= 0) {
  VAR_0->ts_flush += VAR_0->interval;
  if (FUNC_0(VAR_0->current, VAR_0->ts_flush) >= 0) {
   VAR_0->ts_flush = VAR_0->current + VAR_0->interval;
  }
  FUNC_1(VAR_0);
 }
}
