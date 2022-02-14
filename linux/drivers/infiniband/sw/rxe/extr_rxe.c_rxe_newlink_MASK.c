
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_dev {int ib_dev; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 struct rxe_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char const*,struct net_device*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, struct net_device *VAR_2)
{
 struct rxe_dev *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_3->ib_dev);
  FUNC_1("already configured on %s\n", VAR_2->name);
  VAR_4 = -VAR_0;
  goto err;
 }

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_1("failed to add %s\n", VAR_2->name);
  goto err;
 }
err:
 return VAR_4;
}
