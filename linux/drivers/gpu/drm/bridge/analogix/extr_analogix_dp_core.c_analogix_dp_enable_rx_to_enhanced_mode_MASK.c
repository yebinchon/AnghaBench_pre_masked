
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct analogix_dp_device {int aux; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct analogix_dp_device *VAR_2,
           bool VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_2->aux, VAR_1, &VAR_4);
 if (VAR_5 != 1)
  return VAR_5;

 if (VAR_3)
  VAR_5 = FUNC_2(&VAR_2->aux, VAR_1,
      VAR_0 |
      FUNC_0(VAR_4));
 else
  VAR_5 = FUNC_2(&VAR_2->aux, VAR_1,
      FUNC_0(VAR_4));

 return VAR_5 < 0 ? VAR_5 : 0;
}
