
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {scalar_t__ tm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct layer2*) ;
 int FUNC_2 (struct layer2*,int ,int ) ;
 scalar_t__ FUNC_3 (struct layer2*,int ,int ,struct sk_buff*) ;

__attribute__((used)) static inline void
FUNC_4(struct layer2 *VAR_2, struct sk_buff *VAR_3)
{
 if (VAR_2->tm)
  FUNC_2(VAR_2, VAR_0, 0);
 if (FUNC_3(VAR_2, VAR_1, FUNC_1(VAR_2), VAR_3))
  FUNC_0(VAR_3);
}
