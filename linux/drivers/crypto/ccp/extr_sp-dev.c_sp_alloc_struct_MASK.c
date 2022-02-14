
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_device {int ord; int name; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct sp_device* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int VAR_2 ;

struct sp_device *FUNC_3(struct device *VAR_3)
{
 struct sp_device *VAR_4;

 VAR_4 = FUNC_1(VAR_3, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->dev = VAR_3;
 VAR_4->ord = FUNC_0(&VAR_2);
 FUNC_2(VAR_4->name, VAR_1, "sp-%u", VAR_4->ord);

 return VAR_4;
}
