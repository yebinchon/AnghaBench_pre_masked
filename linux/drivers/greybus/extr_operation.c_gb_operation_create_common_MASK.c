
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct gb_operation {unsigned long flags; TYPE_1__* request; int waiters; int kref; int completion; int work; int errno; int type; int timer; struct gb_connection* connection; } ;
struct gb_host_device {int dummy; } ;
struct gb_connection {struct gb_host_device* hd; } ;
typedef int gfp_t ;
struct TYPE_3__ {struct gb_operation* operation; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (struct gb_host_device*,int ,size_t,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct gb_operation*,size_t,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct gb_operation*) ;
 struct gb_operation* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ) ;

__attribute__((used)) static struct gb_operation *
FUNC_10(struct gb_connection *VAR_5, u8 VAR_6,
      size_t VAR_7, size_t VAR_8,
      unsigned long VAR_9, gfp_t VAR_10)
{
 struct gb_host_device *VAR_11 = VAR_5->hd;
 struct gb_operation *VAR_12;

 VAR_12 = FUNC_7(VAR_2, VAR_10);
 if (!VAR_12)
  return ((void*)0);
 VAR_12->connection = VAR_5;

 VAR_12->request = FUNC_2(VAR_11, VAR_6, VAR_7,
       VAR_10);
 if (!VAR_12->request)
  goto err_cache;
 VAR_12->request->operation = VAR_12;


 if (!(VAR_9 & VAR_1)) {
  if (!FUNC_4(VAR_12, VAR_8,
       VAR_10)) {
   goto err_request;
  }

  FUNC_9(&VAR_12->timer, VAR_3, 0);
 }

 VAR_12->flags = VAR_9;
 VAR_12->type = VAR_6;
 VAR_12->errno = -VAR_0;

 FUNC_0(&VAR_12->work, VAR_4);
 FUNC_5(&VAR_12->completion);
 FUNC_8(&VAR_12->kref);
 FUNC_1(&VAR_12->waiters, 0);

 return VAR_12;

err_request:
 FUNC_3(VAR_12->request);
err_cache:
 FUNC_6(VAR_2, VAR_12);

 return ((void*)0);
}
