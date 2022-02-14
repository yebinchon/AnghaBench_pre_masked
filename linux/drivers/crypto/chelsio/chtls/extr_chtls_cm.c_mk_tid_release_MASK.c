
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cpl_tid_release {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpl_tid_release*,int ,unsigned int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,unsigned int) ;
 int FUNC_2 (struct cpl_tid_release*,int ,unsigned int) ;
 unsigned int FUNC_3 (int,int) ;
 int FUNC_4 (struct sk_buff*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4)
{
 struct cpl_tid_release *VAR_5;
 unsigned int VAR_6;

 VAR_6 = FUNC_3(sizeof(struct cpl_tid_release), 16);
 VAR_5 = (struct cpl_tid_release *)FUNC_1(VAR_2, VAR_6);
 FUNC_2(VAR_5, 0, VAR_6);
 FUNC_4(VAR_2, VAR_0, VAR_3);
 FUNC_0(VAR_5, VAR_1, VAR_4);
}
