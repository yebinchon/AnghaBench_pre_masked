
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_6__ {unsigned long long bit_offset; scalar_t__ bit_width; int address; } ;
struct TYPE_8__ {int frequency; TYPE_2__ gaddr; } ;
struct TYPE_5__ {int bit_width; } ;
struct TYPE_7__ {int frequency; TYPE_1__ gaddr; int iomem_addr; } ;


 int VAR_0 ;
 unsigned long long FUNC_0 (scalar_t__,unsigned long long) ;
 int FUNC_1 (int ,unsigned long long*,int ) ;
 unsigned long long FUNC_2 (unsigned long long,int ) ;
 int FUNC_3 (int ,unsigned long long*) ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static int FUNC_4(u64 *VAR_3, bool VAR_4)
{
 int VAR_5;

 if (VAR_4) {
  u64 VAR_6 = 0;
  int VAR_7;

  VAR_7 = FUNC_1(VAR_2.iomem_addr, &VAR_6,
        VAR_2.gaddr.bit_width);
  if (VAR_7)
   return VAR_7;

  *VAR_3 = FUNC_2(VAR_6 * 1000000ULL, VAR_2.frequency);
  return 0;
 }

 VAR_5 = FUNC_3(VAR_1.gaddr.address, VAR_3);
 if (!VAR_5) {
  u64 VAR_8 = FUNC_0(VAR_1.gaddr.bit_offset +
           VAR_1.gaddr. bit_width - 1,
           VAR_1.gaddr.bit_offset);

  *VAR_3 &= VAR_8;
  *VAR_3 >>= VAR_1.gaddr.bit_offset;
  *VAR_3 = FUNC_2(*VAR_3 * 1000000ULL, VAR_1.frequency);
  return 0;
 }

 return -VAR_0;
}
