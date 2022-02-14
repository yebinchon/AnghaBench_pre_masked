
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diag204_x_info_blk_hdr {int npar; } ;
struct diag204_info_blk_hdr {int npar; } ;
typedef enum diag204_format { ____Placeholder_diag204_format } diag204_format ;
typedef int __u8 ;


 int VAR_0 ;

__attribute__((used)) static inline __u8 FUNC_0(enum diag204_format VAR_1, void *VAR_2)
{
 if (VAR_1 == VAR_0)
  return ((struct diag204_info_blk_hdr *)VAR_2)->npar;
 else
  return ((struct diag204_x_info_blk_hdr *)VAR_2)->npar;
}
