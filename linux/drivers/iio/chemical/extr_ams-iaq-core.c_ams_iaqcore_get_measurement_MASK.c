
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ams_iaqcore_data {scalar_t__ last_update; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ams_iaqcore_data*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ams_iaqcore_data *VAR_2)
{
 int VAR_3;


 if (!FUNC_1(VAR_1, VAR_2->last_update + VAR_0))
  return 0;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2->last_update = VAR_1;

 return 0;
}
