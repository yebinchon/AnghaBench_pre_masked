
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amba_id {int dummy; } ;
struct amba_device {int res; int dev; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(struct amba_device *VAR_0,
        const struct amba_id *VAR_1)
{
 return FUNC_0(&VAR_0->dev, &VAR_0->res);
}
