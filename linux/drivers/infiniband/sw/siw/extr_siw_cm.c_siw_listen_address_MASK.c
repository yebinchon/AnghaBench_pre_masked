
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct siw_device {int dummy; } ;
struct siw_cep {int state; int * sock; struct iw_cm_id* cm_id; int listenq; } ;
struct list_head {int dummy; } ;
struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;int device; scalar_t__ provider_data; int (* add_ref ) (struct iw_cm_id*) ;} ;
typedef int s_val ;
struct TYPE_2__ {int (* bind ) (struct socket*,struct sockaddr*,int) ;int (* listen ) (struct socket*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct list_head*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct socket*,int ,int ,char*,int) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct list_head*) ;
 struct siw_cep* FUNC_4 (struct siw_device*) ;
 int FUNC_5 (struct siw_cep*) ;
 int FUNC_6 (struct siw_cep*) ;
 int FUNC_7 (struct siw_cep*) ;
 int FUNC_8 (struct siw_cep*,struct socket*) ;
 int FUNC_9 (struct siw_cep*,int) ;
 int FUNC_10 (int ,char*,int,...) ;
 int FUNC_11 (struct socket*) ;
 int FUNC_12 (int,int ,int ,struct socket**) ;
 int FUNC_13 (struct socket*) ;
 int FUNC_14 (struct socket*,struct sockaddr*,int) ;
 int FUNC_15 (struct socket*,int) ;
 int FUNC_16 (struct iw_cm_id*) ;
 int FUNC_17 (struct iw_cm_id*) ;
 struct siw_device* FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct iw_cm_id *VAR_9, int VAR_10,
         struct sockaddr *VAR_11, int VAR_12)
{
 struct socket *VAR_13;
 struct siw_cep *VAR_14 = ((void*)0);
 struct siw_device *VAR_15 = FUNC_18(VAR_9->device);
 int VAR_16 = 0, VAR_17;

 VAR_16 = FUNC_12(VAR_12, VAR_6, VAR_3, &VAR_13);
 if (VAR_16 < 0)
  return VAR_16;




 VAR_17 = 1;
 VAR_16 = FUNC_1(VAR_13, VAR_7, VAR_8, (char *)&VAR_17,
          sizeof(VAR_17));
 if (VAR_16) {
  FUNC_10(VAR_9->device, "setsockopt error: %d\n", VAR_16);
  goto error;
 }
 VAR_16 = VAR_13->ops->bind(VAR_13, VAR_11, VAR_12 == VAR_0 ?
        sizeof(struct sockaddr_in) :
        sizeof(struct sockaddr_in6));
 if (VAR_16) {
  FUNC_10(VAR_9->device, "socket bind error: %d\n", VAR_16);
  goto error;
 }
 VAR_14 = FUNC_4(VAR_15);
 if (!VAR_14) {
  VAR_16 = -VAR_1;
  goto error;
 }
 FUNC_8(VAR_14, VAR_13);

 VAR_16 = FUNC_9(VAR_14, VAR_10);
 if (VAR_16) {
  FUNC_10(VAR_9->device,
   "alloc_work error %d, backlog %d\n",
   VAR_16, VAR_10);
  goto error;
 }
 VAR_16 = VAR_13->ops->listen(VAR_13, VAR_10);
 if (VAR_16) {
  FUNC_10(VAR_9->device, "listen error %d\n", VAR_16);
  goto error;
 }
 VAR_14->cm_id = VAR_9;
 VAR_9->add_ref(VAR_9);
 if (!VAR_9->provider_data) {
  VAR_9->provider_data =
   FUNC_2(sizeof(struct list_head), VAR_2);
  if (!VAR_9->provider_data) {
   VAR_16 = -VAR_1;
   goto error;
  }
  FUNC_0((struct list_head *)VAR_9->provider_data);
 }
 FUNC_3(&VAR_14->listenq, (struct list_head *)VAR_9->provider_data);
 VAR_14->state = VAR_5;

 if (VAR_12 == VAR_0)
  FUNC_10(VAR_9->device, "Listen at laddr %pI4 %u\n",
   (((struct sockaddr_in *)VAR_11)->sin_addr),
   ((struct sockaddr_in *)VAR_11)->sin_port);
 else
  FUNC_10(VAR_9->device, "Listen at laddr %pI6 %u\n",
   (((struct sockaddr_in6 *)VAR_11)->sin6_addr),
   ((struct sockaddr_in6 *)VAR_11)->sin6_port);

 return 0;

error:
 FUNC_10(VAR_9->device, "failed: %d\n", VAR_16);

 if (VAR_14) {
  FUNC_7(VAR_14);

  if (VAR_14->cm_id) {
   VAR_14->cm_id->rem_ref(VAR_14->cm_id);
   VAR_14->cm_id = ((void*)0);
  }
  VAR_14->sock = ((void*)0);
  FUNC_11(VAR_13);
  VAR_14->state = VAR_4;

  FUNC_6(VAR_14);
  FUNC_5(VAR_14);
 }
 FUNC_13(VAR_13);

 return VAR_16;
}
