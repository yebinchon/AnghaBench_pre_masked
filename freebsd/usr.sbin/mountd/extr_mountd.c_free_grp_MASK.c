
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nt_name; } ;
struct TYPE_4__ {TYPE_1__ gt_net; int * gt_addrinfo; } ;
struct grouplist {scalar_t__ gr_type; TYPE_2__ gr_ptr; } ;
typedef scalar_t__ caddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct grouplist *VAR_2)
{
 if (VAR_2->gr_type == VAR_0) {
  if (VAR_2->gr_ptr.gt_addrinfo != ((void*)0))
   FUNC_1(VAR_2->gr_ptr.gt_addrinfo);
 } else if (VAR_2->gr_type == VAR_1) {
  if (VAR_2->gr_ptr.gt_net.nt_name)
   FUNC_0(VAR_2->gr_ptr.gt_net.nt_name);
 }
 FUNC_0((caddr_t)VAR_2);
}
