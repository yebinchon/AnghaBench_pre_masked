
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct TYPE_2__ {int eld; } ;
struct cdn_dp_device {TYPE_1__ connector; } ;


 struct cdn_dp_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int,size_t) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1,
    u8 *VAR_2, size_t VAR_3)
{
 struct cdn_dp_device *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, VAR_4->connector.eld, FUNC_2(sizeof(VAR_4->connector.eld), VAR_3));

 return 0;
}
