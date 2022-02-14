
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_6__ {scalar_t__ idx; scalar_t__ val; } ;
struct TYPE_5__ {char const* name; TYPE_1__* fops; int minor; } ;
struct TYPE_4__ {int release; int open; int poll; int write; int read; int owner; } ;
struct hvutil_transport {int (* on_msg ) (void*,int) ;void (* on_reset ) () ;int list; TYPE_3__ cn_id; TYPE_2__ mdev; int release; int lock; int outmsg_q; TYPE_1__ fops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,char const*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hvutil_transport*) ;
 struct hvutil_transport* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

struct hvutil_transport *FUNC_11(const char *VAR_11,
            u32 VAR_12, u32 VAR_13,
            int (*VAR_14)(void *, int),
            void (*VAR_15)(void))
{
 struct hvutil_transport *VAR_16;

 VAR_16 = FUNC_4(sizeof(*VAR_16), VAR_0);
 if (!VAR_16)
  return ((void*)0);

 VAR_16->cn_id.idx = VAR_12;
 VAR_16->cn_id.val = VAR_13;

 VAR_16->mdev.minor = VAR_1;
 VAR_16->mdev.name = VAR_11;

 VAR_16->fops.owner = VAR_2;
 VAR_16->fops.read = VAR_8;
 VAR_16->fops.write = VAR_10;
 VAR_16->fops.poll = VAR_7;
 VAR_16->fops.open = VAR_6;
 VAR_16->fops.release = VAR_9;

 VAR_16->mdev.fops = &VAR_16->fops;

 FUNC_2(&VAR_16->outmsg_q);
 FUNC_8(&VAR_16->lock);
 FUNC_1(&VAR_16->release);

 FUNC_9(&VAR_5);
 FUNC_5(&VAR_16->list, &VAR_4);
 FUNC_10(&VAR_5);

 VAR_16->on_msg = VAR_14;
 VAR_16->on_reset = VAR_15;

 if (FUNC_7(&VAR_16->mdev))
  goto err_free_hvt;


 if (VAR_16->cn_id.idx > 0 && VAR_16->cn_id.val > 0 &&
     FUNC_0(&VAR_16->cn_id, VAR_11, VAR_3))
  goto err_free_hvt;

 return VAR_16;

err_free_hvt:
 FUNC_9(&VAR_5);
 FUNC_6(&VAR_16->list);
 FUNC_10(&VAR_5);
 FUNC_3(VAR_16);
 return ((void*)0);
}
