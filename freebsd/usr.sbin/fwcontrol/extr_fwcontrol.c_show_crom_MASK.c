
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct csrreg {int val; int key; } ;
struct csrhdr {int info_len; int crc_len; int crc; } ;
struct csrdirectory {int crc_len; int crc; int * entry; } ;
struct crom_context {int depth; TYPE_1__* stack; } ;
typedef int info ;
struct TYPE_2__ {struct csrdirectory* dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int) ;
 char* FUNC_1 (struct crom_context*,char*,int) ;
 struct csrreg* FUNC_2 (struct crom_context*) ;
 int FUNC_3 (struct crom_context*,int*) ;
 int FUNC_4 (struct crom_context*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(u_int32_t *VAR_2)
{
 int VAR_3;
 struct crom_context VAR_4;
 char *VAR_5, VAR_6[256];
 static const char *VAR_7 = "ICLD";
 struct csrreg *VAR_8;
 struct csrdirectory *VAR_9;
 struct csrhdr *VAR_10;
 u_int16_t VAR_11;

 FUNC_6("first quad: 0x%08x ", *VAR_2);
 if (VAR_2[0] == 0) {
  FUNC_6("(Invalid Configuration ROM)\n");
  return;
 }
 VAR_10 = (struct csrhdr *)VAR_2;
 if (VAR_10->info_len == 1) {

  VAR_8 = (struct csrreg *)VAR_10;
  FUNC_6("verndor ID: 0x%06x\n", VAR_8->val);
  return;
 }
 FUNC_6("info_len=%d crc_len=%d crc=0x%04x",
  VAR_10->info_len, VAR_10->crc_len, VAR_10->crc);
 VAR_11 = FUNC_0(VAR_2+1, VAR_10->crc_len);
 if (VAR_11 == VAR_10->crc)
  FUNC_6("(OK)\n");
 else
  FUNC_6("(NG)\n");
 FUNC_5(VAR_2+1);

 FUNC_3(&VAR_4, VAR_2);
 VAR_9 = VAR_4.stack[0].dir;
 if (!VAR_9) {
  FUNC_6("no root directory - giving up\n");
  return;
 }
 FUNC_6("root_directory: len=0x%04x(%d) crc=0x%04x",
   VAR_9->crc_len, VAR_9->crc_len, VAR_9->crc);
 VAR_11 = FUNC_0((u_int32_t *)&VAR_9->entry[0], VAR_9->crc_len);
 if (VAR_11 == VAR_9->crc)
  FUNC_6("(OK)\n");
 else
  FUNC_6("(NG)\n");
 if (VAR_9->crc_len < 1)
  return;
 while (VAR_4.depth >= 0) {
  VAR_5 = FUNC_1(&VAR_4, VAR_6, sizeof(VAR_6));
  VAR_8 = FUNC_2(&VAR_4);
  for (VAR_3 = 0; VAR_3 < VAR_4.depth; VAR_3++)
   FUNC_6("\t");
  FUNC_6("%02x(%c:%02x) %06x %s: %s\n",
   VAR_8->key,
   VAR_7[(VAR_8->key & VAR_1)>>6],
   VAR_8->key & VAR_0, VAR_8->val,
   VAR_5, VAR_6);
  FUNC_4(&VAR_4);
 }
}
