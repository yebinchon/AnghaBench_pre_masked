
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void uint8_t ;
struct vnode {int dummy; } ;
struct thread {int td_ucred; } ;
struct mac_veriexec_file_info {TYPE_1__* ops; } ;
typedef size_t off_t ;
struct TYPE_2__ {size_t context_size; size_t digest_len; int (* final ) (unsigned char*,void*) ;int (* update ) (void*,void*,size_t) ;int (* init ) (void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (void*,int ) ;
 void* FUNC_1 (size_t,int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,void*,size_t) ;
 int FUNC_5 (unsigned char*,void*) ;
 int FUNC_6 (int ,struct vnode*,void*,size_t,size_t,int ,int ,int ,int ,size_t*,struct thread*) ;

__attribute__((used)) static int
FUNC_7(struct vnode *VAR_8, struct mac_veriexec_file_info *VAR_9,
    struct thread *VAR_10, off_t VAR_11, unsigned char *VAR_12)
{
 uint8_t *VAR_13;
 void *VAR_14;
 off_t VAR_15;
 size_t VAR_16, VAR_17, VAR_18;
 int VAR_19 = VAR_0;

 VAR_13 = FUNC_1(VAR_5, VAR_2, VAR_3);
 VAR_14 = FUNC_1(VAR_9->ops->context_size, VAR_2, VAR_3);

 (VAR_9->ops->init)(VAR_14);
 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15 += VAR_17) {
  if ((VAR_15 + VAR_5) > VAR_11)
   VAR_16 = VAR_11 - VAR_15;
  else
   VAR_16 = VAR_5;

  VAR_19 = FUNC_6(VAR_6, VAR_8, VAR_13, VAR_16, VAR_15,
      VAR_7, VAR_1, VAR_10->td_ucred, VAR_4, &VAR_18,
      VAR_10);
  if (VAR_19)
   goto failed;

  VAR_17 = VAR_16 - VAR_18;
  (VAR_9->ops->update)(VAR_14, VAR_13, VAR_17);
 }
 (VAR_9->ops->final)(VAR_12, VAR_14);







failed:
 FUNC_0(VAR_14, VAR_2);
 FUNC_0(VAR_13, VAR_2);
 return (VAR_19);
}
