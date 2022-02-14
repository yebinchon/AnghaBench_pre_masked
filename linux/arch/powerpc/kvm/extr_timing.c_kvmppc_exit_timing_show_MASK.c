
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct seq_file {struct kvm_vcpu* private; } ;
struct TYPE_2__ {int * timing_count_type; int * timing_sum_quad_duration; int * timing_sum_duration; int * timing_max_duration; int * timing_min_duration; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int * VAR_1 ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct seq_file*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_3, void *VAR_4)
{
 struct kvm_vcpu *VAR_5 = VAR_3->private;
 int VAR_6;
 u64 VAR_7, VAR_8, VAR_9, VAR_10;

 FUNC_2(VAR_3, "type	count	min	max	sum	sum_squared\n");

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {

  VAR_7 = VAR_5->arch.timing_min_duration[VAR_6];
  FUNC_0(VAR_7, VAR_2);
  VAR_8 = VAR_5->arch.timing_max_duration[VAR_6];
  FUNC_0(VAR_8, VAR_2);
  VAR_9 = VAR_5->arch.timing_sum_duration[VAR_6];
  FUNC_0(VAR_9, VAR_2);
  VAR_10 = VAR_5->arch.timing_sum_quad_duration[VAR_6];
  FUNC_0(VAR_10, VAR_2);

  FUNC_1(VAR_3, "%12s	%10d	%10lld	%10lld	%20lld	%20lld\n",
   VAR_1[VAR_6],
   VAR_5->arch.timing_count_type[VAR_6],
   VAR_7,
   VAR_8,
   VAR_9,
   VAR_10);

 }
 return 0;
}
