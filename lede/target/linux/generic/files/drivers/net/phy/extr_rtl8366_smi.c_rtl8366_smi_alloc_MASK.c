
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8366_smi {struct device* parent; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*) ;
 struct rtl8366_smi* FUNC_2 (int,int ) ;

struct rtl8366_smi *FUNC_3(struct device *VAR_1)
{
 struct rtl8366_smi *VAR_2;

 FUNC_0(!VAR_1);

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2) {
  FUNC_1(VAR_1, "no memory for private data\n");
  return ((void*)0);
 }

 VAR_2->parent = VAR_1;
 return VAR_2;
}
