
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef int irqreturn_t ;
struct TYPE_6__ {int (* event_handler ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_10, void *VAR_11)
{
 uint16_t VAR_12 = FUNC_3(VAR_9, VAR_3);


 if (!(VAR_12 & (VAR_7 | VAR_5 | VAR_4)))
  return VAR_1;


 FUNC_5(VAR_9);

 if (FUNC_0(&VAR_8) ||
     FUNC_2(&VAR_8))
  return VAR_0;


 FUNC_4(VAR_9, VAR_2, 0);



 if (FUNC_1(&VAR_8))
  FUNC_4(VAR_9, VAR_3,
    VAR_6 | VAR_5);

 VAR_8.event_handler(&VAR_8);
 return VAR_0;
}
