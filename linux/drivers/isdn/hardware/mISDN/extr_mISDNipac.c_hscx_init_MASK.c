
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int debug; } ;
struct hscx_hw {TYPE_2__* ip; TYPE_1__ bch; } ;
struct TYPE_4__ {int type; int name; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct hscx_hw*,int ) ;
 int FUNC_1 (struct hscx_hw*,int ,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct hscx_hw *VAR_11)
{
 u8 VAR_12;

 FUNC_1(VAR_11, VAR_5, 0xFF);
 FUNC_1(VAR_11, VAR_9, 0x00);
 FUNC_1(VAR_11, VAR_7, 0x00);

 if (VAR_11->ip->type & VAR_8) {
  FUNC_1(VAR_11, VAR_3, 0x85);
  VAR_12 = FUNC_0(VAR_11, VAR_2);
  FUNC_2("%s: HSCX VSTR %02x\n", VAR_11->ip->name, VAR_12);
  if (VAR_11->bch.debug & VAR_0)
   FUNC_3("%s: HSCX version %s\n", VAR_11->ip->name,
      VAR_1[VAR_12 & 0x0f]);
 } else
  FUNC_1(VAR_11, VAR_3, 0x82);
 FUNC_1(VAR_11, VAR_4, 0x30);
 FUNC_1(VAR_11, VAR_10, 0x07);
 FUNC_1(VAR_11, VAR_6, 0x07);
}
