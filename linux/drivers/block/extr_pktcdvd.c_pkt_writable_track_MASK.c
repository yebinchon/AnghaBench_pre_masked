
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rt; int blank; int packet; int fp; } ;
typedef TYPE_1__ track_information ;
struct pktcdvd_device {int mmc3_profile; } ;


 int FUNC_0 (struct pktcdvd_device*,char*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct pktcdvd_device *VAR_0, track_information *VAR_1)
{
 switch (VAR_0->mmc3_profile) {
  case 0x1a:
  case 0x12:

   return 1;
  default:
   break;
 }

 if (!VAR_1->packet || !VAR_1->fp)
  return 0;




 if (VAR_1->rt == 0 && VAR_1->blank == 0)
  return 1;

 if (VAR_1->rt == 0 && VAR_1->blank == 1)
  return 1;

 if (VAR_1->rt == 1 && VAR_1->blank == 0)
  return 1;

 FUNC_0(VAR_0, "bad state %d-%d-%d\n", VAR_1->rt, VAR_1->blank, VAR_1->packet);
 return 0;
}
