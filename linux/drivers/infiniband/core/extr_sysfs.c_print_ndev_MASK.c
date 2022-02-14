
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {char* name; } ;
struct ib_gid_attr {int ndev; } ;


 size_t VAR_0 ;
 struct net_device* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 size_t FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static size_t FUNC_4(const struct ib_gid_attr *VAR_1, char *VAR_2)
{
 struct net_device *VAR_3;
 size_t VAR_4 = -VAR_0;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_1->ndev);
 if (VAR_3)
  VAR_4 = FUNC_3(VAR_2, "%s\n", VAR_3->name);
 FUNC_2();
 return VAR_4;
}
