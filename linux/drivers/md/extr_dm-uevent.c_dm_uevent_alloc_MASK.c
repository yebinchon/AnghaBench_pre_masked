
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct dm_uevent {struct mapped_device* md; int elist; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct dm_uevent* FUNC_1 (int ,int ) ;

__attribute__((used)) static struct dm_uevent *FUNC_2(struct mapped_device *VAR_2)
{
 struct dm_uevent *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->elist);
 VAR_3->md = VAR_2;

 return VAR_3;
}
