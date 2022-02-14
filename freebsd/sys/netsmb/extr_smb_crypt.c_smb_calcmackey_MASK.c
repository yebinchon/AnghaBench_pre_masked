
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef int u_int ;
typedef int u_char ;
struct smb_vc {int vc_hflags2; int vc_mackeylen; int * vc_mackey; int vc_ch; scalar_t__ vc_seqno; } ;
typedef int MD4_CTX ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 void* FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *,char const*) ;
 char* FUNC_10 (struct smb_vc*) ;
 int FUNC_11 (char const*) ;

int
FUNC_12(struct smb_vc *VAR_3)
{
 const char *VAR_4;
 u_int16_t *VAR_5;
 u_int VAR_6;
 MD4_CTX VAR_7;
 u_char VAR_8[16], VAR_9[21];

 FUNC_0(VAR_3->vc_hflags2 & VAR_2,
     ("signatures not enabled"));

 if (VAR_3->vc_mackey != ((void*)0)) {
  FUNC_6(VAR_3->vc_mackey, VAR_0);
  VAR_3->vc_mackey = ((void*)0);
  VAR_3->vc_mackeylen = 0;
  VAR_3->vc_seqno = 0;
 }





 VAR_3->vc_mackeylen = 16 + 24;
 VAR_3->vc_mackey = FUNC_7(VAR_3->vc_mackeylen, VAR_0, VAR_1);





 VAR_4 = FUNC_10(VAR_3);
 VAR_6 = FUNC_11(VAR_4);
 VAR_5 = FUNC_7((VAR_6 + 1) * sizeof(u_int16_t), VAR_0, VAR_1);
 FUNC_9(VAR_5, VAR_4);
 FUNC_2(&VAR_7);
 FUNC_3(&VAR_7, (u_char *)VAR_5, VAR_6 * sizeof(u_int16_t));
 FUNC_1(VAR_8, &VAR_7);
 FUNC_2(&VAR_7);
 FUNC_3(&VAR_7, VAR_8, 16);
 FUNC_1(VAR_3->vc_mackey, &VAR_7);
 FUNC_6(VAR_5, VAR_0);





 FUNC_5(VAR_9, 21);
 FUNC_4(VAR_8, VAR_9, 16);
 FUNC_8(VAR_9, VAR_3->vc_ch, VAR_3->vc_mackey + 16);
 FUNC_8(VAR_9 + 7, VAR_3->vc_ch, VAR_3->vc_mackey + 24);
 FUNC_8(VAR_9 + 14, VAR_3->vc_ch, VAR_3->vc_mackey + 32);

 return (0);
}
