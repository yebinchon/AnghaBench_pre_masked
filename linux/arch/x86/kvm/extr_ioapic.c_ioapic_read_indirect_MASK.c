
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct kvm_ioapic {int ioregsel; int id; TYPE_1__* redirtbl; } ;
struct TYPE_2__ {int bits; } ;


 size_t VAR_0 ;



 int VAR_1 ;

__attribute__((used)) static unsigned long FUNC_0(struct kvm_ioapic *VAR_2,
       unsigned long VAR_3,
       unsigned long VAR_4)
{
 unsigned long VAR_5 = 0;

 switch (VAR_2->ioregsel) {
 case 128:
  VAR_5 = ((((VAR_0 - 1) & 0xff) << 16)
     | (VAR_1 & 0xff));
  break;

 case 130:
 case 129:
  VAR_5 = ((VAR_2->id & 0xf) << 24);
  break;

 default:
  {
   u32 VAR_6 = (VAR_2->ioregsel - 0x10) >> 1;
   u64 VAR_7;

   if (VAR_6 < VAR_0)
    VAR_7 =
     VAR_2->redirtbl[VAR_6].bits;
   else
    VAR_7 = ~0ULL;

   VAR_5 = (VAR_2->ioregsel & 0x1) ?
       (VAR_7 >> 32) & 0xffffffff :
       VAR_7 & 0xffffffff;
   break;
  }
 }

 return VAR_5;
}
