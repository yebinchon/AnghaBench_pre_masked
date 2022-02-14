
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct msu_sink_private {int dev; } ;


 int FUNC_0 (int ,struct sg_table*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct sg_table *VAR_1, size_t VAR_2)
{
 struct msu_sink_private *VAR_3 = VAR_0;

 FUNC_0(VAR_3->dev, VAR_1);

 return 0;
}
