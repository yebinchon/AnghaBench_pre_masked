
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ipl_rl_hdr {int len; } ;
struct ipl_rb_hdr {int len; int rbt; } ;
struct ipl_rb_components {int dummy; } ;
struct ipl_rb_certificates {int dummy; } ;
struct ipl_pl_hdr {unsigned long len; } ;
struct TYPE_6__ {scalar_t__ ipl_parmblock_ptr; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;


 TYPE_3__ VAR_2 ;
 int FUNC_0 (struct ipl_rb_certificates*) ;
 int FUNC_1 (struct ipl_rb_components*) ;
 unsigned long FUNC_2 (struct ipl_rb_components*,struct ipl_rb_certificates*,unsigned long) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

unsigned long FUNC_3(unsigned long VAR_6)
{
 struct ipl_rb_certificates *VAR_7;
 struct ipl_rb_components *VAR_8;
 struct ipl_pl_hdr *VAR_9;
 struct ipl_rl_hdr *VAR_10;
 struct ipl_rb_hdr *VAR_11;
 unsigned long VAR_12;
 void *VAR_13;





 if (!VAR_4 ||
     !(VAR_3.hdr.flags & VAR_0))
  return VAR_6;
 VAR_5 = !!(VAR_3.hdr.flags & VAR_1);






 VAR_12 = (unsigned long) VAR_2.ipl_parmblock_ptr;
 VAR_9 = (struct ipl_pl_hdr *) VAR_12;
 VAR_12 = (VAR_12 + VAR_9->len + 7) & -8UL;
 VAR_10 = (struct ipl_rl_hdr *) VAR_12;

 VAR_7 = ((void*)0);
 VAR_8 = ((void*)0);
 VAR_13 = (void *) VAR_10 + VAR_10->len;
 VAR_11 = (void *) VAR_10 + sizeof(*VAR_10);
 while ((void *) VAR_11 + sizeof(*VAR_11) < VAR_13 &&
        (void *) VAR_11 + VAR_11->len <= VAR_13) {

  switch (VAR_11->rbt) {
  case 129:
   VAR_7 = (struct ipl_rb_certificates *) VAR_11;
   break;
  case 128:
   VAR_8 = (struct ipl_rb_components *) VAR_11;
   break;
  default:
   break;
  }

  VAR_11 = (void *) VAR_11 + VAR_11->len;
 }





 if (!VAR_8 || !VAR_7)
  return VAR_6;





 VAR_6 = FUNC_2(VAR_8, VAR_7, VAR_6);
 FUNC_1(VAR_8);
 FUNC_0(VAR_7);

 return VAR_6;
}
