
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int const*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_1(u32 VAR_10, const __be32 *VAR_11)
{
 if (FUNC_0(VAR_5, VAR_11, VAR_7) &&
     !(VAR_10 & VAR_2))
  return -VAR_0;

 if (FUNC_0(VAR_5, VAR_11, VAR_6) &&
     !(VAR_10 & VAR_1))
  return -VAR_0;

 if (FUNC_0(VAR_5, VAR_11, VAR_8) &&
     !(VAR_10 & VAR_3))
  return -VAR_0;

 if (FUNC_0(VAR_5, VAR_11, VAR_9) &&
     !(VAR_10 & VAR_4))
  return -VAR_0;

 return 0;
}
