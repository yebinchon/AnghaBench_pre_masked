
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* h; void* w; void* y; void* x; } ;
struct TYPE_5__ {int stid; TYPE_1__ rect; } ;
struct TYPE_6__ {int size; int id; } ;
struct vmw_stdu_update {TYPE_2__ body; TYPE_3__ header; } ;
typedef void* s32 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1, int VAR_2,
         s32 VAR_3, s32 VAR_4, s32 VAR_5, s32 VAR_6)
{
 struct vmw_stdu_update *VAR_7 = VAR_1;

 VAR_7->header.id = VAR_0;
 VAR_7->header.size = sizeof(VAR_7->body);

 VAR_7->body.stid = VAR_2;
 VAR_7->body.rect.x = VAR_3;
 VAR_7->body.rect.y = VAR_5;
 VAR_7->body.rect.w = VAR_4 - VAR_3;
 VAR_7->body.rect.h = VAR_6 - VAR_5;
}
