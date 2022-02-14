
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct vmctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vmctx*,int,int ,int*,int *,int *) ;
 int FUNC_2 (struct vmctx*,int,int ,int,int ,int ) ;
 int FUNC_3 (struct vmctx*,int,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct vmctx *VAR_3, int VAR_4, uint64_t *VAR_5)
{
 int VAR_6, VAR_7;
 uint16_t VAR_8;
 uint64_t VAR_9;
 uint32_t VAR_10, VAR_11;

 VAR_6 = *VAR_5 >> VAR_0;
 *VAR_5 = 0;





 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_2, *VAR_5);
 FUNC_0(VAR_7 == 0);

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_1, &VAR_9,
       &VAR_10, &VAR_11);
 FUNC_0(VAR_7 == 0);

 VAR_9 = VAR_6 << VAR_0;
 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_1,
       VAR_9, VAR_10, VAR_11);
 FUNC_0(VAR_7 == 0);

 VAR_8 = (VAR_6 << VAR_0) >> 4;
 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_1, VAR_8);
 FUNC_0(VAR_7 == 0);
}
