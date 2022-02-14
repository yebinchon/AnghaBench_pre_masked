
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int * h; } ;
typedef TYPE_1__ md5_ctx_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int const*,int const) ;

__attribute__((used)) static void FUNC_3 (u32 VAR_0[4], const u32 *VAR_1, const u32 VAR_2)
{


  md5_ctx_t VAR_3;

  FUNC_1 (&VAR_3);
  FUNC_2 (&VAR_3, VAR_1, VAR_2);
  FUNC_0 (&VAR_3);

  VAR_0[0] = VAR_3.h[0];
  VAR_0[1] = VAR_3.h[1];
  VAR_0[2] = VAR_3.h[2];
  VAR_0[3] = VAR_3.h[3];
}
