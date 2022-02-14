
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vio_driver_state {int dr_state; struct vio_dring_state* drings; int desc_buf_len; int desc_buf; } ;
struct vio_dring_state {int ncookies; scalar_t__ ident; TYPE_1__* cookies; int entry_size; int num_entries; } ;
struct TYPE_4__ {int stype; } ;
struct vio_dring_register {int options; int num_cookies; TYPE_2__ tag; int descr_size; int num_descr; scalar_t__ dring_ident; TYPE_1__* cookies; } ;
struct ldc_trans_cookie {int dummy; } ;
struct TYPE_3__ {scalar_t__ cookie_size; scalar_t__ cookie_addr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct vio_driver_state*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct vio_driver_state*,TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (struct vio_driver_state*,int,int) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct vio_driver_state *VAR_8,
        struct vio_dring_register *VAR_9)
{
 struct vio_dring_state *VAR_10;
 int VAR_11, VAR_12;

 FUNC_5(VAR_1, "GOT DRING_REG INFO ident[%llx] "
        "ndesc[%u] dsz[%u] opt[0x%x] ncookies[%u]\n",
        (unsigned long long) VAR_9->dring_ident,
        VAR_9->num_descr, VAR_9->descr_size, VAR_9->options,
        VAR_9->num_cookies);

 if (!(VAR_8->dr_state & VAR_4))
  goto send_nack;

 if (VAR_8->dr_state & VAR_3)
  goto send_nack;


 if (FUNC_4(VAR_8, 1, 6)) {
  if (!(VAR_9->options & VAR_7))
   goto send_nack;
  VAR_9->options = VAR_7;
 }

 FUNC_0(VAR_8->desc_buf);

 VAR_8->desc_buf = FUNC_2(VAR_9->descr_size, VAR_0);
 if (!VAR_8->desc_buf)
  goto send_nack;

 VAR_8->desc_buf_len = VAR_9->descr_size;

 VAR_10 = &VAR_8->drings[VAR_2];

 VAR_10->num_entries = VAR_9->num_descr;
 VAR_10->entry_size = VAR_9->descr_size;
 VAR_10->ncookies = VAR_9->num_cookies;
 for (VAR_11 = 0; VAR_11 < VAR_10->ncookies; VAR_11++) {
  VAR_10->cookies[VAR_11] = VAR_9->cookies[VAR_11];

  FUNC_5(VAR_1, "DRING COOKIE(%d) [%016llx:%016llx]\n",
         VAR_11,
         (unsigned long long)
         VAR_9->cookies[VAR_11].cookie_addr,
         (unsigned long long)
         VAR_9->cookies[VAR_11].cookie_size);
 }

 VAR_9->tag.stype = VAR_5;
 VAR_9->dring_ident = ++VAR_10->ident;

 FUNC_5(VAR_1, "SEND DRING_REG ACK ident[%llx] "
        "ndesc[%u] dsz[%u] opt[0x%x] ncookies[%u]\n",
        (unsigned long long) VAR_9->dring_ident,
        VAR_9->num_descr, VAR_9->descr_size, VAR_9->options,
        VAR_9->num_cookies);

 VAR_12 = (sizeof(*VAR_9) +
        (VAR_10->ncookies * sizeof(struct ldc_trans_cookie)));
 if (FUNC_3(VAR_8, &VAR_9->tag, VAR_12) < 0)
  goto send_nack;

 VAR_8->dr_state |= VAR_3;

 return 0;

send_nack:
 VAR_9->tag.stype = VAR_6;
 FUNC_5(VAR_1, "SEND DRING_REG NACK\n");
 (void) FUNC_3(VAR_8, &VAR_9->tag, sizeof(*VAR_9));

 return FUNC_1(VAR_8);
}
