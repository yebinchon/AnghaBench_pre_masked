
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_long ;
typedef void* u_int ;
struct TYPE_7__ {void* datarate; void* nsegs; void* maxsegsz; void* maxsz; void* maxaddr; void* bndry; void* align; void* flags; } ;
struct TYPE_8__ {TYPE_3__ tag; } ;
struct proto_ioc_busdma {TYPE_4__ u; int result; int key; int request; } ;
struct TYPE_5__ {void* datarate; void* nsegs; void* maxsegsz; void* maxsz; void* maxaddr; void* bndry; void* align; } ;
struct TYPE_6__ {TYPE_1__ tag; } ;
struct obj {int refcnt; int fd; TYPE_2__ u; int key; struct obj* parent; } ;
typedef int ioc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,struct proto_ioc_busdma*) ;
 int FUNC_1 (struct proto_ioc_busdma*,int ,int) ;
 struct obj* FUNC_2 (int ) ;
 int FUNC_3 (struct obj*) ;

__attribute__((used)) static struct obj *
FUNC_4(struct obj *VAR_4, int VAR_5, u_long VAR_6, u_long VAR_7,
    u_long VAR_8, u_long VAR_9, u_int VAR_10, u_long VAR_11,
    u_int VAR_12, u_int VAR_13)
{
 struct proto_ioc_busdma VAR_14;
 struct obj *VAR_15;

 VAR_15 = FUNC_2(VAR_0);
 if (VAR_15 == ((void*)0))
  return (((void*)0));

 FUNC_1(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.request = (VAR_4 != ((void*)0)) ? VAR_3 :
     VAR_2;
 VAR_14.key = (VAR_4 != ((void*)0)) ? VAR_4->key : 0;
 VAR_14.u.tag.align = VAR_6;
 VAR_14.u.tag.bndry = VAR_7;
 VAR_14.u.tag.maxaddr = VAR_8;
 VAR_14.u.tag.maxsz = VAR_9;
 VAR_14.u.tag.nsegs = VAR_10;
 VAR_14.u.tag.maxsegsz = VAR_11;
 VAR_14.u.tag.datarate = VAR_12;
 VAR_14.u.tag.flags = VAR_13;
 if (FUNC_0(VAR_5, VAR_1, &VAR_14) == -1) {
  FUNC_3(VAR_15);
  return (((void*)0));
 }
 VAR_15->refcnt = 1;
 VAR_15->fd = VAR_5;
 VAR_15->parent = VAR_4;
 VAR_15->key = VAR_14.result;
 VAR_15->u.tag.align = VAR_14.u.tag.align;
 VAR_15->u.tag.bndry = VAR_14.u.tag.bndry;
 VAR_15->u.tag.maxaddr = VAR_14.u.tag.maxaddr;
 VAR_15->u.tag.maxsz = VAR_14.u.tag.maxsz;
 VAR_15->u.tag.maxsegsz = VAR_14.u.tag.maxsegsz;
 VAR_15->u.tag.nsegs = VAR_14.u.tag.nsegs;
 VAR_15->u.tag.datarate = VAR_14.u.tag.datarate;
 return (VAR_15);
}
