
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_dring_state {unsigned long entry_size; unsigned long num_entries; unsigned long pending; int ncookies; scalar_t__ cons; scalar_t__ prod; void* base; int cookies; } ;
struct vio_disk_desc {int dummy; } ;
struct TYPE_2__ {int lp; struct vio_dring_state* drings; } ;
struct vdc_port {int ring_cookies; TYPE_1__ vio; } ;
struct ldc_trans_cookie {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 unsigned long VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int ,unsigned long,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct vdc_port *VAR_6)
{
 struct vio_dring_state *VAR_7 = &VAR_6->vio.drings[VAR_4];
 unsigned long VAR_8, VAR_9;
 int VAR_10;
 void *VAR_11;

 VAR_9 = sizeof(struct vio_disk_desc) +
  (sizeof(struct ldc_trans_cookie) * VAR_6->ring_cookies);
 VAR_8 = (VAR_3 * VAR_9);

 VAR_10 = VAR_5;
 VAR_11 = FUNC_2(VAR_6->vio.lp, VAR_8,
        VAR_7->cookies, &VAR_10,
        (VAR_2 |
         VAR_0 |
         VAR_1));
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_7->base = VAR_11;
 VAR_7->entry_size = VAR_9;
 VAR_7->num_entries = VAR_3;
 VAR_7->prod = VAR_7->cons = 0;
 VAR_7->pending = VAR_3;
 VAR_7->ncookies = VAR_10;

 return 0;
}
