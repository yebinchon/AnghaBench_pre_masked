
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int * FUNC_1 (struct device_node*) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_1)
{
 int VAR_2 = VAR_0;
 const __be32 *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  VAR_2 = FUNC_0(VAR_3);
 return VAR_2;
}
