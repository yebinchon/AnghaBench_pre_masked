
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmabounce_pool {unsigned long size; scalar_t__ pool; scalar_t__ allocs; } ;
struct device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,struct device*,unsigned long,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dmabounce_pool *VAR_1, struct device *VAR_2,
  const char *VAR_3, unsigned long VAR_4)
{
 VAR_1->size = VAR_4;
 FUNC_0(VAR_1->allocs = 0);
 VAR_1->pool = FUNC_1(VAR_3, VAR_2, VAR_4,
         0 ,
         0 );

 return VAR_1->pool ? 0 : -VAR_0;
}
