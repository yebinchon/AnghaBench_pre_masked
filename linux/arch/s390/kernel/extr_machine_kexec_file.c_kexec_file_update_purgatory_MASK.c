
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int type ;
struct s390_load_data {int dummy; } ;
struct kimage {scalar_t__ type; } ;
typedef int entry ;
typedef int crash_size ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (struct kimage*,char*,scalar_t__*,int,int) ;

__attribute__((used)) static int FUNC_1(struct kimage *VAR_5,
           struct s390_load_data *VAR_6)
{
 u64 VAR_7, VAR_8;
 int VAR_9;

 if (VAR_5->type == VAR_0) {
  VAR_7 = VAR_2;
  VAR_8 = VAR_0;
 } else {
  VAR_7 = VAR_3;
  VAR_8 = VAR_1;
 }

 VAR_9 = FUNC_0(VAR_5, "kernel_entry", &VAR_7,
          sizeof(VAR_7), 0);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_5, "kernel_type", &VAR_8,
          sizeof(VAR_8), 0);
 if (VAR_9)
  return VAR_9;

 if (VAR_5->type == VAR_0) {
  u64 VAR_10;

  VAR_9 = FUNC_0(VAR_5, "crash_start",
           &VAR_4.start,
           sizeof(VAR_4.start),
           0);
  if (VAR_9)
   return VAR_9;

  VAR_10 = VAR_4.end - VAR_4.start + 1;
  VAR_9 = FUNC_0(VAR_5, "crash_size",
           &VAR_10,
           sizeof(VAR_10),
           0);
 }
 return VAR_9;
}
