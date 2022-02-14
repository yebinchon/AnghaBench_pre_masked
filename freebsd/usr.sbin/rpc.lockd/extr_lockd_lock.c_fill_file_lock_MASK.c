
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int64_t ;
struct TYPE_2__ {int l_len; int l_offset; int svid; int exclusive; } ;
struct file_lock {int nsm_status; int status; int flags; int blocking; TYPE_1__ client; int filehandle; } ;
typedef int int32_t ;
typedef int fhandle_t ;
typedef int bool_t ;


 int FUNC_0 (int const*,int *,int) ;

void
FUNC_1(struct file_lock *VAR_0, const fhandle_t *VAR_1,
    const bool_t VAR_2, const int32_t VAR_3,
    const u_int64_t VAR_4, const u_int64_t VAR_5,
    const int VAR_6, const int VAR_7, const int VAR_8, const int VAR_9)
{
 FUNC_0(VAR_1, &VAR_0->filehandle, sizeof(fhandle_t));

 VAR_0->client.exclusive = VAR_2;
 VAR_0->client.svid = VAR_3;
 VAR_0->client.l_offset = VAR_4;
 VAR_0->client.l_len = VAR_5;

 VAR_0->nsm_status = VAR_6;
 VAR_0->status = VAR_7;
 VAR_0->flags = VAR_8;
 VAR_0->blocking = VAR_9;
}
