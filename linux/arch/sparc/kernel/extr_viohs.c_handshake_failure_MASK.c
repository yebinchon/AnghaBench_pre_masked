
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_driver_state {int dr_state; int hs_state; scalar_t__ desc_buf_len; int * desc_buf; struct vio_dring_state* drings; } ;
struct vio_dring_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vio_dring_state*,int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct vio_driver_state *VAR_6)
{
 struct vio_dring_state *VAR_7;






 FUNC_2(VAR_1, "HANDSHAKE FAILURE\n");

 VAR_6->dr_state &= ~(VAR_4 |
      VAR_3);

 VAR_7 = &VAR_6->drings[VAR_2];
 FUNC_1(VAR_7, 0, sizeof(*VAR_7));

 FUNC_0(VAR_6->desc_buf);
 VAR_6->desc_buf = ((void*)0);
 VAR_6->desc_buf_len = 0;

 VAR_6->hs_state = VAR_5;

 return -VAR_0;
}
