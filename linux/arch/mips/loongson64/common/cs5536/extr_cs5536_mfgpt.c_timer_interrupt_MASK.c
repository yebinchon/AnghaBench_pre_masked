
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_3__ {int (* event_handler ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 u32 VAR_7;







 FUNC_1(FUNC_0(VAR_0), &VAR_7, &VAR_3);


 FUNC_3(FUNC_2(VAR_2) | 0x4000, VAR_2);

 VAR_4.event_handler(&VAR_4);

 return VAR_1;
}
