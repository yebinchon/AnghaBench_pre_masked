
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t tp_row; size_t tp_col; } ;
typedef TYPE_2__ teken_pos_t ;
struct TYPE_4__ {int ta_format; int ta_bgcolor; int ta_fgcolor; } ;
struct pixel {int c; TYPE_1__ a; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct pixel** VAR_11 ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (size_t,size_t,char*) ;
 int VAR_12 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(const teken_pos_t *VAR_13)
{
 int VAR_14, VAR_15, VAR_16 = 0;
 struct pixel *VAR_17;
 char VAR_18[5] = { 0 };

 FUNC_1(VAR_13->tp_row < VAR_5);
 FUNC_1(VAR_13->tp_col < VAR_4);

 VAR_17 = &VAR_11[VAR_13->tp_col][VAR_13->tp_row];

 if (VAR_17->a.ta_format & VAR_8)
  return;


 if (VAR_17->c < 0x80) {
  VAR_18[0] = VAR_17->c;
 } else if (VAR_17->c < 0x800) {
  VAR_18[0] = 0xc0 | (VAR_17->c >> 6);
  VAR_18[1] = 0x80 | (VAR_17->c & 0x3f);
 } else if (VAR_17->c < 0x10000) {
  VAR_18[0] = 0xe0 | (VAR_17->c >> 12);
  VAR_18[1] = 0x80 | ((VAR_17->c >> 6) & 0x3f);
  VAR_18[2] = 0x80 | (VAR_17->c & 0x3f);
 } else {
  VAR_18[0] = 0xf0 | (VAR_17->c >> 18);
  VAR_18[1] = 0x80 | ((VAR_17->c >> 12) & 0x3f);
  VAR_18[2] = 0x80 | ((VAR_17->c >> 6) & 0x3f);
  VAR_18[3] = 0x80 | (VAR_17->c & 0x3f);
 }

 if (VAR_17->a.ta_format & VAR_7)
  VAR_16 |= VAR_1;
 if (VAR_17->a.ta_format & VAR_10)
  VAR_16 |= VAR_3;
 if (VAR_17->a.ta_format & VAR_6)
  VAR_16 |= VAR_0;
 if (VAR_17->a.ta_format & VAR_9)
  VAR_16 |= VAR_2;

 FUNC_2(VAR_16 | FUNC_0(FUNC_6(VAR_17->a.ta_fgcolor) +
       8 * FUNC_6(VAR_17->a.ta_bgcolor)));
 FUNC_3(VAR_12, VAR_14, VAR_15);
 FUNC_5(VAR_13->tp_row, VAR_13->tp_col, VAR_18);
 FUNC_4(VAR_14, VAR_15);
}
