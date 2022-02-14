
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request_sense {int sense_key; int asc; } ;
struct request {int rq_flags; } ;
struct TYPE_5__ {struct request_sense sense_data; } ;
typedef TYPE_1__ ide_drive_t ;
struct TYPE_6__ {int * cmd; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;

 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_2__* FUNC_2 (struct request*) ;

__attribute__((used)) static int FUNC_3(ide_drive_t *VAR_3, struct request *VAR_4)
{
 struct request_sense *VAR_5 = &VAR_3->sense_data;
 int VAR_6 = 0;

 if (!VAR_5 || !VAR_4 || (VAR_4->rq_flags & VAR_2))
  return 0;

 FUNC_1(VAR_1, "sense_key: 0x%x", VAR_5->sense_key);

 switch (VAR_5->sense_key) {
 case 130:
 case 129:
  break;
 case 131:




  if (VAR_5->asc == 0x3a || VAR_5->asc == 0x04)
   break;
  VAR_6 = 1;
  break;
 case 132:




  if (FUNC_2(VAR_4)->cmd[0] == VAR_0 && VAR_5->asc == 0x24)
   break;
  VAR_6 = 1;
  break;
 case 128:





  FUNC_0(VAR_3);
  break;
 default:
  VAR_6 = 1;
  break;
 }
 return VAR_6;
}
