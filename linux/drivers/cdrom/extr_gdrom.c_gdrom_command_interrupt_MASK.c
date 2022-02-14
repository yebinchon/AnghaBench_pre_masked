
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {int pending; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 VAR_3.status = FUNC_0(VAR_0);
 if (VAR_3.pending != 1)
  return VAR_1;
 VAR_3.pending = 0;
 FUNC_1(&VAR_2);
 return VAR_1;
}
