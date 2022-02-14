
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_kpit_state {int lock; struct kvm_kpit_channel_state* channels; } ;
struct kvm_pit {struct kvm_kpit_state pit_state; } ;
struct kvm_kpit_channel_state {int rw_mode; int read_state; int write_state; int mode; int bcd; int write_latch; } ;
struct kvm_io_device {int dummy; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;




 struct kvm_pit* FUNC_0 (struct kvm_io_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct kvm_pit*,int) ;
 int FUNC_5 (struct kvm_pit*,int) ;
 int FUNC_6 (struct kvm_pit*,int,int) ;
 int FUNC_7 (char*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_8(struct kvm_vcpu *VAR_2,
    struct kvm_io_device *VAR_3,
       gpa_t VAR_4, int VAR_5, const void *VAR_6)
{
 struct kvm_pit *VAR_7 = FUNC_0(VAR_3);
 struct kvm_kpit_state *VAR_8 = &VAR_7->pit_state;
 int VAR_9, VAR_10;
 struct kvm_kpit_channel_state *VAR_11;
 u32 VAR_12 = *(u32 *) VAR_6;
 if (!FUNC_3(VAR_4))
  return -VAR_0;

 VAR_12 &= 0xff;
 VAR_4 &= VAR_1;

 FUNC_1(&VAR_8->lock);

 if (VAR_12 != 0)
  FUNC_7("write addr is 0x%x, len is %d, val is 0x%x\n",
    (unsigned int)VAR_4, VAR_5, VAR_12);

 if (VAR_4 == 3) {
  VAR_9 = VAR_12 >> 6;
  if (VAR_9 == 3) {

   for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
    VAR_11 = &VAR_8->channels[VAR_9];
    if (VAR_12 & (2 << VAR_9)) {
     if (!(VAR_12 & 0x20))
      FUNC_4(VAR_7, VAR_9);
     if (!(VAR_12 & 0x10))
      FUNC_5(VAR_7, VAR_9);
    }
   }
  } else {

   VAR_11 = &VAR_8->channels[VAR_9];
   VAR_10 = (VAR_12 >> 4) & VAR_1;
   if (VAR_10 == 0) {
    FUNC_4(VAR_7, VAR_9);
   } else {
    VAR_11->rw_mode = VAR_10;
    VAR_11->read_state = VAR_10;
    VAR_11->write_state = VAR_10;
    VAR_11->mode = (VAR_12 >> 1) & 7;
    if (VAR_11->mode > 5)
     VAR_11->mode -= 4;
    VAR_11->bcd = VAR_12 & 1;
   }
  }
 } else {

  VAR_11 = &VAR_8->channels[VAR_4];
  switch (VAR_11->write_state) {
  default:
  case 131:
   FUNC_6(VAR_7, VAR_4, VAR_12);
   break;
  case 130:
   FUNC_6(VAR_7, VAR_4, VAR_12 << 8);
   break;
  case 129:
   VAR_11->write_latch = VAR_12;
   VAR_11->write_state = 128;
   break;
  case 128:
   FUNC_6(VAR_7, VAR_4, VAR_11->write_latch | (VAR_12 << 8));
   VAR_11->write_state = 129;
   break;
  }
 }

 FUNC_2(&VAR_8->lock);
 return 0;
}
