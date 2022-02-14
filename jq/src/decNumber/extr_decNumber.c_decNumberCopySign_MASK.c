
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uByte ;
struct TYPE_10__ {int bits; } ;
typedef TYPE_1__ decNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,TYPE_1__ const*,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*) ;

decNumber * FUNC_2(decNumber *VAR_3, const decNumber *VAR_4,
                              const decNumber *VAR_5) {
  uByte VAR_6;



  VAR_6=VAR_5->bits & VAR_0;
  FUNC_1(VAR_3, VAR_4);
  VAR_3->bits&=~VAR_0;
  VAR_3->bits|=VAR_6;
  return VAR_3;
  }
