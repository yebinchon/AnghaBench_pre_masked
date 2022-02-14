
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ghes {TYPE_2__* generic; } ;
typedef int sdei_event_callback ;
struct TYPE_3__ {scalar_t__ vector; } ;
struct TYPE_4__ {TYPE_1__ notify; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,int ,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int *,struct ghes*) ;

int FUNC_4(struct ghes *VAR_5, sdei_event_callback *VAR_6,
         sdei_event_callback *VAR_7)
{
 int VAR_8;
 u64 VAR_9;
 u32 VAR_10;
 sdei_event_callback *VAR_11;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_10 = VAR_5->generic->notify.vector;
 if (VAR_10 == 0) {




  return -VAR_1;
 }

 VAR_8 = FUNC_1(VAR_10, VAR_3,
          &VAR_9);
 if (VAR_8)
  return VAR_8;

 if (VAR_9 == VAR_4)
  VAR_11 = VAR_7;
 else
  VAR_11 = VAR_6;

 VAR_8 = FUNC_3(VAR_10, VAR_11, VAR_5);
 if (!VAR_8)
  VAR_8 = FUNC_2(VAR_10);

 return VAR_8;
}
