
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nextScrollTime; scalar_t__ adjustValue; scalar_t__ nextAdjustTime; int scrollKey; int item; } ;
typedef TYPE_1__ scrollInfo_t ;
struct TYPE_4__ {scalar_t__ realTime; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(void *VAR_6) {
 scrollInfo_t *VAR_7 = (scrollInfo_t*)VAR_6;
 if (VAR_0->realTime > VAR_7->nextScrollTime) {



  FUNC_0(VAR_7->item, VAR_7->scrollKey, VAR_5, VAR_4);
  VAR_7->nextScrollTime = VAR_0->realTime + VAR_7->adjustValue;
 }

 if (VAR_0->realTime > VAR_7->nextAdjustTime) {
  VAR_7->nextAdjustTime = VAR_0->realTime + VAR_1;
  if (VAR_7->adjustValue > VAR_3) {
   VAR_7->adjustValue -= VAR_2;
  }
 }
}
