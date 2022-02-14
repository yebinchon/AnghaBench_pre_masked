
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* version; int* length; } ;
struct TYPE_8__ {TYPE_1__ h; int altname; int * flags; } ;
struct TYPE_9__ {TYPE_2__ NM; } ;
struct TYPE_10__ {TYPE_3__ rr_entry; } ;
struct ISO_SUSP_ATTRIBUTES {TYPE_4__ attr; } ;
struct TYPE_11__ {int head; } ;
typedef TYPE_5__ cd9660node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct ISO_SUSP_ATTRIBUTES*,int ) ;
 struct ISO_SUSP_ATTRIBUTES* FUNC_1 (int ,int ,char*,int ) ;
 int FUNC_2 (int ,char const*,int) ;
 int VAR_5 ;
 int FUNC_3 (char const*) ;

void
FUNC_4(cd9660node *VAR_6, const char *VAR_7)
{
 int VAR_8,VAR_9;
 const char *VAR_10;
 struct ISO_SUSP_ATTRIBUTES *VAR_11;






 VAR_10 = VAR_7;
 VAR_8 = 1;
 while (VAR_8) {
  VAR_11 = FUNC_1(VAR_4,
      VAR_2, "NM", VAR_3);
  VAR_11->attr.rr_entry.NM.h.version[0] = 1;
  VAR_11->attr.rr_entry.NM.flags[0] = VAR_1;
  VAR_9 = FUNC_3(VAR_10);

  if (VAR_9 > 249) {
   VAR_9 = 249;
   VAR_11->attr.rr_entry.NM.flags[0] = VAR_0;
  } else {
   VAR_8 = 0;
  }
  FUNC_2(VAR_11->attr.rr_entry.NM.altname, VAR_10, VAR_9);
  VAR_11->attr.rr_entry.NM.h.length[0] = 5 + VAR_9;

  FUNC_0(&VAR_6->head, VAR_11, VAR_5);

  VAR_10 += VAR_9;
 }
}
