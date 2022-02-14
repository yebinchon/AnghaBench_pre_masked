
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_opal_softc {int vtermid; int protocol; int node; scalar_t__ outseqno; scalar_t__ inbuflen; } ;
typedef int reg ;
typedef int phandle_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int*,int) ;
 scalar_t__ FUNC_1 (int ,char*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(struct uart_opal_softc *VAR_3)
{
 phandle_t VAR_4 = VAR_3->node;
 uint32_t VAR_5;
 char VAR_6[64];

 VAR_3->inbuflen = 0;
 VAR_3->outseqno = 0;

 if (FUNC_1(VAR_4, "device_type", VAR_6, sizeof(VAR_6)) <= 0)
  return (VAR_0);
 if (FUNC_2(VAR_6, "serial") != 0)
  return (VAR_0);

 VAR_5 = -1;
 FUNC_0(VAR_4, "reg", &VAR_5, sizeof(VAR_5));
 if (VAR_5 == -1)
  return (VAR_0);
 VAR_3->vtermid = VAR_5;
 VAR_3->node = VAR_4;

 if (FUNC_1(VAR_4, "compatible", VAR_6, sizeof(VAR_6)) <= 0)
  return (VAR_0);
 if (FUNC_2(VAR_6, "ibm,opal-console-raw") == 0) {
  VAR_3->protocol = VAR_2;
  return (0);
 } else if (FUNC_2(VAR_6, "ibm,opal-console-hvsi") == 0) {
  VAR_3->protocol = VAR_1;
  return (0);
 }

 return (VAR_0);
}
