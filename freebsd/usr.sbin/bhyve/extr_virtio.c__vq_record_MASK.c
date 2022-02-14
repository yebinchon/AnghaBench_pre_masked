
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vmctx {int dummy; } ;
struct virtio_desc {int vd_flags; int vd_len; int vd_addr; } ;
struct iovec {int iov_len; int iov_base; } ;


 int FUNC_0 (struct vmctx*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(int VAR_0, volatile struct virtio_desc *VAR_1, struct vmctx *VAR_2,
    struct iovec *VAR_3, int VAR_4, uint16_t *VAR_5) {

 if (VAR_0 >= VAR_4)
  return;
 VAR_3[VAR_0].iov_base = FUNC_0(VAR_2, VAR_1->vd_addr, VAR_1->vd_len);
 VAR_3[VAR_0].iov_len = VAR_1->vd_len;
 if (VAR_5 != ((void*)0))
  VAR_5[VAR_0] = VAR_1->vd_flags;
}
