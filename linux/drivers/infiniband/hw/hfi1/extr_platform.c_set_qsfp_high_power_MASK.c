
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__* cache; } ;
struct hfi1_pportdata {TYPE_2__* dd; TYPE_1__ qsfp_info; } ;
struct TYPE_4__ {int hfi1_id; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hfi1_pportdata*,int ,size_t,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_3(struct hfi1_pportdata *VAR_5)
{
 u8 VAR_6 = 0, VAR_7 = 0;
 u8 *VAR_8 = VAR_5->qsfp_info.cache;
 int VAR_9;

 VAR_6 = FUNC_0(VAR_8[VAR_1]);

 if (VAR_6 > VAR_2) {
  VAR_7 = VAR_8[VAR_4];

  VAR_7 |= 1;
  VAR_7 &= ~(0x2);

  VAR_9 = FUNC_2(VAR_5, VAR_5->dd->hfi1_id,
     VAR_4,
     &VAR_7, 1);
  if (VAR_9 != 1)
   return -VAR_0;

  if (VAR_6 > VAR_3) {
   VAR_7 |= (1 << 2);
   VAR_9 = FUNC_2(VAR_5, VAR_5->dd->hfi1_id,
      VAR_4,
      &VAR_7, 1);
   if (VAR_9 != 1)
    return -VAR_0;
  }


  FUNC_1(300);
 }
 return 0;
}
