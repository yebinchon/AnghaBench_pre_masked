
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct talitos_ptr {int dummy; } ;
struct TYPE_2__ {int hdr; } ;
struct talitos_edesc {TYPE_1__ desc; } ;
struct talitos_ctx {int dev; } ;
typedef int padded_hash ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct talitos_ptr*,int,char*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct talitos_ctx *VAR_2,
          struct talitos_edesc *VAR_3,
          struct talitos_ptr *VAR_4)
{
 static u8 VAR_5[64] = {
  0x80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 };

 FUNC_1("Bug in SEC1, padding ourself\n");
 VAR_3->desc.hdr &= ~VAR_0;
 FUNC_0(VAR_2->dev, VAR_4, sizeof(VAR_5),
          (char *)VAR_5, VAR_1);
}
