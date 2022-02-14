
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct artpec6_crypto {int pending_count; } ;


 int VAR_0 ;
 struct artpec6_crypto* FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(void)
{
 struct artpec6_crypto *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = VAR_1->pending_count;

 return VAR_2 > 6;
}
