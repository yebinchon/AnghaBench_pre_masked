
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(int VAR_3)
{
 int VAR_4 = VAR_3 - VAR_2 - VAR_1 -
         FUNC_1(sizeof(struct skb_shared_info));

 FUNC_0(VAR_4 < VAR_0);
 return VAR_4;
}
