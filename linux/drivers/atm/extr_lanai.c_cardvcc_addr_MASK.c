
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vci_t ;
struct lanai_dev {int dummy; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct lanai_dev const*,int) ;

__attribute__((used)) static inline bus_addr_t FUNC_1(const struct lanai_dev *VAR_1,
 vci_t VAR_2)
{
 return FUNC_0(VAR_1, VAR_2 * VAR_0);
}
