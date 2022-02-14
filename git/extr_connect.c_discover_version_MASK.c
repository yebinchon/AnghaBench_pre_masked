
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_reader {int line; } ;
typedef enum protocol_version { ____Placeholder_protocol_version } protocol_version ;


 int FUNC_0 (char*) ;




 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct packet_reader*) ;
 int FUNC_4 (struct packet_reader*) ;
 int FUNC_5 (struct packet_reader*) ;





enum protocol_version FUNC_6(struct packet_reader *VAR_0)
{
 enum protocol_version VAR_1 = 131;





 switch (FUNC_3(VAR_0)) {
 case 134:
  FUNC_2(0);
 case 133:
 case 135:
  VAR_1 = 130;
  break;
 case 132:
  VAR_1 = FUNC_1(VAR_0->line);
  break;
 }

 switch (VAR_1) {
 case 128:
  FUNC_5(VAR_0);
  break;
 case 129:

  FUNC_4(VAR_0);
  break;
 case 130:
  break;
 case 131:
  FUNC_0("unknown protocol version");
 }

 return VAR_1;
}
