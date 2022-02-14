
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_range_node {unsigned int range_min; unsigned int window_len; } ;
struct regmap {int dummy; } ;



__attribute__((used)) static unsigned int FUNC_0(struct regmap *VAR_0,
       unsigned int VAR_1,
       struct regmap_range_node *VAR_2)
{
 unsigned int VAR_3 = (VAR_1 - VAR_2->range_min) / VAR_2->window_len;

 return VAR_3;
}
