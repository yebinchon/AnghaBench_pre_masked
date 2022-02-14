
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_kpit_state {int lock; struct kvm_kpit_channel_state* channels; } ;
struct kvm_pit {struct kvm_kpit_state pit_state; } ;
struct kvm_kpit_channel_state {int status; int count_latched; int latched_count; int read_state; scalar_t__ status_latched; } ;
struct kvm_io_device {int dummy; } ;
typedef int ret ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;




 struct kvm_pit* FUNC_0 (struct kvm_io_device*) ;
 int FUNC_1 (void*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kvm_pit*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_2,
      struct kvm_io_device *VAR_3,
      gpa_t VAR_4, int VAR_5, void *VAR_6)
{
 struct kvm_pit *VAR_7 = FUNC_0(VAR_3);
 struct kvm_kpit_state *VAR_8 = &VAR_7->pit_state;
 int VAR_9, VAR_10;
 struct kvm_kpit_channel_state *VAR_11;
 if (!FUNC_5(VAR_4))
  return -VAR_0;

 VAR_4 &= VAR_1;
 if (VAR_4 == 3)
  return 0;

 VAR_11 = &VAR_8->channels[VAR_4];

 FUNC_2(&VAR_8->lock);

 if (VAR_11->status_latched) {
  VAR_11->status_latched = 0;
  VAR_9 = VAR_11->status;
 } else if (VAR_11->count_latched) {
  switch (VAR_11->count_latched) {
  default:
  case 131:
   VAR_9 = VAR_11->latched_count & 0xff;
   VAR_11->count_latched = 0;
   break;
  case 130:
   VAR_9 = VAR_11->latched_count >> 8;
   VAR_11->count_latched = 0;
   break;
  case 129:
   VAR_9 = VAR_11->latched_count & 0xff;
   VAR_11->count_latched = 130;
   break;
  }
 } else {
  switch (VAR_11->read_state) {
  default:
  case 131:
   VAR_10 = FUNC_4(VAR_7, VAR_4);
   VAR_9 = VAR_10 & 0xff;
   break;
  case 130:
   VAR_10 = FUNC_4(VAR_7, VAR_4);
   VAR_9 = (VAR_10 >> 8) & 0xff;
   break;
  case 129:
   VAR_10 = FUNC_4(VAR_7, VAR_4);
   VAR_9 = VAR_10 & 0xff;
   VAR_11->read_state = 128;
   break;
  case 128:
   VAR_10 = FUNC_4(VAR_7, VAR_4);
   VAR_9 = (VAR_10 >> 8) & 0xff;
   VAR_11->read_state = 129;
   break;
  }
 }

 if (VAR_5 > sizeof(VAR_9))
  VAR_5 = sizeof(VAR_9);
 FUNC_1(VAR_6, (char *)&VAR_9, VAR_5);

 FUNC_3(&VAR_8->lock);
 return 0;
}
