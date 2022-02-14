
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_other_headers {int * bth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline u8 FUNC_1(struct ib_other_headers *VAR_2)
{
 return (u8)((FUNC_0(VAR_2->bth[0]) >> VAR_0) &
     VAR_1);
}
