
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ quad_part; } ;
struct TYPE_7__ {TYPE_1__ addr; } ;
struct TYPE_8__ {TYPE_2__ grph; } ;
struct hubp {TYPE_3__ request_address; } ;
struct dcn20_hubp {int dummy; } ;
struct TYPE_9__ {scalar_t__ quad_part; scalar_t__ high_part; scalar_t__ low_part; } ;
struct TYPE_10__ {TYPE_4__ addr; } ;
struct dc_plane_address {TYPE_5__ grph; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dcn20_hubp* FUNC_1 (struct hubp*) ;

bool FUNC_2(struct hubp *VAR_6)
{
 uint32_t VAR_7 = 0;
 struct dcn20_hubp *VAR_8 = FUNC_1(VAR_6);
 struct dc_plane_address VAR_9;

 FUNC_0(VAR_0,
   VAR_5, &VAR_7);

 FUNC_0(VAR_1,
   VAR_3, &VAR_9.grph.addr.low_part);

 FUNC_0(VAR_2,
   VAR_4, &VAR_9.grph.addr.high_part);

 if (VAR_7)
  return 1;

 if (VAR_9.grph.addr.quad_part != VAR_6->request_address.grph.addr.quad_part)
  return 1;

 return 0;
}
