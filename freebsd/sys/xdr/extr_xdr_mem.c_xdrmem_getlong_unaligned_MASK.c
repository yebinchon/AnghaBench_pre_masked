
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int int32_t ;
typedef int bool_t ;
struct TYPE_3__ {int x_handy; char* x_private; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 long FUNC_1 (int ) ;

__attribute__((used)) static bool_t
FUNC_2(XDR *VAR_2, long *VAR_3)
{
 u_int32_t VAR_4;

 if (VAR_2->x_handy < sizeof(int32_t))
  return (VAR_0);
 VAR_2->x_handy -= sizeof(int32_t);
 FUNC_0(&VAR_4, VAR_2->x_private, sizeof(int32_t));
 *VAR_3 = FUNC_1(VAR_4);
 VAR_2->x_private = (char *)VAR_2->x_private + sizeof(int32_t);
 return (VAR_1);
}
