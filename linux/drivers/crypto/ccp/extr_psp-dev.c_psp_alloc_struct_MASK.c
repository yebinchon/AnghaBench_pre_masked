
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_device {int ord; struct device* dev; } ;
struct psp_device {int name; struct sp_device* sp; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct psp_device* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (int ,int,char*,int) ;

__attribute__((used)) static struct psp_device *FUNC_2(struct sp_device *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 struct psp_device *VAR_3;

 VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->dev = VAR_2;
 VAR_3->sp = VAR_1;

 FUNC_1(VAR_3->name, sizeof(VAR_3->name), "psp-%u", VAR_1->ord);

 return VAR_3;
}
