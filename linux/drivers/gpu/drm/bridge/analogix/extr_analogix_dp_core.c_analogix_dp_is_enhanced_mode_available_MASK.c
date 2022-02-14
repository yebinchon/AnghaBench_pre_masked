
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct analogix_dp_device {int aux; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct analogix_dp_device *VAR_1,
        u8 *VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_1->aux, VAR_0, &VAR_3);
 if (VAR_4 != 1) {
  *VAR_2 = 0;
  return VAR_4;
 }

 *VAR_2 = FUNC_0(VAR_3);

 return 0;
}
