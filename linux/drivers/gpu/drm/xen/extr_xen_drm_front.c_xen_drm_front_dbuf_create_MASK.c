
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u64 ;
typedef void* u32 ;
struct TYPE_9__ {int flags; void* bpp; void* height; void* width; void* dbuf_cookie; void* buffer_sz; int gref_directory; } ;
struct TYPE_10__ {TYPE_3__ dbuf_create; } ;
struct xendispl_req {TYPE_4__ op; } ;
struct xen_front_pgdir_shbuf_cfg {scalar_t__ be_alloc; int * pgdir; struct page** pages; int num_pages; int xb_dev; } ;
struct TYPE_8__ {scalar_t__ be_alloc; } ;
struct xen_drm_front_info {int dbuf_list; int io_lock; TYPE_2__ cfg; int xb_dev; TYPE_1__* evt_pairs; } ;
struct TYPE_11__ {int req_io_lock; } ;
struct TYPE_12__ {TYPE_5__ req; } ;
struct xen_drm_front_evtchnl {TYPE_6__ u; } ;
struct xen_drm_front_dbuf {int shbuf; } ;
struct page {int dummy; } ;
typedef int buf_cfg ;
struct TYPE_7__ {struct xen_drm_front_evtchnl req; } ;


 int FUNC_0 (void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct xendispl_req* FUNC_1 (struct xen_drm_front_evtchnl*,int ) ;
 int FUNC_2 (struct xen_drm_front_evtchnl*,struct xendispl_req*) ;
 int FUNC_3 (struct xen_drm_front_evtchnl*) ;
 int FUNC_4 (struct xen_drm_front_info*,struct xen_drm_front_dbuf*,void*) ;
 int FUNC_5 (int *,void*) ;
 struct xen_drm_front_dbuf* FUNC_6 (int,int ) ;
 int FUNC_7 (struct xen_front_pgdir_shbuf_cfg*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct xen_front_pgdir_shbuf_cfg*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct xen_drm_front_info *VAR_7,
         u64 VAR_8, u32 VAR_9, u32 VAR_10,
         u32 VAR_11, u64 VAR_12, struct page **VAR_13)
{
 struct xen_drm_front_evtchnl *VAR_14;
 struct xen_drm_front_dbuf *VAR_15;
 struct xendispl_req *VAR_16;
 struct xen_front_pgdir_shbuf_cfg VAR_17;
 unsigned long VAR_18;
 int VAR_19;

 VAR_14 = &VAR_7->evt_pairs[VAR_2].req;
 if (FUNC_12(!VAR_14))
  return -VAR_0;

 VAR_15 = FUNC_6(sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_1;

 FUNC_4(VAR_7, VAR_15, VAR_8);

 FUNC_7(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.xb_dev = VAR_7->xb_dev;
 VAR_17.num_pages = FUNC_0(VAR_12, VAR_4);
 VAR_17.pages = VAR_13;
 VAR_17.pgdir = &VAR_15->shbuf;
 VAR_17.be_alloc = VAR_7->cfg.be_alloc;

 VAR_19 = FUNC_13(&VAR_17);
 if (VAR_19 < 0)
  goto fail_shbuf_alloc;

 FUNC_8(&VAR_14->u.req.req_io_lock);

 FUNC_10(&VAR_7->io_lock, VAR_18);
 VAR_16 = FUNC_1(VAR_14, VAR_6);
 VAR_16->op.dbuf_create.gref_directory =
   FUNC_14(&VAR_15->shbuf);
 VAR_16->op.dbuf_create.buffer_sz = VAR_12;
 VAR_16->op.dbuf_create.dbuf_cookie = VAR_8;
 VAR_16->op.dbuf_create.width = VAR_9;
 VAR_16->op.dbuf_create.height = VAR_10;
 VAR_16->op.dbuf_create.bpp = VAR_11;
 if (VAR_17.be_alloc)
  VAR_16->op.dbuf_create.flags |= VAR_5;

 VAR_19 = FUNC_2(VAR_14, VAR_16);
 FUNC_11(&VAR_7->io_lock, VAR_18);

 if (VAR_19 < 0)
  goto fail;

 VAR_19 = FUNC_3(VAR_14);
 if (VAR_19 < 0)
  goto fail;

 VAR_19 = FUNC_15(&VAR_15->shbuf);
 if (VAR_19 < 0)
  goto fail;

 FUNC_9(&VAR_14->u.req.req_io_lock);
 return 0;

fail:
 FUNC_9(&VAR_14->u.req.req_io_lock);
fail_shbuf_alloc:
 FUNC_5(&VAR_7->dbuf_list, VAR_8);
 return VAR_19;
}
