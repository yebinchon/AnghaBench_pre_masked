
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nios2_timer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nios2_timer*,int ) ;
 int FUNC_1 (struct nios2_timer*,int ,int ) ;

__attribute__((used)) static inline unsigned long FUNC_2(struct nios2_timer *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(VAR_2, 0, VAR_1);
 VAR_3 = FUNC_0(VAR_2, VAR_0) << 16 |
  FUNC_0(VAR_2, VAR_1);

 return VAR_3;
}
