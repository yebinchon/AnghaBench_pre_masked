
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct finfo {int flag; int forward_xid; } ;


 struct finfo* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static struct finfo *
FUNC_0(u_int32_t VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_3 % (u_int32_t)VAR_2;
 if ((VAR_0[VAR_4].flag & VAR_1) &&
     (VAR_0[VAR_4].forward_xid == VAR_3)) {
  return (&VAR_0[VAR_4]);
 }
 return (((void*)0));
}
