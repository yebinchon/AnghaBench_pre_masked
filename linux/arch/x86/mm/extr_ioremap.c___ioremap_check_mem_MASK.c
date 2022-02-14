
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ioremap_desc {int dummy; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (struct ioremap_desc*,int ,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,struct ioremap_desc*,int ) ;

__attribute__((used)) static void FUNC_2(resource_size_t VAR_1, unsigned long VAR_2,
    struct ioremap_desc *VAR_3)
{
 u64 VAR_4, VAR_5;

 VAR_4 = (u64)VAR_1;
 VAR_5 = VAR_4 + VAR_2 - 1;
 FUNC_0(VAR_3, 0, sizeof(struct ioremap_desc));

 FUNC_1(VAR_4, VAR_5, VAR_3, VAR_0);
}
