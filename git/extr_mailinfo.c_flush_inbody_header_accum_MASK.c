
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; } ;
struct mailinfo {TYPE_1__ inbody_header_accum; int s_hdr_data; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct mailinfo*,TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct mailinfo *VAR_0)
{
 if (!VAR_0->inbody_header_accum.len)
  return;
 if (!FUNC_1(VAR_0, &VAR_0->inbody_header_accum, VAR_0->s_hdr_data, 0))
  FUNC_0("inbody_header_accum, if not empty, must always contain a valid in-body header");
 FUNC_2(&VAR_0->inbody_header_accum);
}
