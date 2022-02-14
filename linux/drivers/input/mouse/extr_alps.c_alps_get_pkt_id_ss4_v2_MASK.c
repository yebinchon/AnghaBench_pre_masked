
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum SS4_PACKET_ID { ____Placeholder_SS4_PACKET_ID } SS4_PACKET_ID ;


 int FUNC_0 (unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum SS4_PACKET_ID FUNC_1(unsigned char *VAR_5)
{
 enum SS4_PACKET_ID VAR_6 = VAR_0;

 switch (VAR_5[3] & 0x30) {
 case 0x00:
  if (FUNC_0(VAR_5)) {
   VAR_6 = VAR_0;
  } else {
   VAR_6 = VAR_2;
  }
  break;
 case 0x10:

  VAR_6 = VAR_4;
  break;
 case 0x20:

  VAR_6 = VAR_3;
  break;
 case 0x30:

  VAR_6 = VAR_1;
  break;
 }

 return VAR_6;
}
