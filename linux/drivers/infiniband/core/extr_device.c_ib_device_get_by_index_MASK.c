
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct ib_device*,struct net const*) ;
 int FUNC_3 (int *) ;
 struct ib_device* FUNC_4 (int *,int ) ;

struct ib_device *FUNC_5(const struct net *VAR_2, u32 VAR_3)
{
 struct ib_device *VAR_4;

 FUNC_0(&VAR_1);
 VAR_4 = FUNC_4(&VAR_0, VAR_3);
 if (VAR_4) {
  if (!FUNC_2(VAR_4, VAR_2)) {
   VAR_4 = ((void*)0);
   goto out;
  }

  if (!FUNC_1(VAR_4))
   VAR_4 = ((void*)0);
 }
out:
 FUNC_3(&VAR_1);
 return VAR_4;
}
