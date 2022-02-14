
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union el_timestamp {int as_int; } ;
struct TYPE_9__ {int frame_length; } ;
struct TYPE_8__ {int frame_length; int frame_packet_count; union el_timestamp timestamp; } ;
struct TYPE_7__ {int frame_length; int frame_packet_count; union el_timestamp timestamp; } ;
struct TYPE_6__ {int frame_length; int frame_packet_count; } ;
struct TYPE_10__ {TYPE_4__ logout_header; TYPE_3__ err_halt; TYPE_2__ sys_event; TYPE_1__ sys_err; } ;
struct el_subpacket {unsigned long length; int type; int class; TYPE_5__ by_type; } ;


 int VAR_0 ;




 int FUNC_0 (union el_timestamp*) ;
 int FUNC_1 (struct el_subpacket*,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,char*,int ,...) ;

__attribute__((used)) static struct el_subpacket *
FUNC_3(struct el_subpacket *VAR_2)
{
 union el_timestamp VAR_3;
 char *VAR_4 = "UNKNOWN EVENT";
 int VAR_5 = 0;
 int VAR_6 = 0;

 if (VAR_2->class != VAR_0) {
  FUNC_2("%s** Unexpected header CLASS %d TYPE %d, aborting\n",
         VAR_1,
         VAR_2->class, VAR_2->type);
  return ((void*)0);
 }

 switch(VAR_2->type) {
 case 129:
  VAR_4 = "SYSTEM ERROR";
  VAR_6 = VAR_2->by_type.sys_err.frame_length;
  VAR_5 =
   VAR_2->by_type.sys_err.frame_packet_count;
  VAR_3.as_int = 0;
  break;
 case 128:
  VAR_4 = "SYSTEM EVENT";
  VAR_6 = VAR_2->by_type.sys_event.frame_length;
  VAR_5 =
   VAR_2->by_type.sys_event.frame_packet_count;
  VAR_3 = VAR_2->by_type.sys_event.timestamp;
  break;
 case 131:
  VAR_4 = "ERROR HALT";
  VAR_6 = VAR_2->by_type.err_halt.frame_length;
  VAR_5 =
   VAR_2->by_type.err_halt.frame_packet_count;
  VAR_3 = VAR_2->by_type.err_halt.timestamp;
  break;
 case 130:
  VAR_4 = "LOGOUT FRAME";
  VAR_6 = VAR_2->by_type.logout_header.frame_length;
  VAR_5 = 1;
  VAR_3.as_int = 0;
  break;
 default:
  FUNC_2("%s** Unknown header - CLASS %d TYPE %d, aborting\n",
         VAR_1,
         VAR_2->class, VAR_2->type);
  return ((void*)0);
 }

 FUNC_2("%s*** %s:\n"
          "  CLASS %d, TYPE %d\n",
        VAR_1,
        VAR_4,
        VAR_2->class, VAR_2->type);
 FUNC_0(&VAR_3);




 FUNC_1(VAR_2, VAR_5);


 VAR_2 = (struct el_subpacket *)
  ((unsigned long)VAR_2 + VAR_2->length + VAR_6);
 return VAR_2;
}
