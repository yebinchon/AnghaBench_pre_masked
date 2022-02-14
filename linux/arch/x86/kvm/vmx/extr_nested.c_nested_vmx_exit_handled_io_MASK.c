
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vmcs12 {scalar_t__ io_bitmap_a; scalar_t__ io_bitmap_b; } ;
struct kvm_vcpu {int dummy; } ;
typedef scalar_t__ gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,scalar_t__,int*,int) ;
 int FUNC_1 (struct vmcs12*,int ) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_3,
           struct vmcs12 *VAR_4)
{
 unsigned long VAR_5;
 gpa_t VAR_6, VAR_7;
 unsigned int VAR_8;
 int VAR_9;
 u8 VAR_10;

 if (!FUNC_1(VAR_4, VAR_1))
  return FUNC_1(VAR_4, VAR_0);

 VAR_5 = FUNC_2(VAR_2);

 VAR_8 = VAR_5 >> 16;
 VAR_9 = (VAR_5 & 7) + 1;

 VAR_7 = (gpa_t)-1;
 VAR_10 = -1;

 while (VAR_9 > 0) {
  if (VAR_8 < 0x8000)
   VAR_6 = VAR_4->io_bitmap_a;
  else if (VAR_8 < 0x10000)
   VAR_6 = VAR_4->io_bitmap_b;
  else
   return 1;
  VAR_6 += (VAR_8 & 0x7fff) / 8;

  if (VAR_7 != VAR_6)
   if (FUNC_0(VAR_3, VAR_6, &VAR_10, 1))
    return 1;
  if (VAR_10 & (1 << (VAR_8 & 7)))
   return 1;

  VAR_8++;
  VAR_9--;
  VAR_7 = VAR_6;
 }

 return 0;
}
