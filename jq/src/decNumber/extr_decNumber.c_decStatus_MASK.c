
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_4__ {int bits; } ;
typedef TYPE_1__ decNumber ;
typedef int decContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(decNumber *VAR_3, uInt VAR_4, decContext *VAR_5) {
  if (VAR_4 & VAR_1) {

    if (VAR_4 & VAR_2) VAR_4&=~VAR_2;
     else {
      FUNC_1(VAR_3);
      VAR_3->bits=VAR_0;
      }
    }
  FUNC_0(VAR_5, VAR_4);
  return;
  }
