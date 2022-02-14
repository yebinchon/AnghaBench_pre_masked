
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
const char *
FUNC_0(int VAR_0)
{
 u_char VAR_1 = VAR_0 & 0xff;
 const char *VAR_2;

 switch (VAR_1) {
 case 141:
  VAR_2 = "Destination Unreachable";
  break;
 case 135:
  VAR_2 = "Packet Too Big";
  break;
 case 133:
  VAR_2 = "Time Exceeded";
  break;
 case 134:
  VAR_2 = "Parameter Problem";
  break;
 case 139:
  VAR_2 = "Echo Request";
  break;
 case 140:
  VAR_2 = "Echo Reply";
  break;
 case 138:
  VAR_2 = "Group Membership Query";
  break;
 case 136:
  VAR_2 = "Group Membership Report";
  break;
 case 137:
  VAR_2 = "Group Membership Reduction";
  break;
 case 128:
  VAR_2 = "Router Solicitation";
  break;
 case 129:
  VAR_2 = "Router Advertisement";
  break;
 case 131:
  VAR_2 = "Neighbor Solicitation";
  break;
 case 132:
  VAR_2 = "Neighbor Advertisement";
  break;
 case 130:
  VAR_2 = "Redirect";
  break;
 default:
  VAR_2 = "Unknown";
  break;
 }
 return VAR_2;
}
