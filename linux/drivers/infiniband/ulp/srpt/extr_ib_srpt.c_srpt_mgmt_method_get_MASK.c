
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct srpt_port {int dummy; } ;
struct TYPE_4__ {int attr_mod; int attr_id; } ;
struct ib_mad {TYPE_2__ mad_hdr; } ;
struct TYPE_3__ {int status; } ;
struct ib_dm_mad {TYPE_1__ mad_hdr; } ;






 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ib_dm_mad*) ;
 int FUNC_4 (struct srpt_port*,int,struct ib_dm_mad*) ;
 int FUNC_5 (struct ib_dm_mad*) ;
 int FUNC_6 (int ,int,int ,int ,struct ib_dm_mad*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct srpt_port *VAR_2, struct ib_mad *VAR_3,
     struct ib_dm_mad *VAR_4)
{
 u16 VAR_5;
 u32 VAR_6;
 u8 VAR_7, VAR_8;

 VAR_5 = FUNC_0(VAR_3->mad_hdr.attr_id);
 switch (VAR_5) {
 case 131:
  FUNC_3(VAR_4);
  break;
 case 129:
  FUNC_5(VAR_4);
  break;
 case 130:
  VAR_6 = FUNC_1(VAR_3->mad_hdr.attr_mod);
  FUNC_4(VAR_2, VAR_6, VAR_4);
  break;
 case 128:
  VAR_6 = FUNC_1(VAR_3->mad_hdr.attr_mod);
  VAR_7 = (u8) ((VAR_6 >> 8) & 0xff);
  VAR_8 = (u8) (VAR_6 & 0xff);
  VAR_6 = (u16) ((VAR_6 >> 16) & 0xffff);
  FUNC_6(VAR_1,
         VAR_6, VAR_7, VAR_8, VAR_4);
  break;
 default:
  VAR_4->mad_hdr.status =
      FUNC_2(VAR_0);
  break;
 }
}
