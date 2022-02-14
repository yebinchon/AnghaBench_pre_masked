
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_dev {int ib_dev; } ;
struct net_device {int dummy; } ;
struct kernel_param {int dummy; } ;
typedef int intf ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int *,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (char*,...) ;
 struct rxe_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,struct net_device*) ;
 int FUNC_6 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_2, const struct kernel_param *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 char VAR_6[32];
 struct net_device *VAR_7;
 struct rxe_dev *VAR_8;

 VAR_4 = FUNC_6(VAR_2, VAR_6, sizeof(VAR_6));
 if (!VAR_4) {
  FUNC_3("add: invalid interface name\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_0(&VAR_1, VAR_6);
 if (!VAR_7) {
  FUNC_3("interface %s not found\n", VAR_6);
  return -VAR_0;
 }

 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8) {
  FUNC_2(&VAR_8->ib_dev);
  FUNC_3("already configured on %s\n", VAR_6);
  VAR_5 = -VAR_0;
  goto err;
 }

 VAR_5 = FUNC_5("rxe%d", VAR_7);
 if (VAR_5) {
  FUNC_3("failed to add %s\n", VAR_6);
  goto err;
 }

err:
 FUNC_1(VAR_7);
 return VAR_5;
}
