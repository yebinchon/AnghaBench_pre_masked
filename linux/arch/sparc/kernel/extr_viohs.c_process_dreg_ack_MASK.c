
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_driver_state {int dr_state; int hs_state; struct vio_dring_state* drings; } ;
struct vio_dring_state {scalar_t__ ident; } ;
struct vio_dring_register {scalar_t__ dring_ident; int num_cookies; int options; int descr_size; int num_descr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct vio_driver_state*) ;
 int FUNC_1 (struct vio_driver_state*) ;
 scalar_t__ FUNC_2 (struct vio_driver_state*) ;
 int FUNC_3 (int ,char*,unsigned long long,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct vio_driver_state *VAR_5,
       struct vio_dring_register *VAR_6)
{
 struct vio_dring_state *VAR_7;

 FUNC_3(VAR_0, "GOT DRING_REG ACK ident[%llx] "
        "ndesc[%u] dsz[%u] opt[0x%x] ncookies[%u]\n",
        (unsigned long long) VAR_6->dring_ident,
        VAR_6->num_descr, VAR_6->descr_size, VAR_6->options,
        VAR_6->num_cookies);

 VAR_7 = &VAR_5->drings[VAR_1];

 if (!(VAR_5->dr_state & VAR_3))
  return FUNC_1(VAR_5);

 VAR_7->ident = VAR_6->dring_ident;
 VAR_5->dr_state |= VAR_2;

 if (FUNC_0(VAR_5)) {
  if (FUNC_2(VAR_5) < 0)
   return FUNC_1(VAR_5);
  VAR_5->hs_state = VAR_4;
 }
 return 0;
}
