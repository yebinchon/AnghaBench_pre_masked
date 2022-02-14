
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union drbd_state {scalar_t__ susp_nod; scalar_t__ susp_fen; scalar_t__ user_isp; scalar_t__ peer_isp; scalar_t__ aftr_isp; int pdsk; int disk; int peer; int role; int conn; } ;
struct drbd_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drbd_device*,char*,char const*,int ,int ,int ,int ,int ,char,char,char,unsigned char,float,char) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (union drbd_state) ;

__attribute__((used)) static void FUNC_5(struct drbd_device *VAR_0, const char *VAR_1, union drbd_state VAR_2)
{
 FUNC_2(VAR_0, " %s = { cs:%s ro:%s/%s ds:%s/%s %c%c%c%c%c%c }\n",
     VAR_1,
     FUNC_0(VAR_2.conn),
     FUNC_3(VAR_2.role),
     FUNC_3(VAR_2.peer),
     FUNC_1(VAR_2.disk),
     FUNC_1(VAR_2.pdsk),
     FUNC_4(VAR_2) ? 's' : 'r',
     VAR_2.aftr_isp ? 'a' : '-',
     VAR_2.peer_isp ? 'p' : '-',
     VAR_2.user_isp ? 'u' : '-',
     VAR_2.susp_fen ? 'F' : '-',
     VAR_2.susp_nod ? 'N' : '-'
     );
}
