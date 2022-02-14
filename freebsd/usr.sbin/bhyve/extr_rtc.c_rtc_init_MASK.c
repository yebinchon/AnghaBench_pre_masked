
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (struct vmctx*,int) ;
 size_t FUNC_2 (struct vmctx*) ;
 size_t FUNC_3 (struct vmctx*) ;
 int FUNC_4 (struct vmctx*,int ) ;
 int FUNC_5 (struct vmctx*,int ,size_t) ;

void
FUNC_6(struct vmctx *VAR_7, int VAR_8)
{
 size_t VAR_9;
 size_t VAR_10;
 int VAR_11;
 VAR_10 = (FUNC_3(VAR_7) - VAR_5) / VAR_6;
 VAR_11 = FUNC_5(VAR_7, VAR_3, VAR_10);
 FUNC_0(VAR_11 == 0);
 VAR_11 = FUNC_5(VAR_7, VAR_4, VAR_10 >> 8);
 FUNC_0(VAR_11 == 0);

 VAR_9 = FUNC_2(VAR_7) / VAR_6;
 VAR_11 = FUNC_5(VAR_7, VAR_0, VAR_9);
 FUNC_0(VAR_11 == 0);
 VAR_11 = FUNC_5(VAR_7, VAR_2, VAR_9 >> 8);
 FUNC_0(VAR_11 == 0);
 VAR_11 = FUNC_5(VAR_7, VAR_1, VAR_9 >> 16);
 FUNC_0(VAR_11 == 0);

 VAR_11 = FUNC_4(VAR_7, FUNC_1(VAR_7, VAR_8));
 FUNC_0(VAR_11 == 0);
}
