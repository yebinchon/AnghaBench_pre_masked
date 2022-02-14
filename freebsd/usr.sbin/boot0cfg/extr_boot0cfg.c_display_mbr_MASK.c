
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct dos_partition {int dp_ssect; int dp_esect; int dp_size; int dp_start; int dp_ehd; scalar_t__ dp_ecyl; scalar_t__ dp_typ; int dp_shd; scalar_t__ dp_scyl; int dp_flag; } ;
struct TYPE_2__ {int def; char* tok; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 char* VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static void
FUNC_4(u_int8_t *VAR_12)
{
    struct dos_partition *VAR_13;
    int VAR_14, VAR_15;

    VAR_13 = (struct dos_partition *)(VAR_12 + VAR_0);
    FUNC_2(VAR_8);
    for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++)
 if (VAR_13[VAR_14].dp_typ)
     FUNC_2(VAR_9, 1 + VAR_14, VAR_13[VAR_14].dp_flag,
  VAR_13[VAR_14].dp_scyl + ((VAR_13[VAR_14].dp_ssect & 0xc0) << 2),
  VAR_13[VAR_14].dp_shd, VAR_13[VAR_14].dp_ssect & 0x3f, VAR_13[VAR_14].dp_typ,
                VAR_13[VAR_14].dp_ecyl + ((VAR_13[VAR_14].dp_esect & 0xc0) << 2),
                VAR_13[VAR_14].dp_ehd, VAR_13[VAR_14].dp_esect & 0x3f, VAR_13[VAR_14].dp_start,
                VAR_13[VAR_14].dp_size);
    FUNC_2("\n");
    VAR_15 = FUNC_0(VAR_12);
    FUNC_2("version=%d.%d  drive=0x%x  mask=0x%x  ticks=%u",
 VAR_15 >> 8, VAR_15 & 0xff, VAR_12[VAR_2],
 VAR_12[VAR_3] & 0xf, FUNC_1(VAR_12 + VAR_6));
    FUNC_3(VAR_12, 0, 1);
    FUNC_2("\noptions=");
    for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
 if (VAR_14)
     FUNC_2(",");
 if (!(VAR_12[VAR_3] & 1 << (7 - VAR_14)) ^ VAR_11[VAR_14].def)
     FUNC_2("no");
 FUNC_2("%s", VAR_11[VAR_14].tok);
    }
    FUNC_2("\n");
    if (VAR_7 == 2)
 FUNC_2("volume serial ID %02x%02x-%02x%02x\n",
  VAR_12[VAR_5], VAR_12[VAR_5+1],
  VAR_12[VAR_5+2], VAR_12[VAR_5+3]);
    FUNC_2("default_selection=F%d (", VAR_12[VAR_4] + 1);
    if (VAR_12[VAR_4] < 4)
 FUNC_2("Slice %d", VAR_12[VAR_4] + 1);
    else if (VAR_12[VAR_4] == 4)
 FUNC_2("Drive 1");
    else
 FUNC_2("PXE");
    FUNC_2(")\n");
}
