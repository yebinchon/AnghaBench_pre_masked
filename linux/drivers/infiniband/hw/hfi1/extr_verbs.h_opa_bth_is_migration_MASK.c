
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_other_headers {int* bth; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct ib_other_headers *VAR_1)
{
 return VAR_1->bth[1] & FUNC_0(VAR_0);
}
