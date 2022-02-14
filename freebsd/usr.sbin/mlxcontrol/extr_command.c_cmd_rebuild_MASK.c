
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_rebuild_request {int rr_status; int rr_target; int rr_channel; } ;


 int VAR_0 ;
 int FUNC_0 (int,char**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int ,struct mlx_rebuild_request*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*,int *,int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int
FUNC_8(int VAR_1, char *VAR_2[])
{
    struct mlx_rebuild_request VAR_3;
    int VAR_4, VAR_5;

    if (VAR_1 != 3)
 return(FUNC_0(VAR_1, VAR_2));


    if ((VAR_4 = FUNC_2(VAR_2[1])) == -1) {
 FUNC_7("'%s' is not a valid controller", VAR_2[1]);
 return(1);
    }

    if ((FUNC_5(VAR_2[2], "disk%2d%2d", &VAR_3.rr_channel, &VAR_3.rr_target) != 2) &&
 (FUNC_5(VAR_2[2], "unknown%2d%2d", &VAR_3.rr_channel, &VAR_3.rr_target) != 2)) {
 FUNC_7("'%s' is not a valid physical drive", VAR_2[2]);
 return(1);
    }

    if ((VAR_5 = FUNC_4(FUNC_1(VAR_4), 0)) < 0) {
 FUNC_6("can't open %s", FUNC_1(VAR_4));
 return(1);
    }

    if ((FUNC_3(VAR_5, VAR_0, &VAR_3)) < 0) {
 switch(VAR_3.rr_status) {
 case 0x0002:
     FUNC_7("the drive at %d:%d is already ONLINE", VAR_3.rr_channel, VAR_3.rr_target);
     break;
 case 0x0004:
     FUNC_7("drive failed during rebuild");
     break;
 case 0x0105:
     FUNC_7("there is no drive at channel %d, target %d", VAR_3.rr_channel, VAR_3.rr_target);
     break;
 case 0x0106:
     FUNC_7("drive rebuild or consistency check is already in progress on this controller");
     break;
 default:
     FUNC_6("ioctl MLXD_REBUILDASYNC");
 }
    }
    return(0);
}
