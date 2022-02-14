
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int minute; int second; int frame; } ;
struct TYPE_4__ {int lba; TYPE_1__ msf; } ;
struct cd_toc_entry {int control; TYPE_2__ addr; } ;


 int FUNC_0 (int,int*,int*,int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,...) ;

__attribute__((used)) static void
FUNC_4(struct cd_toc_entry *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 u_char VAR_6, VAR_7, VAR_8;

 if (VAR_0) {

  FUNC_3 ("%2d:%02d.%02d  ", VAR_1->addr.msf.minute,
   VAR_1->addr.msf.second, VAR_1->addr.msf.frame);

  VAR_3 = FUNC_1 (VAR_1->addr.msf.minute, VAR_1->addr.msf.second,
   VAR_1->addr.msf.frame);
 } else {
  VAR_3 = FUNC_2(VAR_1->addr.lba);
  FUNC_0(VAR_3, &VAR_6, &VAR_7, &VAR_8);

  FUNC_3 ("%2d:%02d.%02d  ", VAR_6, VAR_7, VAR_8);
 }
 if (VAR_2) {

  FUNC_3 ("       -  %6d       -      -\n", VAR_3);
  return;
 }

 if (VAR_0)
  VAR_4 = FUNC_1 (VAR_1[1].addr.msf.minute, VAR_1[1].addr.msf.second,
   VAR_1[1].addr.msf.frame);
 else
  VAR_4 = FUNC_2(VAR_1[1].addr.lba);
 VAR_5 = VAR_4 - VAR_3;

 FUNC_0 (VAR_5 - 150, &VAR_6, &VAR_7, &VAR_8);


 FUNC_3 ("%2d:%02d.%02d  %6d  %6d  %5s\n", VAR_6, VAR_7, VAR_8, VAR_3, VAR_5,
  (VAR_1->control & 4) ? "data" : "audio");
}
