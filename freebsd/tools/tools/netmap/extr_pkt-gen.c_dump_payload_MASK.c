
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct netmap_ring {TYPE_1__* slot; } ;
typedef int buf ;
struct TYPE_2__ {int buf_idx; int flags; } ;


 scalar_t__ FUNC_0 (unsigned char const) ;
 int FUNC_1 (char*,char,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*,unsigned char const) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_0, int VAR_1, struct netmap_ring *VAR_2, int VAR_3)
{
 char VAR_4[128];
 int VAR_5, VAR_6, VAR_7;
 const unsigned char *VAR_8 = (const unsigned char *)VAR_0;



 FUNC_2("ring %p cur %5d [buf %6d flags 0x%04x len %5d]\n",
  VAR_2, VAR_3, VAR_2->slot[VAR_3].buf_idx,
  VAR_2->slot[VAR_3].flags, VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_1; ) {
  FUNC_1(VAR_4, ' ', sizeof(VAR_4));
  FUNC_3(VAR_4, "%5d: ", VAR_5);
  VAR_7 = VAR_5;
  for (VAR_6=0; VAR_6 < 16 && VAR_5 < VAR_1; VAR_5++, VAR_6++)
   FUNC_3(VAR_4+7+VAR_6*3, "%02x ", (uint8_t)(VAR_8[VAR_5]));
  VAR_5 = VAR_7;
  for (VAR_6=0; VAR_6 < 16 && VAR_5 < VAR_1; VAR_5++, VAR_6++)
   FUNC_3(VAR_4+7+VAR_6 + 48, "%c",
    FUNC_0(VAR_8[VAR_5]) ? VAR_8[VAR_5] : '.');
  FUNC_2("%s\n", VAR_4);
 }
}
