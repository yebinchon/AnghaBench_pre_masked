
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union cpl_wr_size {int dummy; } cpl_wr_size ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (int,int) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff_head *VAR_2, int VAR_3)
{
 struct sk_buff *VAR_4;
 unsigned int VAR_5;
 size_t VAR_6;

 VAR_6 = FUNC_1(sizeof(union cpl_wr_size), 16);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = FUNC_0(VAR_6, VAR_1);
  if (!VAR_4)
   goto fail;
  FUNC_3(VAR_2, VAR_4);
 }
 return 0;
fail:
 FUNC_2(VAR_2);
 return -VAR_0;
}
