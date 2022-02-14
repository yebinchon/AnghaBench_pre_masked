
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm_lap_msg {int offset12; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline __be32 FUNC_2(struct cm_lap_msg *VAR_0)
{
 return FUNC_1(FUNC_0(VAR_0->offset12) >> 8);
}
