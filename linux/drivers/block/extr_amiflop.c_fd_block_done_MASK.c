
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_5__ {int dsklen; } ;
struct TYPE_4__ {scalar_t__ expires; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int VAR_8 ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_9, void *VAR_10)
{
 if (VAR_1)
  VAR_2.dsklen = 0x4000;

 if (VAR_1 == 2) {
  VAR_8 = 2;
  VAR_4.expires = VAR_3 + 1;
  VAR_5 = VAR_6;
  FUNC_0(&VAR_4);
 }
 else {
  VAR_1 = 0;
  FUNC_1 (&VAR_7);
 }
 return VAR_0;
}
