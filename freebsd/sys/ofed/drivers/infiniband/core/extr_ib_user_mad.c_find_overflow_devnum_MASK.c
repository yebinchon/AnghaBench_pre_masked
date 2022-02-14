
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_3)
{
 int VAR_4;

 if (!VAR_1) {
  VAR_4 = FUNC_0(&VAR_1, 0, VAR_0 * 2,
       "infiniband_mad");
  if (VAR_4) {
   FUNC_1(&VAR_3->dev,
    "couldn't register dynamic device number\n");
   return VAR_4;
  }
 }

 VAR_4 = FUNC_2(VAR_2, VAR_0);
 if (VAR_4 >= VAR_0)
  return -1;

 return VAR_4;
}
