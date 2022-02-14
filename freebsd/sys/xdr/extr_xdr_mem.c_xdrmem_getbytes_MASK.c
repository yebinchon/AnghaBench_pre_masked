
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int bool_t ;
struct TYPE_3__ {scalar_t__ x_handy; char* x_private; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,scalar_t__) ;

__attribute__((used)) static bool_t
FUNC_1(XDR *VAR_2, char *VAR_3, u_int VAR_4)
{

 if (VAR_2->x_handy < VAR_4)
  return (VAR_0);
 VAR_2->x_handy -= VAR_4;
 FUNC_0(VAR_3, VAR_2->x_private, VAR_4);
 VAR_2->x_private = (char *)VAR_2->x_private + VAR_4;
 return (VAR_1);
}
