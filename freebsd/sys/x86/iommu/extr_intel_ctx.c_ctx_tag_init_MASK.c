
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ref_count; void* maxsegsz; int nsegments; void* maxsize; void* highaddr; void* lowaddr; scalar_t__ boundary; int * impl; } ;
struct TYPE_6__ {int owner; struct dmar_ctx* ctx; TYPE_2__ common; } ;
struct dmar_ctx {TYPE_3__ ctx_tag; TYPE_1__* domain; } ;
typedef int device_t ;
typedef void* bus_addr_t ;
struct TYPE_4__ {int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct dmar_ctx *VAR_3, device_t VAR_4)
{
 bus_addr_t VAR_5;

 VAR_5 = FUNC_0(VAR_3->domain->end, VAR_0);
 VAR_3->ctx_tag.common.ref_count = 1;
 VAR_3->ctx_tag.common.impl = &VAR_2;
 VAR_3->ctx_tag.common.boundary = 0;
 VAR_3->ctx_tag.common.lowaddr = VAR_5;
 VAR_3->ctx_tag.common.highaddr = VAR_5;
 VAR_3->ctx_tag.common.maxsize = VAR_5;
 VAR_3->ctx_tag.common.nsegments = VAR_1;
 VAR_3->ctx_tag.common.maxsegsz = VAR_5;
 VAR_3->ctx_tag.ctx = VAR_3;
 VAR_3->ctx_tag.owner = VAR_4;
}
