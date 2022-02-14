
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct device_node {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct device_node*,char*,int,int*) ;
 int FUNC_3 (struct device_node*,char*,int*) ;
 int VAR_1 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct device_node *VAR_2)
{
 int VAR_3, VAR_4 = -1;
 u32 VAR_5;
 u64 VAR_6;






 VAR_3 = FUNC_3(VAR_2, "ibm,opal-phbid", &VAR_6);
 if (VAR_3) {
  VAR_3 = FUNC_2(VAR_2, "reg", 1, &VAR_5);
  VAR_6 = VAR_5;
 }

 if (!VAR_3)
  VAR_4 = (int)(VAR_6 & (VAR_0 - 1));


 if ((VAR_4 >= 0) && !FUNC_5(VAR_4, VAR_1))
  return VAR_4;





 VAR_4 = FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_4 >= VAR_0);
 FUNC_4(VAR_4, VAR_1);

 return VAR_4;
}
