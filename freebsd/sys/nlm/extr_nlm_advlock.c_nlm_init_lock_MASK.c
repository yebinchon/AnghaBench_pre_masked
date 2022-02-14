
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t n_len; char* n_bytes; } ;
struct TYPE_4__ {size_t n_len; void* n_bytes; } ;
struct nlm4_lock {int svid; scalar_t__ l_len; scalar_t__ l_offset; TYPE_2__ oh; TYPE_1__ fh; int caller_name; } ;
struct flock {scalar_t__ l_whence; scalar_t__ l_start; scalar_t__ l_len; } ;
typedef scalar_t__ rpcvers_t ;
typedef scalar_t__ off_t ;
struct TYPE_6__ {int pr_hostname; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct nlm4_lock*,int ,int) ;
 TYPE_3__ VAR_7 ;
 int FUNC_2 (char*,int,char*,int) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct flock *VAR_8, int VAR_9, int VAR_10,
    rpcvers_t VAR_11, size_t VAR_12, void *VAR_13, off_t VAR_14,
    struct nlm4_lock *VAR_15, char VAR_16[32])
{
 size_t VAR_17;
 off_t VAR_18, VAR_19;

 if (VAR_8->l_whence == VAR_5) {
  if (VAR_14 > VAR_3
      || (VAR_8->l_start > 0 && VAR_14 > VAR_3 - VAR_8->l_start))
   return (VAR_1);
  VAR_18 = VAR_14 + VAR_8->l_start;
 } else if (VAR_8->l_whence == VAR_6 || VAR_8->l_whence == VAR_4) {
  VAR_18 = VAR_8->l_start;
 } else {
  return (VAR_0);
 }
 if (VAR_18 < 0)
  return (VAR_0);
 if (VAR_8->l_len < 0) {
  VAR_19 = -VAR_8->l_len;
  VAR_18 -= VAR_19;
  if (VAR_18 < 0)
   return (VAR_0);
 } else {
  VAR_19 = VAR_8->l_len;
 }

 if (VAR_11 == VAR_2) {



  if (VAR_18 > 0xffffffffLL || VAR_19 > 0xffffffffLL)
   return (VAR_1);
 }

 FUNC_2(VAR_16, 32, "%d@", VAR_10);
 VAR_17 = FUNC_3(VAR_16);
 FUNC_0(((void*)0), VAR_16 + VAR_17, 32 - VAR_17);
 VAR_17 = FUNC_3(VAR_16);

 FUNC_1(VAR_15, 0, sizeof(*VAR_15));
 VAR_15->caller_name = VAR_7;
 VAR_15->fh.n_len = VAR_12;
 VAR_15->fh.n_bytes = VAR_13;
 VAR_15->oh.n_len = VAR_17;
 VAR_15->oh.n_bytes = VAR_16;
 VAR_15->svid = VAR_10;
 VAR_15->l_offset = VAR_18;
 VAR_15->l_len = VAR_19;

 return (0);
}
