
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct analogix_dp_device {int aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct analogix_dp_device*,int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct analogix_dp_device *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3, VAR_0);

 VAR_4 = FUNC_1(&VAR_3->aux, VAR_2,
     VAR_1);

 return VAR_4 < 0 ? VAR_4 : 0;
}
