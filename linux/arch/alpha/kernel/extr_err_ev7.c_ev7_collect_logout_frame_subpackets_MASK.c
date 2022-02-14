
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ev7_pal_zbox_subpacket {int dummy; } ;
struct ev7_pal_rbox_subpacket {int dummy; } ;
struct ev7_pal_processor_subpacket {int dummy; } ;
struct ev7_pal_logout_subpacket {int subpacket_count; } ;
struct ev7_pal_io_subpacket {int dummy; } ;
struct ev7_pal_environmental_subpacket {int dummy; } ;
struct ev7_lf_subpackets {struct ev7_pal_environmental_subpacket** env; struct ev7_pal_io_subpacket* io; struct ev7_pal_zbox_subpacket* zbox; struct ev7_pal_rbox_subpacket* rbox; struct ev7_pal_processor_subpacket* ev7; struct ev7_pal_logout_subpacket* logout; } ;
struct TYPE_3__ {scalar_t__ data_start; } ;
struct TYPE_4__ {TYPE_1__ raw; } ;
struct el_subpacket {scalar_t__ class; scalar_t__ type; TYPE_2__ by_type; scalar_t__ length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (char*,int ,scalar_t__,int) ;

struct ev7_lf_subpackets *
FUNC_2(struct el_subpacket *VAR_5,
        struct ev7_lf_subpackets *VAR_6)
{
 struct el_subpacket *VAR_7;
 int VAR_8;





 if (VAR_5->class != VAR_0 ||
     VAR_5->type != VAR_2)
  return ((void*)0);




 VAR_5 = (struct el_subpacket *)
  ((unsigned long)VAR_5 + VAR_5->length);




 if (VAR_5->class != VAR_1 ||
     VAR_5->type != VAR_3)
  return ((void*)0);

 VAR_6->logout = (struct ev7_pal_logout_subpacket *)
  VAR_5->by_type.raw.data_start;




 VAR_7 = (struct el_subpacket *)
  ((unsigned long)VAR_5 + VAR_5->length);
 for (VAR_8 = 0;
      VAR_7 && VAR_8 < VAR_6->logout->subpacket_count;
      VAR_7 = (struct el_subpacket *)
       ((unsigned long)VAR_7 + VAR_7->length), VAR_8++) {



  if (VAR_7->class != VAR_1) {
   FUNC_1("%s**UNEXPECTED SUBPACKET CLASS %d "
          "IN LOGOUT FRAME (packet %d\n",
          VAR_4, VAR_7->class, VAR_8);
   return ((void*)0);
  }




  switch(VAR_7->type) {
  case 130:
   VAR_6->ev7 =
    (struct ev7_pal_processor_subpacket *)
    VAR_7->by_type.raw.data_start;
   break;

  case 129:
   VAR_6->rbox = (struct ev7_pal_rbox_subpacket *)
    VAR_7->by_type.raw.data_start;
   break;

  case 128:
   VAR_6->zbox = (struct ev7_pal_zbox_subpacket *)
    VAR_7->by_type.raw.data_start;
   break;

  case 131:
   VAR_6->io = (struct ev7_pal_io_subpacket *)
    VAR_7->by_type.raw.data_start;
   break;

  case 137:
  case 138:
  case 132:
  case 135:
  case 133:
  case 134:
  case 136:
   VAR_6->env[FUNC_0(VAR_7->type)] =
     (struct ev7_pal_environmental_subpacket *)
    VAR_7->by_type.raw.data_start;
   break;

  default:



   return ((void*)0);
  }
 }

 return VAR_6;
}
