
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {scalar_t__ type; int device_type; } ;
struct wacom_wac {struct wacom_features features; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct wacom_wac*) ;
 int FUNC_1 (struct wacom_wac*) ;
 int FUNC_2 (struct wacom_wac*) ;
 int FUNC_3 (struct wacom_wac*) ;

__attribute__((used)) static int FUNC_4(struct wacom_wac *VAR_6, size_t VAR_7)
{
 struct wacom_features *VAR_8 = &VAR_6->features;

 if ((VAR_8->type == VAR_0) &&
     (VAR_8->device_type & VAR_1))
  return FUNC_3(VAR_6);
 else if (VAR_7 == VAR_4)
  return FUNC_2(VAR_6);
 else if (VAR_7 == VAR_5)
  return FUNC_0(VAR_6);
 else if (VAR_7 == VAR_2 || VAR_7 == VAR_3)
  return FUNC_1(VAR_6);

 return 0;
}
