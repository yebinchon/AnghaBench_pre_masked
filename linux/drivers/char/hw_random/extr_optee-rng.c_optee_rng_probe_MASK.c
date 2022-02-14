
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tee_ioctl_open_session_arg {scalar_t__ ret; int session; scalar_t__ num_params; int clnt_login; int uuid; } ;
struct TYPE_4__ {int b; } ;
struct TYPE_5__ {TYPE_1__ uuid; } ;
struct tee_client_device {TYPE_2__ id; } ;
struct device {int dummy; } ;
typedef int sess_arg ;
struct TYPE_6__ {int ctx; int session_id; struct device* dev; int optee_rng; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct tee_ioctl_open_session_arg*,int ,int) ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ,int *,int *) ;
 int FUNC_9 (int ,struct tee_ioctl_open_session_arg*,int *) ;
 struct tee_client_device* FUNC_10 (struct device*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_6)
{
 struct tee_client_device *VAR_7 = FUNC_10(VAR_6);
 int VAR_8 = 0, VAR_9 = -VAR_1;
 struct tee_ioctl_open_session_arg VAR_10;

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));


 VAR_5.ctx = FUNC_8(((void*)0), VAR_4, ((void*)0),
            ((void*)0));
 if (FUNC_0(VAR_5.ctx))
  return -VAR_1;


 FUNC_4(VAR_10.uuid, VAR_7->id.uuid.b, VAR_3);
 VAR_10.clnt_login = VAR_2;
 VAR_10.num_params = 0;

 VAR_8 = FUNC_9(VAR_5.ctx, &VAR_10, ((void*)0));
 if ((VAR_8 < 0) || (VAR_10.ret != 0)) {
  FUNC_1(VAR_6, "tee_client_open_session failed, err: %x\n",
   VAR_10.ret);
  VAR_9 = -VAR_0;
  goto out_ctx;
 }
 VAR_5.session_id = VAR_10.session;

 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9)
  goto out_sess;

 VAR_9 = FUNC_3(&VAR_5.optee_rng);
 if (VAR_9) {
  FUNC_1(VAR_6, "hwrng registration failed (%d)\n", VAR_9);
  goto out_sess;
 }

 VAR_5.dev = VAR_6;

 return 0;

out_sess:
 FUNC_7(VAR_5.ctx, VAR_5.session_id);
out_ctx:
 FUNC_6(VAR_5.ctx);

 return VAR_9;
}
