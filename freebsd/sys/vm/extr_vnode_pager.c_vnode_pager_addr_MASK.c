
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_ooffset_t ;
struct vnode {int v_iflag; TYPE_2__* v_mount; } ;
typedef int daddr_t ;
struct TYPE_3__ {int f_iosize; } ;
struct TYPE_4__ {TYPE_1__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vnode*,int,int *,int*,int*,int *) ;

__attribute__((used)) static int
FUNC_1(struct vnode *VAR_3, vm_ooffset_t VAR_4, daddr_t *VAR_5,
    int *VAR_6)
{
 int VAR_7;
 int VAR_8;
 daddr_t VAR_9;
 daddr_t VAR_10;

 if (VAR_4 < 0)
  return -1;

 if (VAR_3->v_iflag & VAR_2)
  return -1;

 VAR_7 = VAR_3->v_mount->mnt_stat.f_iosize;
 VAR_9 = VAR_4 / VAR_7;
 VAR_10 = VAR_4 % VAR_7;

 VAR_8 = FUNC_0(VAR_3, VAR_9, ((void*)0), VAR_5, VAR_6, ((void*)0));
 if (VAR_8 == 0) {
  if (*VAR_5 != -1)
   *VAR_5 += VAR_10 / VAR_0;
  if (VAR_6) {
   *VAR_6 += 1;
   *VAR_6 *= VAR_7 / VAR_1;
   *VAR_6 -= VAR_10 / VAR_1;
  }
 }

 return (VAR_8);
}
