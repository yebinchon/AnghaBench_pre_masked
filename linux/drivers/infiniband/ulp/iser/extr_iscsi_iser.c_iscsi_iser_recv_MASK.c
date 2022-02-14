
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_hdr {int dlength; } ;
struct iscsi_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_conn*,struct iscsi_hdr*,char*,int) ;
 int FUNC_1 (struct iscsi_conn*,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct iscsi_conn *VAR_2, struct iscsi_hdr *VAR_3,
  char *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;


 VAR_7 = FUNC_4(VAR_3->dlength);
 if (VAR_7 > VAR_5 || (VAR_7 + 4) < VAR_5) {
  FUNC_3("wrong datalen %d (hdr), %d (IB)\n",
   VAR_7, VAR_5);
  VAR_6 = VAR_0;
  goto error;
 }

 if (VAR_7 != VAR_5)
  FUNC_2("aligned datalen (%d) hdr, %d (IB)\n",
   VAR_7, VAR_5);

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 && VAR_6 != VAR_1)
  goto error;

 return;
error:
 FUNC_1(VAR_2, VAR_6);
}
