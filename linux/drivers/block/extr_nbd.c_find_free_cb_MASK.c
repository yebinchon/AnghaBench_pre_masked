
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbd_device {int config_refs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(int VAR_0, void *VAR_1, void *VAR_2)
{
 struct nbd_device *VAR_3 = VAR_1;
 struct nbd_device **VAR_4 = VAR_2;

 if (!FUNC_0(&VAR_3->config_refs)) {
  *VAR_4 = VAR_3;
  return 1;
 }
 return 0;
}
