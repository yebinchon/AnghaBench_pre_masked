
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uintmax_t ;
struct TCPAevent {int event_size; scalar_t__ event_type; } ;
struct TYPE_7__ {scalar_t__ log_max_len; scalar_t__ log_start_addr; } ;
struct TYPE_6__ {scalar_t__ log_max_len; scalar_t__ log_start_addr; } ;
struct TCPAbody {int platform_class; TYPE_2__ server; TYPE_1__ client; } ;
struct TYPE_8__ {int Revision; } ;
typedef TYPE_3__ ACPI_TABLE_HEADER ;




 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct TCPAevent*) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5(ACPI_TABLE_HEADER *VAR_2)
{
 struct TCPAbody *VAR_3;
 struct TCPAevent *VAR_4;
 uintmax_t VAR_5, VAR_6;
 unsigned char *VAR_7 = ((void*)0);
 unsigned char *VAR_8 = ((void*)0);

 FUNC_4(VAR_0);
 FUNC_1(VAR_2);
 VAR_3 = (struct TCPAbody *) VAR_2;

 switch (VAR_3->platform_class) {
 case 129:
  VAR_5 = VAR_3->client.log_max_len;
  VAR_6 = VAR_3->client.log_start_addr;
  break;

 case 128:
  VAR_5 = VAR_3->server.log_max_len;
  VAR_6 = VAR_3->server.log_start_addr;
  break;

 default:
  FUNC_4("XXX");
  FUNC_4(VAR_1);
  return;
 }
 FUNC_4("\tClass %u Base Address 0x%jx Length %ju\n\n",
     VAR_3->platform_class, VAR_6, VAR_5);

 if (VAR_5 == 0) {
  FUNC_4("\tEmpty TCPA table\n");
  FUNC_4(VAR_1);
  return;
 }
 if(VAR_2->Revision == 1){
  FUNC_4("\tOLD TCPA spec log found. Dumping not supported.\n");
  FUNC_4(VAR_1);
  return;
 }

 VAR_7 = (unsigned char *)FUNC_0(VAR_6, VAR_5);
 VAR_8 = VAR_7 + VAR_5;

 while (VAR_7 != ((void*)0)) {
  if ((VAR_7 + sizeof(struct TCPAevent) >= VAR_8)||
      (VAR_7 + sizeof(struct TCPAevent) < VAR_7))
   break;
  VAR_4 = (struct TCPAevent *)(void *)VAR_7;
  if (VAR_7 + VAR_4->event_size >= VAR_8)
   break;
  if (VAR_7 + VAR_4->event_size < VAR_7)
   break;
  if (VAR_4->event_type == 0 && VAR_4->event_size == 0)
   break;
  FUNC_2(VAR_4);

  VAR_7 += sizeof(struct TCPAevent) + VAR_4->event_size;
 }

 FUNC_4(VAR_1);
}
