
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_5__ {int phys_nsegs; int bus_nsegs; uintptr_t phys_addr; uintptr_t bus_addr; int flags; int tag; } ;
struct TYPE_6__ {TYPE_1__ md; } ;
struct proto_ioc_busdma {int key; int request; TYPE_2__ u; int result; } ;
struct TYPE_7__ {int maxsz; } ;
struct TYPE_8__ {TYPE_3__ tag; } ;
struct obj {int refcnt; int oid; struct obj* parent; int fd; int key; TYPE_4__ u; } ;
typedef int ioc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct obj*,int ,uintptr_t,int ) ;
 int FUNC_2 (int ,int ,struct proto_ioc_busdma*) ;
 int FUNC_3 (struct proto_ioc_busdma*,int ,int) ;
 scalar_t__ FUNC_4 (int *,int ,int,int,int ,uintptr_t) ;
 struct obj* FUNC_5 (int ) ;
 int FUNC_6 (struct obj*) ;
 struct obj* FUNC_7 (int,int ) ;

int
FUNC_8(int VAR_13, u_int VAR_14)
{
 struct proto_ioc_busdma VAR_15;
 struct obj *VAR_16, *VAR_17;
 uintptr_t VAR_18;
 int VAR_19;

 VAR_17 = FUNC_7(VAR_13, VAR_7);
 if (VAR_17 == ((void*)0))
  return (-1);

 VAR_16 = FUNC_5(VAR_6);
 if (VAR_16 == ((void*)0))
  return (-1);

 FUNC_3(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.request = VAR_9;
 VAR_15.u.md.tag = VAR_17->key;
 VAR_15.u.md.flags = VAR_14;
 if (FUNC_2(VAR_17->fd, VAR_8, &VAR_15) == -1) {
  FUNC_6(VAR_16);
  return (-1);
 }

 VAR_16->refcnt = 1;
 VAR_16->fd = VAR_17->fd;
 VAR_16->parent = VAR_17;
 VAR_17->refcnt++;
 VAR_16->key = VAR_15.result;


 FUNC_0(VAR_15.u.md.phys_nsegs == 1);
 FUNC_0(VAR_15.u.md.bus_nsegs == 1);
 VAR_19 = FUNC_1(VAR_16, VAR_1, VAR_15.u.md.phys_addr,
     VAR_17->u.tag.maxsz);
 VAR_19 = FUNC_1(VAR_16, VAR_0, VAR_15.u.md.bus_addr,
     VAR_17->u.tag.maxsz);

 VAR_18 = (uintptr_t)FUNC_4(((void*)0), VAR_17->u.tag.maxsz, VAR_11 | VAR_12,
     VAR_4 | VAR_5, VAR_16->fd, VAR_15.u.md.phys_addr);
 if (VAR_18 == (uintptr_t)VAR_3)
  goto fail;
 VAR_19 = FUNC_1(VAR_16, VAR_2, VAR_18, VAR_17->u.tag.maxsz);

 return (VAR_16->oid);

 fail:
 FUNC_3(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.request = VAR_10;
 VAR_15.key = VAR_16->key;
 FUNC_2(VAR_16->fd, VAR_8, &VAR_15);
 VAR_16->parent->refcnt--;
 FUNC_6(VAR_16);
 return (-1);
}
