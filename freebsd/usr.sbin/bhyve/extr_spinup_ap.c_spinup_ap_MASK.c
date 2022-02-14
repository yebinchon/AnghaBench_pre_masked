
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vmctx*,int,int,int ) ;
 int FUNC_2 (struct vmctx*,int) ;
 int VAR_1 ;
 int FUNC_3 (struct vmctx*,int,int *) ;
 int FUNC_4 (struct vmctx*,int) ;
 int FUNC_5 (struct vmctx*,int,int ,int) ;

int
FUNC_6(struct vmctx *VAR_2, int VAR_3, int VAR_4, uint64_t VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_4 != 0);
 FUNC_0(VAR_4 < VAR_1);

 VAR_6 = FUNC_4(VAR_2, VAR_4);
 FUNC_0(VAR_6 == 0);

 FUNC_2(VAR_2, VAR_4);







 VAR_6 = FUNC_5(VAR_2, VAR_4, VAR_0, 1);
 FUNC_0(VAR_6 == 0);

 FUNC_3(VAR_2, VAR_4, &VAR_5);

 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);

 return (VAR_4);
}
