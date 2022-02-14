
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
typedef int u16 ;
struct sockaddr {int dummy; } ;
struct net_device {int dummy; } ;
struct list_head {int dummy; } ;
struct ib_device {int dev; } ;


 int FUNC_0 (struct list_head*,int ,int ,union ib_gid const*,struct sockaddr const*,struct net_device**) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct ib_device*,int ,int ,int *) ;
 int FUNC_4 (struct ib_device*,int ) ;

__attribute__((used)) static struct net_device *
FUNC_5(struct ib_device *VAR_0, u8 VAR_1, u16 VAR_2,
    const union ib_gid *VAR_3, const struct sockaddr *VAR_4, void *VAR_5)
{
 struct net_device *VAR_6;
 struct list_head *VAR_7 = VAR_5;
 u16 VAR_8;
 int VAR_9;
 int VAR_10;

 if (!FUNC_4(VAR_0, VAR_1))
  return ((void*)0);

 VAR_10 = FUNC_3(VAR_0, VAR_1, VAR_2, &VAR_8);
 if (VAR_10)
  return ((void*)0);

 if (!VAR_7)
  return ((void*)0);


 VAR_9 = FUNC_0(VAR_7, VAR_1, VAR_8,
      VAR_3, ((void*)0), &VAR_6);

 switch (VAR_9) {
 case 0:
  return ((void*)0);
 case 1:
  return VAR_6;
 }

 FUNC_1(VAR_6);



 VAR_9 = FUNC_0(VAR_7, VAR_1, VAR_8,
      VAR_3, VAR_4, &VAR_6);
 switch (VAR_9) {
 case 0:
  return ((void*)0);
 default:
  FUNC_2(&VAR_0->dev,
         "duplicate IP address detected\n");

 case 1:
  return VAR_6;
 }
}
