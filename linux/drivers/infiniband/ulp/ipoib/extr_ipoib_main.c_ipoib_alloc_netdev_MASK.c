
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rdma_netdev {int dummy; } ;
struct net_device {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_2 (struct net_device*) ;
 int VAR_3 ;
 struct net_device* FUNC_3 (int,char const*,int ,int ) ;
 int VAR_4 ;
 struct net_device* FUNC_4 (struct ib_device*,int ,int ,char const*,int ,int ) ;

__attribute__((used)) static struct net_device *FUNC_5(struct ib_device *VAR_5, u8 VAR_6,
          const char *VAR_7)
{
 struct net_device *VAR_8;

 VAR_8 = FUNC_4(VAR_5, VAR_6, VAR_3, VAR_7,
    VAR_2, VAR_4);
 if (!FUNC_1(VAR_8) || FUNC_2(VAR_8) != -VAR_1)
  return VAR_8;

 VAR_8 = FUNC_3(sizeof(struct rdma_netdev), VAR_7, VAR_2,
      VAR_4);
 if (!VAR_8)
  return FUNC_0(-VAR_0);
 return VAR_8;
}
