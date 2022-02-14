
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct device {int dummy; } ;
struct TYPE_3__ {scalar_t__ value; int error_text; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct device*,char*,scalar_t__,int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_4, u8 *VAR_5)
{
 size_t VAR_6 = FUNC_0(VAR_3);
 int VAR_7;
 u8 VAR_8 = VAR_5[1];

 if (*VAR_5 != VAR_1)
  return 0;

 if (VAR_8 == VAR_2 || VAR_8 == VAR_0)
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  if (VAR_3[VAR_7].value == VAR_8)
   break;


 if (VAR_7 != VAR_6) {
  FUNC_1(VAR_4, "%02x: %s:\n", VAR_8, VAR_3[VAR_7].error_text);
  return VAR_8;
 }

 return 0;
}
