
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u_long
FUNC_0(u_long VAR_2)
{

 if (VAR_2 < VAR_1)
  VAR_2 = VAR_1;
 if (VAR_2 <= 128)
  return (128);
 else if (VAR_2 <= 256)
  return (256);
 else if (VAR_2 <= 512)
  return (512);
 else if (VAR_2 <= 1024)
  return (1024);
 else if (VAR_2 <= 2048)
  return (2048);
 return (VAR_0);
}
