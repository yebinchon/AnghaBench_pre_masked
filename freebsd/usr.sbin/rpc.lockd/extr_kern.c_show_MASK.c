
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int8_t ;
struct fid {int dummy; } ;
typedef int fsid_t ;
struct TYPE_6__ {int l_whence; int l_type; scalar_t__ l_pid; scalar_t__ l_len; scalar_t__ l_start; } ;
struct TYPE_5__ {scalar_t__ pid; } ;
struct TYPE_7__ {size_t lm_fh_len; scalar_t__ lm_wait; TYPE_2__ lm_fl; scalar_t__ lm_fh; TYPE_1__ lm_msg_ident; } ;
typedef TYPE_3__ LOCKD_MSG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;

void
FUNC_1(LOCKD_MSG *VAR_2)
{
 static char VAR_3[] = "0123456789abcdef";
 struct fid *VAR_4;
 fsid_t *VAR_5;
 size_t VAR_6;
 u_int8_t *VAR_7, *VAR_8, VAR_9[VAR_1*3+1];

 FUNC_0(VAR_0, "process ID: %lu\n", (long)VAR_2->lm_msg_ident.pid);

 VAR_5 = (fsid_t *)&VAR_2->lm_fh;
 VAR_4 = (struct fid *)((u_int8_t *)&VAR_2->lm_fh + sizeof(fsid_t));

 for (VAR_8 = VAR_9, VAR_7 = (u_int8_t *)VAR_2->lm_fh,
     VAR_6 = VAR_2->lm_fh_len;
     VAR_6 > 0; ++VAR_7, --VAR_6) {
  *VAR_8++ = '\\';
  *VAR_8++ = VAR_3[(*VAR_7 & 0xf0) >> 4];
  *VAR_8++ = VAR_3[*VAR_7 & 0x0f];
 }
 *VAR_8 = '\0';

 FUNC_0(VAR_0, "fh_len %d, fh %s\n", (int)VAR_2->lm_fh_len, VAR_9);


 FUNC_0(VAR_0, "start %llu; len %llu; pid %lu; type %d; whence %d\n",
     (unsigned long long)VAR_2->lm_fl.l_start,
     (unsigned long long)VAR_2->lm_fl.l_len, (u_long)VAR_2->lm_fl.l_pid,
     VAR_2->lm_fl.l_type, VAR_2->lm_fl.l_whence);


 FUNC_0(VAR_0, "wait was %s\n", VAR_2->lm_wait ? "set" : "not set");
}
