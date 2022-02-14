
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vmw_private {int dummy; } ;
typedef int define_cmd ;
struct TYPE_3__ {int gmrId; scalar_t__ numPages; } ;
typedef TYPE_1__ SVGAFifoCmdDefineGMR2 ;


 int VAR_0 ;
 int* FUNC_0 (struct vmw_private*,int) ;
 int FUNC_1 (int*,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct vmw_private*,int) ;

__attribute__((used)) static void FUNC_4(struct vmw_private *VAR_1,
       int VAR_2)
{
 SVGAFifoCmdDefineGMR2 VAR_3;
 uint32_t VAR_4 = sizeof(VAR_3) + 4;
 uint32_t *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_4);
 if (FUNC_2(VAR_5 == ((void*)0)))
  return;

 VAR_3.gmrId = VAR_2;
 VAR_3.numPages = 0;

 *VAR_5++ = VAR_0;
 FUNC_1(VAR_5, &VAR_3, sizeof(VAR_3));

 FUNC_3(VAR_1, VAR_4);
}
