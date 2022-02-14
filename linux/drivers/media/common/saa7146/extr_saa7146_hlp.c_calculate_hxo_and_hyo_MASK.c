
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct saa7146_vv {TYPE_1__* standard; } ;
struct TYPE_2__ {int v_offset; int h_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct saa7146_vv *VAR_3, u32* VAR_4, u32* VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0;

 VAR_6 = VAR_3->standard->v_offset;
 VAR_7 = VAR_3->standard->h_offset;

 *VAR_4 &= ~(VAR_0 | 0xf00);
 *VAR_4 |= (VAR_7 << 0);

 *VAR_5 &= ~(VAR_2 | VAR_1);
 *VAR_5 |= (VAR_6 << 12);
}
