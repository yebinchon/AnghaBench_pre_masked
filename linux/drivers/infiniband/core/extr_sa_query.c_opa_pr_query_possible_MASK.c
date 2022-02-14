
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sa_path_rec {int dummy; } ;
struct ib_sa_client {int dummy; } ;
struct ib_port_attr {scalar_t__ lid; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ,struct ib_port_attr*) ;
 scalar_t__ FUNC_2 (struct ib_sa_client*,struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct ib_sa_client *VAR_4,
     struct ib_device *VAR_5,
     u8 VAR_6,
     struct sa_path_rec *VAR_7)
{
 struct ib_port_attr VAR_8;

 if (FUNC_1(VAR_5, VAR_6, &VAR_8))
  return VAR_2;

 if (FUNC_2(VAR_4, VAR_5, VAR_6))
  return VAR_3;

 if (VAR_8.lid >= FUNC_0(VAR_0))
  return VAR_2;
 else
  return VAR_1;
}
