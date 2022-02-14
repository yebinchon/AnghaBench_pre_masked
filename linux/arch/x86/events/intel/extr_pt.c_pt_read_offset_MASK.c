
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct topa_page {int topa; } ;
struct pt_buffer {int output_off; int cur_idx; int * cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct topa_page* FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct pt_buffer *VAR_2)
{
 u64 VAR_3, VAR_4;
 struct topa_page *VAR_5;

 FUNC_1(VAR_0, VAR_4);
 VAR_5 = FUNC_0(VAR_4);
 VAR_2->cur = &VAR_5->topa;

 FUNC_1(VAR_1, VAR_3);

 VAR_2->output_off = VAR_3 >> 32;

 VAR_2->cur_idx = (VAR_3 & 0xffffff80) >> 7;
}
