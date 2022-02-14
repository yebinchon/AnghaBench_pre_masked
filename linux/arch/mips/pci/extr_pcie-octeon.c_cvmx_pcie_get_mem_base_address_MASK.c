
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io; int did; int subdid; scalar_t__ upper; } ;
union cvmx_pcie_address {scalar_t__ u64; TYPE_1__ mem; } ;
typedef scalar_t__ uint64_t ;



__attribute__((used)) static inline uint64_t FUNC_0(int VAR_0)
{
 union cvmx_pcie_address VAR_1;
 VAR_1.u64 = 0;
 VAR_1.mem.upper = 0;
 VAR_1.mem.io = 1;
 VAR_1.mem.did = 3;
 VAR_1.mem.subdid = 3 + VAR_0;
 return VAR_1.u64;
}
