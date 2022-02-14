
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCPApc_event {size_t event_id; } ;
struct TCPAevent {int event_type; int event_size; } ;
 size_t* VAR_0 ;

 int FUNC_0 (char**,char*,size_t) ;
 char* FUNC_1 (int ,int) ;
 int FUNC_2 (char*,struct TCPApc_event*,int ) ;
 size_t* VAR_1 ;

__attribute__((used)) static char *
FUNC_3(struct TCPAevent *VAR_2)
{
 struct TCPApc_event *VAR_3;
 char *VAR_4 = ((void*)0);

 VAR_3 = (struct TCPApc_event *)(VAR_2 + 1);

 switch(VAR_2->event_type) {
 case 136:
 case 138:
 case 128:
 case 145:
 case 133:
 case 135:
 case 134:
 case 153:
 case 140:
 case 129:
 case 154:
 case 150:
 case 149:
 case 148:
 case 147:
 case 146:
  FUNC_0(&VAR_4, "%zu",
      VAR_1[VAR_2->event_type]);
  break;

 case 157:
  VAR_4 = FUNC_1(VAR_2->event_size + 1, sizeof(char));
  FUNC_2(VAR_4, VAR_3, VAR_2->event_size);
  break;

 case 151:
  switch (VAR_3->event_id) {
  case 132:
  case 156:
  case 155:
  case 144:
  case 142:
  case 143:
  case 130:
  case 139:
  case 152:
  case 141:
  case 131:
  case 137:
   FUNC_0(&VAR_4, "%zu",
       VAR_0[VAR_3->event_id]);
   break;

  default:
   FUNC_0(&VAR_4, "<unknown tag 0x%02zx>",
       VAR_3->event_id);
   break;
  }
  break;

 default:
  FUNC_0(&VAR_4, "<unknown 0x%02zx>", VAR_2->event_type);
  break;
 }

 return VAR_4;
}
