
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mcp3422 {int lock; int config; int i2c; } ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mcp3422 *VAR_0, u8 VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->lock);

 VAR_2 = FUNC_0(VAR_0->i2c, &VAR_1, 1);
 if (VAR_2 > 0) {
  VAR_0->config = VAR_1;
  VAR_2 = 0;
 }

 FUNC_2(&VAR_0->lock);

 return VAR_2;
}
