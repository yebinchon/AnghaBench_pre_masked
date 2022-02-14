
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct i40iw_sge {int stag; int len; int tag_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(u64 *VAR_3, u32 VAR_4, struct i40iw_sge *VAR_5)
{
 if (VAR_5) {
  FUNC_1(VAR_3, VAR_4, FUNC_0(VAR_5->tag_off, VAR_2));
  FUNC_1(VAR_3, (VAR_4 + 8),
         (FUNC_0(VAR_5->len, VAR_0) |
          FUNC_0(VAR_5->stag, VAR_1)));
 }
}
