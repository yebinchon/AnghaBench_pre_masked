
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum kvm_page_track_mode { ____Placeholder_kvm_page_track_mode } kvm_page_track_mode ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(enum kvm_page_track_mode VAR_1)
{
 if (VAR_1 < 0 || VAR_1 >= VAR_0)
  return 0;

 return 1;
}
