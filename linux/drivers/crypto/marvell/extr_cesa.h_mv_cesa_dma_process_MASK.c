
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_cesa_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_0(struct mv_cesa_req *VAR_4,
          u32 VAR_5)
{
 if (!(VAR_5 & VAR_0))
  return -VAR_2;

 if (VAR_5 & VAR_1)
  return -VAR_3;

 return 0;
}
