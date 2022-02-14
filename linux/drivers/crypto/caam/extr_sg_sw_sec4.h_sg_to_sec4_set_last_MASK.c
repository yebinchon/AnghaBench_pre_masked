
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec4_sg_entry {int len; } ;
struct dpaa2_sg_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dpaa2_sg_entry*,int) ;

__attribute__((used)) static inline void FUNC_2(struct sec4_sg_entry *VAR_2)
{
 if (VAR_1)
  FUNC_1((struct dpaa2_sg_entry *)VAR_2, 1);
 else
  VAR_2->len |= FUNC_0(VAR_0);
}
