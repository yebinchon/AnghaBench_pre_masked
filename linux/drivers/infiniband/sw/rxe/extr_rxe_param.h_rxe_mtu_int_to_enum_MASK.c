
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ib_mtu { ____Placeholder_ib_mtu } ib_mtu ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline enum ib_mtu FUNC_0(int VAR_5)
{
 if (VAR_5 < 256)
  return 0;
 else if (VAR_5 < 512)
  return VAR_2;
 else if (VAR_5 < 1024)
  return VAR_4;
 else if (VAR_5 < 2048)
  return VAR_0;
 else if (VAR_5 < 4096)
  return VAR_1;
 else
  return VAR_3;
}
