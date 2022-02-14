
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ishtp_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ishtp_device*,int ) ;
 int FUNC_2 (struct ishtp_device*,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct ishtp_device *VAR_3)
{
 bool VAR_4 = 1;
 uint32_t VAR_5 = 0;

 if (VAR_3->pdev->device == VAR_0) {
  VAR_5 = FUNC_1(VAR_3, VAR_2);
  VAR_4 =
   FUNC_0(VAR_5);
 } else {
  VAR_5 = FUNC_1(VAR_3, VAR_1);
  VAR_4 = !!VAR_5;

  if (VAR_5)
   FUNC_2(VAR_3, VAR_1, VAR_5);
 }

 return VAR_4;
}
