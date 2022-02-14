
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct simdisk_softc {int sectorsize; int sbuf; TYPE_1__* sp; void* fwcylinders; void* fwheads; void* fwsectors; scalar_t__ mediasize; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {int * data; void* offset; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct simdisk_softc*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (char*,char const*,char*) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char const*,char*) ;
 void* FUNC_10 (char*,char**,int) ;
 void* FUNC_11 (char*,char**,int ) ;
 char FUNC_12 (char) ;

__attribute__((used)) static void
FUNC_13(void *VAR_0, const char *VAR_1)
{
 struct simdisk_softc *VAR_2;
 char *VAR_3;
 u_char *VAR_4;
 int VAR_5, VAR_6;
 off_t VAR_7;

 VAR_2 = VAR_0;

 if (!FUNC_9(VAR_1, "comment")) {
  FUNC_6(VAR_2->sbuf);
  return;
 }
 FUNC_8(VAR_2->sbuf);
 if (!FUNC_9(VAR_1, "sectorsize")) {
  VAR_2->sectorsize = FUNC_10(FUNC_7(VAR_2->sbuf), &VAR_3, 0);
  if (*VAR_3 != '\0')
   FUNC_0(1, "strtoul croaked on sectorsize");
 } else if (!FUNC_9(VAR_1, "mediasize")) {
  VAR_7 = FUNC_11(FUNC_7(VAR_2->sbuf), &VAR_3, 0);
  if (*VAR_3 != '\0')
   FUNC_0(1, "strtoul croaked on mediasize");
  if (VAR_7 > 0)
   VAR_2->mediasize = VAR_7;
 } else if (!FUNC_9(VAR_1, "fwsectors")) {
  VAR_2->fwsectors = FUNC_10(FUNC_7(VAR_2->sbuf), &VAR_3, 0);
  if (*VAR_3 != '\0')
   FUNC_0(1, "strtoul croaked on fwsectors");
 } else if (!FUNC_9(VAR_1, "fwheads")) {
  VAR_2->fwheads = FUNC_10(FUNC_7(VAR_2->sbuf), &VAR_3, 0);
  if (*VAR_3 != '\0')
   FUNC_0(1, "strtoul croaked on fwheads");
 } else if (!FUNC_9(VAR_1, "fwcylinders")) {
  VAR_2->fwcylinders = FUNC_10(FUNC_7(VAR_2->sbuf), &VAR_3, 0);
  if (*VAR_3 != '\0')
   FUNC_0(1, "strtoul croaked on fwcylinders");
 } else if (!FUNC_9(VAR_1, "offset")) {
  VAR_2->sp->offset= FUNC_11(FUNC_7(VAR_2->sbuf), &VAR_3, 0);
  if (*VAR_3 != '\0')
   FUNC_0(1, "strtoul croaked on offset");
 } else if (!FUNC_9(VAR_1, "fill")) {
  VAR_6 = FUNC_10(FUNC_7(VAR_2->sbuf), ((void*)0), 16);
  FUNC_4(VAR_2->sp->data, VAR_6, VAR_2->sectorsize);
 } else if (!FUNC_9(VAR_1, "hexdata")) {
  VAR_4 = VAR_2->sp->data;
  VAR_3 = FUNC_7(VAR_2->sbuf);
  for (VAR_5 = 0; VAR_5 < VAR_2->sectorsize; VAR_5++) {
   if (!FUNC_3(*VAR_3))
    FUNC_0(1, "I croaked on hexdata %d:(%02x)", VAR_5, *VAR_3);
   if (FUNC_2(*VAR_3))
    VAR_6 = (*VAR_3 - '0') << 4;
   else
    VAR_6 = (FUNC_12(*VAR_3) - 'a' + 10) << 4;
   VAR_3++;
   if (!FUNC_3(*VAR_3))
    FUNC_0(1, "I croaked on hexdata %d:(%02x)", VAR_5, *VAR_3);
   if (FUNC_2(*VAR_3))
    VAR_6 |= *VAR_3 - '0';
   else
    VAR_6 |= FUNC_12(*VAR_3) - 'a' + 10;
   VAR_3++;
   *VAR_4++ = VAR_6;
  }
 } else if (!FUNC_9(VAR_1, "sector")) {
  FUNC_1(VAR_2, VAR_2->sp);
  VAR_2->sp = ((void*)0);
 } else if (!FUNC_9(VAR_1, "diskimage")) {
 } else if (!FUNC_9(VAR_1, "FreeBSD")) {
 } else {
  FUNC_5("<%s>[[%s]]\n", VAR_1, FUNC_7(VAR_2->sbuf));
 }
 FUNC_6(VAR_2->sbuf);
}
